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
#ifndef DSRC_V2_MAPEM_PDU_DESCRIPTIONS_RECEIVER_H
#define DSRC_V2_MAPEM_PDU_DESCRIPTIONS_RECEIVER_H

#if WIND_ROS_VERSION == 1
 #include <dsrc_v2_mapem_pdu_descriptions_msgs/MAPEM.h>
 #include <ros/ros.h>
#else
 #include <dsrc_v2_mapem_pdu_descriptions_msgs/msg/mapem.hpp>
 #include <rclcpp/rclcpp.hpp>
#endif

#include <wind_constants.h>
#include <dsrc_v2_mapem_pdu_descriptions_wer_decoder.h>
#include <screen_logger.h>

namespace wind
{
namespace wind_ros
{
	#if WIND_ROS_VERSION == 1
      class Receiver_dsrc_v2_mapem_pdu_descriptions
	#else
	  class Receiver_dsrc_v2_mapem_pdu_descriptions : public rclcpp::Node
    #endif
    {
    public:
	
	     /*
		 * Constructor
		 */
        #if WIND_ROS_VERSION == 1
		Receiver_dsrc_v2_mapem_pdu_descriptions() : node_handle_("~"),
			publisher_(nullptr),
			mirror_publisher_(nullptr),
			messages_counter_(0),
			slogger_(nullptr),
			//slogger_(new ScreenLogger()),
			debug_(false),
			busy_(false)
		#else
		Receiver_dsrc_v2_mapem_pdu_descriptions() : Node("receiver_dsrc_v2_mapem_pdu_descriptions"),
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
        ~Receiver_dsrc_v2_mapem_pdu_descriptions() {
			#if WIND_ROS_VERSION == 1
            if (publisher_) {
                delete publisher_;
                publisher_ = nullptr;
            }
            if (mirror_publisher_) {
                delete mirror_publisher_;
                mirror_publisher_ = nullptr;
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
            return "MAPEM";
        }
		
    private:        	
		#if WIND_ROS_VERSION == 1
		  ros::NodeHandle node_handle_;
		  ros::Publisher* publisher_;
		  ros::Publisher* mirror_publisher_;		  		 
		#else
		  rclcpp::Publisher<dsrc_v2_mapem_pdu_descriptions_msgs::msg::MAPEM>::SharedPtr publisher_;
          rclcpp::Publisher<dsrc_v2_mapem_pdu_descriptions_msgs::msg::MAPEM>::SharedPtr mirror_publisher_;
		#endif
        
        std::string     topic_;
        uint32_t        messages_counter_;
        ScreenLogger*   slogger_;
		bool            debug_;
		bool            busy_;
		wind::decoder_dsrc_v2_mapem_pdu_descriptions::WerDecoder* decoder_;
    };
}  // Closing namespace wind_ros
}  // Closing namespace wind

#endif //DSRC_V2_MAPEM_PDU_DESCRIPTIONS_RECEIVER_H