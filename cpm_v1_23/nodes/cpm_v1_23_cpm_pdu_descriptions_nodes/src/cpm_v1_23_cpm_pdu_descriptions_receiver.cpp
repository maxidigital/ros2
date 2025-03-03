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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0
 * 
 * Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <cpm_v1_23_cpm_pdu_descriptions_receiver.h>

namespace {
    // Buffer positions
    constexpr size_t FLAG_POSITION = 2;
    constexpr size_t TEST_FLAG_BIT = 0;
    //constexpr size_t MIRROR_FLAG_BIT = 1;
        
	// Relative offset postions for the header
    constexpr size_t PROTOCOL_VERSION_POS = 0;
    constexpr size_t MESSAGE_ID_POS = 1;
    constexpr size_t STATION_ID_START_POS = 2;            
}

void
wind::wind_ros::Receiver_cpm_v1_23_cpm_pdu_descriptions::start() 
{	
    decoder_ = new wind::decoder_cpm_v1_23_cpm_pdu_descriptions::WerDecoder(slogger_, debug_);

    #if WIND_ROS_VERSION == 1      	  
        publisher_        = new ros::Publisher(node_handle_.advertise<cpm_v1_23_cpm_pdu_descriptions_msgs::CollectivePerceptionMessage>(topic_, 0));
        //mirror_publisher_ = new ros::Publisher(node_handle_.advertise<cpm_v1_23_cpm_pdu_descriptions_msgs::CollectivePerceptionMessage>(SENDER_ROS_TOPIC, 0));	  	 
    #else
        publisher_         = create_publisher<cpm_v1_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage>(topic_, 10);
        //mirror_publisher_  = create_publisher<cpm_v1_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage>(SENDER_ROS_TOPIC, 10);
    #endif
}

/**
 * 
 */
void
wind::wind_ros::Receiver_cpm_v1_23_cpm_pdu_descriptions::incoming_message(const void* buf)
{
    if (!buf) {
        slogger_->print() << "Error: Received null buffer";
        return;
    }
    
    if(busy_)
        return;
    busy_ = true;
	
    const uint8_t *buffer = (const uint8_t *)buf;
	        
    uint8_t offset = int(buffer[1]) ? INDICATION_HEADER_SIZE : REQUEST_HEADER_SIZE;        

    try {    
        unsigned int protocolVersion = int(buffer[PROTOCOL_VERSION_POS + offset]);
        unsigned int messageId       = int(buffer[MESSAGE_ID_POS + offset]);
        
        uint32_t station_id = (static_cast<uint32_t>(buffer[STATION_ID_START_POS + 3 + offset]) << 24) |
                                    (static_cast<uint32_t>(buffer[STATION_ID_START_POS + 2 + offset]) << 16) |
                                    (static_cast<uint32_t>(buffer[STATION_ID_START_POS + 1 + offset]) << 8)  |
                                    static_cast<uint32_t>(buffer[STATION_ID_START_POS + offset]);

        uint8_t flags = buffer[FLAG_POSITION];
        int bit0      = flags & 1;                 // test message flag
        //int bit1      = (flags >> 1) & 1;       // mirror flag        // deprecated
            
        #if WIND_ROS_VERSION == 1    
            cpm_v1_23_cpm_pdu_descriptions_msgs::CollectivePerceptionMessage msg;
        #else
            cpm_v1_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage msg;
        #endif
        
        slogger_->print() << "Decoding CollectivePerceptionMessage: msgId("      << messageId   << ":" << protocolVersion << 
                                ") #("      << ++messages_counter_ << 
                                ") stationId("      << station_id << 
                                ") test("           << bit0      << ")";

        bool decoded = decoder_->decode(&msg, &buffer[offset]);
        if(decoded)
        {
            if(debug_)
                slogger_->print() << "Decoding " << tools::green("successfull");
            
            slogger_->print() << "Publishing " << tools::bold("CollectivePerceptionMessage") << " on topic " << tools::magenta(topic_);
            publisher_->publish(msg);        
        }
        else {
            slogger_->error() << "Error: Failed to decode message";
        }
    
    } catch (const std::exception& e) {
        slogger_->error() << "Exception while processing message: " << e.what();
    } catch (...) {
        slogger_->error() << "Unknown exception while processing message";
    }
    
    busy_ = false;
}