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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0
 * 
 * Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(302637) e2v(1) version(3)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef MAD_E2V_MADURBAN_SENDER_H
#define MAD_E2V_MADURBAN_SENDER_H

#if WIND_ROS_VERSION == 1
 #include <ros/ros.h>
 #include <mad_e2v_madurban_msgs/EPUtoVehicle.h>   
#else
 #include <rclcpp/rclcpp.hpp> 
 #include <mad_e2v_madurban_msgs/msg/ep_uto_vehicle.hpp>
#endif
#include <udp_sender.h>

#include <wind_constants.h>
#include <mad_e2v_madurban_wer_encoder.h>
#include <tools.h>
#include <screen_logger.h>
#include <disk_logger.h>

namespace wind {
namespace wind_ros {

#if WIND_ROS_VERSION == 1
  class Sender_mad_e2v_madurban
#else
  class Sender_mad_e2v_madurban : public rclcpp::Node
#endif
{
	
public:

	#if WIND_ROS_VERSION == 1
     Sender_mad_e2v_madurban() {	
	#else
     Sender_mad_e2v_madurban() : rclcpp::Node(SENDER_NODE_NAME) {
    #endif		
		messages_counter_ = 0;
		failed_ = 0;
		buff_ = new uint8_t[1024*1024*10];
		busy_ = false;
	}
		
    ~Sender_mad_e2v_madurban() {
		delete[] buff_;		
		delete encoder_;			
		delete udp_sender_;		
	};
	
    void start();    
    
    void set_screen_logger(ScreenLogger *logger) {
        slogger_ = logger;
    }
    
    void set_disk_logger(DiskLogger *logger) {
        dlogger_ = logger;
    }
	
	void set_debug(bool debug) {
        debug_ = debug;
    }
	
    void set_show_hex(bool show) {
        show_hex_ = show;
    }
	
    void set_topic(std::string topic) {
		topic_ = topic;
    }
	
	void set_output_ip(std::string ip) {
		output_ip_ = ip;
    }
	
	void set_output_port(int port) {
		output_port_ = port;
    }
	
private:
    const int              REQUEST_HEADER_SIZE_    = 44;
    const int              INDICATION_HEADER_SIZE_ = 52;
    
	#if WIND_ROS_VERSION == 1
	 ros::NodeHandle        node_handle_;
     ros::Subscriber        subscriber_;
	 void callback(const mad_e2v_madurban_msgs::EPUtoVehicle::ConstPtr& msg);	 
	#else
	 rclcpp::Subscription<mad_e2v_madurban_msgs::msg::EPUtoVehicle>::SharedPtr subscriber;
     void callback(const std::shared_ptr<mad_e2v_madurban_msgs::msg::EPUtoVehicle>& msg);	 
    #endif
	
    unsigned short int     btp_port_ = 2030;
    std::string            name_;    
	std::string            topic_;
	std::string            output_ip_;
	std::string            host_;
    int                    output_port_;
    uint32_t               messages_counter_;
    uint32_t               failed_;
    uint8_t*               buff_;
    ScreenLogger*          slogger_;
    DiskLogger*            dlogger_;
	bool                   debug_;
    bool                   show_hex_;
    bool                   busy_;	
	wind::comm::UDPSender* udp_sender_;
	wind::encoder_mad_e2v_madurban::WerEncoder* encoder_;

	void print_message(std::size_t headerLen, std::size_t messageLen);
};

} // Closing namespace ros
} // Closing namespace wind

#endif //MAD_E2V_MADURBAN_SENDER_H