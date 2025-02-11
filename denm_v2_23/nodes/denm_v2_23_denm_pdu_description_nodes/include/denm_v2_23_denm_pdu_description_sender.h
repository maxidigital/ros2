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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:denm_v2_23:1.0
 * 
 * Module: DENM_PDU_Description {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) denmPduRelease2(103831) major-version-2(2) minor-version-2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef DENM_V2_23_DENM_PDU_DESCRIPTION_SENDER_H
#define DENM_V2_23_DENM_PDU_DESCRIPTION_SENDER_H

#if WIND_ROS_VERSION == 1
 #include <ros/ros.h>
 #include <denm_v2_23_denm_pdu_description_msgs/DENM.h>   
#else
 #include <rclcpp/rclcpp.hpp> 
 #include <denm_v2_23_denm_pdu_description_msgs/msg/denm.hpp>
#endif
#include <udp_sender.h>

#include <wind_constants.h>
#include <denm_v2_23_denm_pdu_description_wer_encoder.h>
#include <tools.h>
#include <screen_logger.h>
#include <disk_logger.h>

namespace wind {
namespace wind_ros {

#if WIND_ROS_VERSION == 1
  class Sender_denm_v2_23_denm_pdu_description
#else
  class Sender_denm_v2_23_denm_pdu_description : public rclcpp::Node
#endif
{
	
public:

	#if WIND_ROS_VERSION == 1
     Sender_denm_v2_23_denm_pdu_description() {	
	#else
     Sender_denm_v2_23_denm_pdu_description() : rclcpp::Node(SENDER_NODE_NAME) {
    #endif		
		messages_counter_ = 0;
		failed_ = 0;
		buff_ = new uint8_t[1024*1024*10];
		busy_ = false;
	}
		
    ~Sender_denm_v2_23_denm_pdu_description() {
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
	 void callback(const denm_v2_23_denm_pdu_description_msgs::DENM::ConstPtr& msg);	 
	#else
	 rclcpp::Subscription<denm_v2_23_denm_pdu_description_msgs::msg::DENM>::SharedPtr subscriber;
     void callback(const std::shared_ptr<denm_v2_23_denm_pdu_description_msgs::msg::DENM>& msg);	 
    #endif
	
    unsigned short int     btp_port_ = 2002;
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
	wind::encoder_denm_v2_23_denm_pdu_description::WerEncoder* encoder_;

	void print_message(std::size_t headerLen, std::size_t messageLen);
};

} // Closing namespace ros
} // Closing namespace wind

#endif //DENM_V2_23_DENM_PDU_DESCRIPTION_SENDER_H