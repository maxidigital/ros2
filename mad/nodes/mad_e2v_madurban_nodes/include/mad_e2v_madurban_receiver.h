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
#ifndef MAD_E2V_MADURBAN_RECEIVER_H
#define MAD_E2V_MADURBAN_RECEIVER_H

#if WIND_ROS_VERSION == 1
 #include <mad_e2v_madurban_msgs/EPUtoVehicle.h>
 #include <ros/ros.h>
#else
 #include <mad_e2v_madurban_msgs/msg/ep_uto_vehicle.hpp>
 #include <rclcpp/rclcpp.hpp>
#endif

#include <wind_constants.h>
#include <mad_e2v_madurban_wer_decoder.h>
#include <screen_logger.h>

namespace wind
{
namespace wind_ros
{
	#if WIND_ROS_VERSION == 1
      class Receiver_mad_e2v_madurban
	#else
	  class Receiver_mad_e2v_madurban : public rclcpp::Node
    #endif
    {
    public:
	
	     /*
		 * Constructor
		 */
        #if WIND_ROS_VERSION == 1
		Receiver_mad_e2v_madurban() : node_handle_("~"),
			publisher_(nullptr),			
			messages_counter_(0),
			slogger_(nullptr),
			//slogger_(new ScreenLogger()),
			debug_(false),
			busy_(false)
		#else
		Receiver_mad_e2v_madurban() : Node("receiver_mad_e2v_madurban"),
			messages_counter_(0),
			slogger_(nullptr),
			debug_(false),
			busy_(false)
		#endif
		{
		}
		    
         /*
		 * Destructor
		 */
        ~Receiver_mad_e2v_madurban() {
            if (decoder_) {
                delete decoder_;
            }
			
			#if WIND_ROS_VERSION == 1
            if (publisher_) {
                delete publisher_;
                publisher_ = nullptr;
            }            
			#endif
        }
	
        static const int REQUEST_HEADER_SIZE    = 44;
        static const int INDICATION_HEADER_SIZE = 52;
            
        void incoming_message(const void* buf);
        void start();                
        
        void set_screen_logger(ScreenLogger *logger) {
            slogger_ = logger;
        }
		
        void set_debug(bool debug) {
			debug_ = debug;
        }
		
        void set_topic(std::string t) {
            topic_ = t;
        }

        std::string message_name() {
            return "EPUtoVehicle";
        }
		
    private:        	
		#if WIND_ROS_VERSION == 1
		  ros::NodeHandle node_handle_;
		  ros::Publisher* publisher_;		  
		#else
		  rclcpp::Publisher<mad_e2v_madurban_msgs::msg::EPUtoVehicle>::SharedPtr publisher_;          
		#endif
        
        std::string     topic_;
        uint32_t        messages_counter_;
        ScreenLogger*   slogger_;
		bool            debug_;
		bool            busy_;
		wind::decoder_mad_e2v_madurban::WerDecoder* decoder_;
    };
}  // Closing namespace wind_ros
}  // Closing namespace wind

#endif //MAD_E2V_MADURBAN_RECEIVER_H