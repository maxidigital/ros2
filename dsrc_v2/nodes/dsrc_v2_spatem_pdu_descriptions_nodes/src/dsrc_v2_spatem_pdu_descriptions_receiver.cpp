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
 * Module: SPATEM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(103301) spatem(0) version2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <dsrc_v2_spatem_pdu_descriptions_receiver.h>


void
wind::wind_ros::Receiver_dsrc_v2_spatem_pdu_descriptions::start() {
	
	decoder_ = new wind::decoder_dsrc_v2_spatem_pdu_descriptions::WerDecoder(slogger_, debug_);
			
    #if WIND_ROS_VERSION == 1      	  
      publisher_        = new ros::Publisher(node_handle_.advertise<dsrc_v2_spatem_pdu_descriptions_msgs::SPATEM>(topic_, 0));
      mirror_publisher_ = new ros::Publisher(node_handle_.advertise<dsrc_v2_spatem_pdu_descriptions_msgs::SPATEM>(SENDER_ROS_TOPIC, 0));	  	 
    #else
      publisher_         = create_publisher<dsrc_v2_spatem_pdu_descriptions_msgs::msg::SPATEM>(topic_, 10);
      mirror_publisher_  = create_publisher<dsrc_v2_spatem_pdu_descriptions_msgs::msg::SPATEM>(SENDER_ROS_TOPIC, 10);
    #endif
}

/**
 * For msgId(14) protocolVersion(1)
 */
void
wind::wind_ros::Receiver_dsrc_v2_spatem_pdu_descriptions::incoming_message(const void* buf)
{	
	if(busy_)
        return;
    busy_ = true;
	
    const uint8_t *buffer = (const uint8_t *)buf;
    
    uint8_t offset = int(buffer[1]) ? INDICATION_HEADER_SIZE : REQUEST_HEADER_SIZE;
    
    unsigned int protocolVersion = int(buffer[0 + offset]);
    unsigned int messageId       = int(buffer[1 + offset]);
    uint32_t stationId = (static_cast<uint32_t>(buffer[2 + offset]) << 24) |
                         (static_cast<uint32_t>(buffer[3 + offset]) << 16) |
                         (static_cast<uint32_t>(buffer[4 + offset]) << 8)  |
                          static_cast<uint32_t>(buffer[5 + offset]);
						  
    if(messageId == 4 && protocolVersion == 2) {
        uint8_t flags = buffer[2];
        int bit0      = flags & 1;              // test message flag
        int bit1      = (flags >> 1) & 1;       // mirror flag
        slogger_->print() << "Incoming SPATEM: counter(" << ++messages_counter_ << ")";
        
        if(bit0 && bit1)
            slogger_->print() << "[TEST][MIRROR]_______IN_______";
        else if(bit0)
            slogger_->print() << "[TEST] ________IN_______";
        else if(bit1)
            slogger_->print() << "[MIRROR] ________IN_______";
    
        #if WIND_ROS_VERSION == 1    
          dsrc_v2_spatem_pdu_descriptions_msgs::SPATEM msg;
        #else
           dsrc_v2_spatem_pdu_descriptions_msgs::msg::SPATEM msg;
        #endif
		
		bool decoded = decoder_->decode(&msg, &buffer[offset]);
        if(decoded)
        {
            slogger_->print() << "Incoming SPATEM: msgId("      << messageId   << ":" << protocolVersion << 
			                    ") stationId("      << stationId << 
                                ") test("           << bit0      << 
                                ") mirror("         << bit1      << 
                                ")";
            if(bit1) {
                slogger_->print() << "Publishing SPATEM on topic " << SENDER_ROS_TOPIC;
                mirror_publisher_->publish(msg);
            } else {
                slogger_->print() << "Publishing SPATEM on topic " << MAGENTA << topic_ << RESET;
                publisher_->publish(msg);
            }
        }
    }
	
	busy_ = false;
}