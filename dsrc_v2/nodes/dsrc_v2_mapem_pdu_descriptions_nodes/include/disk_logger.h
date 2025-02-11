/*
 *
 * Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)
 * Institute of Transportation Systems. (https://www.dlr.de/ts/)
 *
 * 
 * Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
 * 
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 * 
 * SPDX-License-Identifier: EPL-2.0
 * 
 *
 * 
 * File automatically generated with DLR Wind v2
 * 
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0
 * 
 * Module: MAPEM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(103301) mapem(1) version2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef DISK_LOGGER_H
#define DISK_LOGGER_H

#if WIND_ROS_VERSION == 1
  #include <ros/ros.h>
#elif WIND_ROS_VERSION == 2
  #include "rclcpp/rclcpp.hpp"
#endif

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sys/stat.h>
#include <errno.h>
#include <screen_logger.h>

/**
 * @class DiskLogger
 * @brief A class for logging messages to a CSV file on disk.
 *
 * This class provides functionality to log messages with timestamps and log levels
 * to a CSV file. It automatically generates unique filenames and can create
 * directories if they don't exist.
 */
class DiskLogger 
{	
public:
    DiskLogger(bool isReceiver = true) : log_initialized_(false), foldername_("logs"), receiver_(isReceiver) {            
    }

    bool isEnabled() const {
        return log_initialized_;
    }
    
    bool enable(const std::string& alternativeFolder = "", const std::string& fileName = "") {		
		
		if (log_initialized_) {
            std::cerr << "Warning: DiskLogger is already initialized." << std::endl;
            return false;
        }
		
		if(receiver_)
			direction_ = "receiver";
		else
			direction_ = "sender  ";
		
		if(fileName.empty()) {
			if(receiver_)
				filename_ = "receiver_" + generateLogFilename();
			else
				filename_ = "sender_" + generateLogFilename();
		}
		else
			filename_ = std::string(fileName);

        if (!alternativeFolder.empty())
            foldername_ = alternativeFolder;		

        // Create the folder if it doesn't exist
        if (!createDirectory(foldername_)) {
            std::cerr << "Error: Could not create log directory: " << foldername_ << std::endl;
            return false;
        }

        std::string fullPath = foldername_ + "/" + filename_;
        std::ofstream file(fullPath.c_str(), std::ios::app);
        if (!file.is_open()) {
            std::cerr << "Error: Could not open log file: " << fullPath << std::endl;
            return false;
        }
        if (file.tellp() == 0) { // Check if the file is empty
            file << "Timestamp,Direction,Type,Message\n"; // CSV headers
        }
        log_initialized_ = true;

        //ROS_INFO_STREAM("Disk Logger enabled! Log file is " << fullPath);				
        
        return true;
    }

    void log(const std::string& type, const std::string& message) {
        if (!log_initialized_) {            
            return;
        }

        std::string fullPath = foldername_ + "/" + filename_;
        std::ofstream file(fullPath.c_str(), std::ios::app);
        if (!file.is_open()) {
            std::cerr << "Error: Could not open log file: " << fullPath << std::endl;
            return;
        }

        file << getCurrentTimestamp() << "," << direction_ << "," << type << "," << escapeCommas(message) << "\n";
    }

private:
    std::string foldername_;
    std::string filename_;
	std::string direction_;
    bool log_initialized_;
	bool receiver_;

    bool createDirectory(const std::string& path) {
        mode_t mode = 0755;
        int result = mkdir(path.c_str(), mode);
        if (result == 0) {
            return true;
        }
        if (errno == EEXIST) {
            // Directory already exists
            return true;
        }
        // If we get here, an error occurred
        std::cerr << "Error creating directory " << path << ": " << strerror(errno) << std::endl;
        return false;
    }

    std::string getCurrentTimestamp() {
        std::time_t now = std::time(nullptr);
        std::tm* tm = std::localtime(&now);

        char buffer[80];
        std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", tm);
        return std::string(buffer);
    }

    std::string escapeCommas(const std::string& str) {
        std::ostringstream oss;
        for (char c : str) {
            if (c == ',') {
                oss << "\\,"; // Escape commas
            } else {
                oss << c;
            }
        }
        return oss.str();
    }

    std::string generateLogFilename() {
        std::time_t now = std::time(nullptr);
        std::tm* tm = std::localtime(&now);

        char buffer[80];
        std::strftime(buffer, sizeof(buffer), "log%Y%m%d_%H%M%S.csv", tm);
        return std::string(buffer);
    }
};

#endif