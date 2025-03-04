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
#include <dsrc_v2_spatem_pdu_descriptions_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_dsrc_v2_spatem_pdu_descriptions
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(dsrc_v2_spatem_pdu_descriptions_msgs::SPATEM* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(dsrc_v2_spatem_pdu_descriptions_msgs::msg::SPATEM* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // SPATEM  SEQUENCE
        //  header     ItsPduHeader     
        //  spat       SPAT             
    
    // Field name: hheader
        // ItsPduHeader  SEQUENCE
            //  protocolVersion ItsPduHeader_protocolVersion     
            //  messageID       ItsPduHeader_messageID           
            //  stationID       StationID                        
        
        // Field name: protocol_version
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_1;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000000") << "| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: message_id
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_2 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_2;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000001") << "| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: station_id
        // Integer
        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
        uint32_t* _tmp_3 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_3;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000002") << "| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->error() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
            return false;
        }
    
    // Field name: spat
        // SPAT  SEQUENCE
            //  timeStamp     MinuteOfTheYear         OPTIONAL  
            //  name          DescriptiveName         OPTIONAL  
            //  intersections IntersectionStateList     
            //  regional      SPAT_regional           OPTIONAL  
            //  ...
        uint8_t* _ext_flag_1 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.
        
        if(debug) {
            logger->print() << "|" << tools::brown("000003") << "| Reading ext flag from ros->spat.: " << int(*_ext_flag_1);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_4;
            ros->spat.time_stamp.push_back(_tmp_4);
        
            if(debug)
                logger->print() << "|" << tools::brown("000004") << "| ros->spat.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_5;
            ros->spat.name.push_back(_tmp_5);
        
            if(debug)
                logger->print() << "|" << tools::brown("000005") << "| ros->spat.name " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SPATRegional _tmp_6;
            ros->spat.regional.push_back(_tmp_6);
        
            if(debug)
                logger->print() << "|" << tools::brown("000006") << "| ros->spat.regional " << tools::green("present");
        }
        
        if(ros->spat.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_7 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_7;
            ros->spat.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->print() << "|" << tools::brown("000007") << "| " << tools::getTypeName(ros->spat.time_stamp[0].value) << 
                             " spat.time_stamp[0].value: " << ros->spat.time_stamp[0].value;
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->error() << "Error: Value in 'spat.time_stamp[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->error() << "Error: Value in 'spat.time_stamp[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                return false;
            }
        }
        
        if(ros->spat.name.size() != 0) {
            // Field name: name
            // Text
            
            // TEXT  min(1) max(63) span(63)
            uint8_t* _tmp_8 = (uint8_t*)buffer;
            __aux64__ = *_tmp_8 + 1;
            buffer += 1;
            
            int _if__tmp_8 = __aux64__;
            for(int a = 0; a < _if__tmp_8; a++) {  // DescriptiveName
                char* __tmp__ = (char*)buffer++;
                ros->spat.name[0].value += *__tmp__;
            }
        }
        
        // Field name: intersections
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(32) span(32)
        int16_t* _tmp_9 = (int16_t*)buffer;
        buffer += 2;
        __aux64__ = *_tmp_9;
        __aux64__ += 1;     // +min
        
        int _if__tmp_9 = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000008") << "| SequenceOf ros->spat.intersections. size: " << int(__aux64__);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 1) {
            logger->error() << "Error: Value in 'spat.intersections.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 32) {
            logger->error() << "Error: Value in 'spat.intersections.value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
            return false;
        }
        
        
        for(int b = 0; b < _if__tmp_9; b++) {
            dsrc_v2_dsrc_msgs::msg::IntersectionState seqof_b;  // SEQUENCE
            ros->spat.intersections.elements.push_back(seqof_b);
        
                // IntersectionState  SEQUENCE
                    //  name               DescriptiveName              OPTIONAL  
                    //  id                 IntersectionReferenceID        
                    //  revision           MsgCount                       
                    //  status             IntersectionStatusObject       
                    //  moy                MinuteOfTheYear              OPTIONAL  
                    //  timeStamp          DSecond                      OPTIONAL  
                    //  enabledLanes       EnabledLaneList              OPTIONAL  
                    //  states             MovementList                   
                    //  maneuverAssistList ManeuverAssistList           OPTIONAL  
                    //  regional           IntersectionState_regional   OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_2 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[b].
                
                if(debug) {
                    logger->print() << "|" << tools::brown("000009") << "| Reading ext flag from ros->spat.intersections.elements[b].: " << int(*_ext_flag_2);
                }
                
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_10;
                    ros->spat.intersections.elements[b].name.push_back(_tmp_10);
                
                    if(debug)
                        logger->print() << "|" << tools::brown("000010") << "| ros->spat.intersections.elements[b].name " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_11;
                    ros->spat.intersections.elements[b].moy.push_back(_tmp_11);
                
                    if(debug)
                        logger->print() << "|" << tools::brown("000011") << "| ros->spat.intersections.elements[b].moy " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DSecond _tmp_12;
                    ros->spat.intersections.elements[b].time_stamp.push_back(_tmp_12);
                
                    if(debug)
                        logger->print() << "|" << tools::brown("000012") << "| ros->spat.intersections.elements[b].time_stamp " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::EnabledLaneList _tmp_13;
                    ros->spat.intersections.elements[b].enabled_lanes.push_back(_tmp_13);
                
                    if(debug)
                        logger->print() << "|" << tools::brown("000013") << "| ros->spat.intersections.elements[b].enabled_lanes " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::ManeuverAssistList _tmp_14;
                    ros->spat.intersections.elements[b].maneuver_assist_list.push_back(_tmp_14);
                
                    if(debug)
                        logger->print() << "|" << tools::brown("000014") << "| ros->spat.intersections.elements[b].maneuver_assist_list " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::IntersectionStateRegional _tmp_15;
                    ros->spat.intersections.elements[b].regional.push_back(_tmp_15);
                
                    if(debug)
                        logger->print() << "|" << tools::brown("000015") << "| ros->spat.intersections.elements[b].regional " << tools::green("present");
                }
                
                if(ros->spat.intersections.elements[b].name.size() != 0) {
                    // Field name: name
                    // Text
                    
                    // TEXT  min(1) max(63) span(63)
                    uint8_t* _tmp_16 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_16 + 1;
                    buffer += 1;
                    
                    int _if__tmp_16 = __aux64__;
                    for(int c = 0; c < _if__tmp_16; c++) {  // DescriptiveName
                        char* __tmp__ = (char*)buffer++;
                        ros->spat.intersections.elements[b].name[0].value += *__tmp__;
                    }
                }
                
                // Field name: id
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_17;
                        ros->spat.intersections.elements[b].id.region.push_back(_tmp_17);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000016") << "| ros->spat.intersections.elements[b].id.region " << tools::green("present");
                    }
                    
                    if(ros->spat.intersections.elements[b].id.region.size() != 0) {
                        // Field name: region
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_18 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_18;
                        ros->spat.intersections.elements[b].id.region[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000017") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].id.region[0].value) << 
                                         " spat.intersections.elements[b].id.region[0].value: " << ros->spat.intersections.elements[b].id.region[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    // Field name: id
                    // Integer
                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                    uint16_t* _tmp_19 = (uint16_t*) buffer; buffer += 2;
                    __aux64__ = *_tmp_19;
                    ros->spat.intersections.elements[b].id.id.value = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000018") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].id.id.value) << 
                                     " spat.intersections.elements[b].id.id.value: " << ros->spat.intersections.elements[b].id.id.value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                        return false;
                    }
                
                // Field name: revision
                // Integer
                // UINT8  min(0) max(127) span(128) datatype(UInt8)
                uint8_t* _tmp_20 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_20;
                ros->spat.intersections.elements[b].revision.value = __aux64__;
                
                if(debug) {
                    logger->print() << "|" << tools::brown("000019") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].revision.value) << 
                                 " spat.intersections.elements[b].revision.value: " << static_cast<int>(ros->spat.intersections.elements[b].revision.value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].revision.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].revision.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                    return false;
                }
                
                // Field name: status
                // BitString
                // BIT_STRING  min(16) max(16) span(1)
                uint8_t* _tmp_21 = (uint8_t*)buffer;
                __aux64__ = *_tmp_21 + 16;
                buffer += 1;
                
                if(debug)
                    logger->print() << "|" << tools::brown("000020") << "| spat.intersections.elements[b].status.value: " << __aux64__;
                
                int _if__tmp_21 = __aux64__;
                for(int d = 0; d < _if__tmp_21; d++) {
                    uint8_t __c__;
                    ros->spat.intersections.elements[b].status.values.push_back(__c__);
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    ros->spat.intersections.elements[b].status.values[d] = (*__b__ == 1);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 16) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].status.value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].status.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                    return false;
                }
                
                if(ros->spat.intersections.elements[b].moy.size() != 0) {
                    // Field name: moy
                    // Integer
                    // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
                    uint32_t* _tmp_22 = (uint32_t*) buffer; buffer += 4;
                    __aux64__ = *_tmp_22;
                    ros->spat.intersections.elements[b].moy[0].value = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000021") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].moy[0].value) << 
                                     " spat.intersections.elements[b].moy[0].value: " << ros->spat.intersections.elements[b].moy[0].value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].moy[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].moy[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                        return false;
                    }
                }
                
                if(ros->spat.intersections.elements[b].time_stamp.size() != 0) {
                    // Field name: time_stamp
                    // Integer
                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                    uint16_t* _tmp_23 = (uint16_t*) buffer; buffer += 2;
                    __aux64__ = *_tmp_23;
                    ros->spat.intersections.elements[b].time_stamp[0].value = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000022") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].time_stamp[0].value) << 
                                     " spat.intersections.elements[b].time_stamp[0].value: " << ros->spat.intersections.elements[b].time_stamp[0].value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].time_stamp[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].time_stamp[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                        return false;
                    }
                }
                
                if(ros->spat.intersections.elements[b].enabled_lanes.size() != 0) {
                    // Field name: enabled_lanes
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16)
                    int16_t* _tmp_24 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_24;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_24 = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000023") << "| SequenceOf ros->spat.intersections.elements[b].enabled_lanes[0]. size: " << int(__aux64__);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].enabled_lanes[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].enabled_lanes[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                        return false;
                    }
                    
                    
                    for(int e = 0; e < _if__tmp_24; e++) {
                        dsrc_v2_dsrc_msgs::msg::LaneID seqof_e;  // INTEGER
                        ros->spat.intersections.elements[b].enabled_lanes[0].elements.push_back(seqof_e);
                    
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_25 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_25;
                        ros->spat.intersections.elements[b].enabled_lanes[0].elements[e].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000024") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].enabled_lanes[0].elements[e].value) << 
                                         " spat.intersections.elements[b].enabled_lanes[0].elements[e].value: " << static_cast<int>(ros->spat.intersections.elements[b].enabled_lanes[0].elements[e].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].enabled_lanes[0].elements[e].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].enabled_lanes[0].elements[e].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                            return false;
                        }
                        
                        
                    }
                }
                
                // Field name: states
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(255) span(255)
                int16_t* _tmp_26 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_26;
                __aux64__ += 1;     // +min
                
                int _if__tmp_26 = __aux64__;
                
                if(debug) {
                    logger->print() << "|" << tools::brown("000025") << "| SequenceOf ros->spat.intersections.elements[b].states. size: " << int(__aux64__);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                    return false;
                }
                
                
                for(int f = 0; f < _if__tmp_26; f++) {
                    dsrc_v2_dsrc_msgs::msg::MovementState seqof_f;  // SEQUENCE
                    ros->spat.intersections.elements[b].states.elements.push_back(seqof_f);
                
                        // MovementState  SEQUENCE
                            //  movementName       DescriptiveName          OPTIONAL  
                            //  signalGroup        SignalGroupID              
                            //  state_time_speed   MovementEventList          
                            //  maneuverAssistList ManeuverAssistList       OPTIONAL  
                            //  regional           MovementState_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[b].states.elements[f].
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000026") << "| Reading ext flag from ros->spat.intersections.elements[b].states.elements[f].: " << int(*_ext_flag_3);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_27;
                            ros->spat.intersections.elements[b].states.elements[f].movement_name.push_back(_tmp_27);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000027") << "| ros->spat.intersections.elements[b].states.elements[f].movement_name " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::ManeuverAssistList _tmp_28;
                            ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list.push_back(_tmp_28);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000028") << "| ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::MovementStateRegional _tmp_29;
                            ros->spat.intersections.elements[b].states.elements[f].regional.push_back(_tmp_29);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000029") << "| ros->spat.intersections.elements[b].states.elements[f].regional " << tools::green("present");
                        }
                        
                        if(ros->spat.intersections.elements[b].states.elements[f].movement_name.size() != 0) {
                            // Field name: movement_name
                            // Text
                            
                            // TEXT  min(1) max(63) span(63)
                            uint8_t* _tmp_30 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_30 + 1;
                            buffer += 1;
                            
                            int _if__tmp_30 = __aux64__;
                            for(int g = 0; g < _if__tmp_30; g++) {  // DescriptiveName
                                char* __tmp__ = (char*)buffer++;
                                ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value += *__tmp__;
                            }
                        }
                        
                        // Field name: signal_group
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_31 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_31;
                        ros->spat.intersections.elements[b].states.elements[f].signal_group.value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000030") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].signal_group.value) << 
                                         " spat.intersections.elements[b].states.elements[f].signal_group.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].signal_group.value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].signal_group.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].signal_group.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                            return false;
                        }
                        
                        // Field name: state_time_speed
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16)
                        int16_t* _tmp_32 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_32;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_32 = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000031") << "| SequenceOf ros->spat.intersections.elements[b].states.elements[f].state_time_speed. size: " << int(__aux64__);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                            return false;
                        }
                        
                        
                        for(int h = 0; h < _if__tmp_32; h++) {
                            dsrc_v2_dsrc_msgs::msg::MovementEvent seqof_h;  // SEQUENCE
                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements.push_back(seqof_h);
                        
                                // MovementEvent  SEQUENCE
                                    //  eventState MovementPhaseState         
                                    //  timing     TimeChangeDetails        OPTIONAL  
                                    //  speeds     AdvisorySpeedList        OPTIONAL  
                                    //  regional   MovementEvent_regional   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000032") << "| Reading ext flag from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].: " << int(*_ext_flag_4);
                                }
                                
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::TimeChangeDetails _tmp_33;
                                    ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing.push_back(_tmp_33);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000033") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::AdvisorySpeedList _tmp_34;
                                    ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds.push_back(_tmp_34);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000034") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::MovementEventRegional _tmp_35;
                                    ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].regional.push_back(_tmp_35);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000035") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].regional " << tools::green("present");
                                }
                                
                                // Field name: event_state
                                // Enumerated
                                // INT32  min(0) max(9) span(10) datatype(Int32)
                                uint8_t* _tmp_36 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_36;
                                __aux64__ += 0;
                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 9) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000036") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value) << 
                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value);
                                }
                                
                                if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing.size() != 0) {
                                    // Field name: timing
                                        // TimeChangeDetails  SEQUENCE
                                            //  startTime  TimeMark                 OPTIONAL  
                                            //  minEndTime TimeMark                   
                                            //  maxEndTime TimeMark                 OPTIONAL  
                                            //  likelyTime TimeMark                 OPTIONAL  
                                            //  confidence TimeIntervalConfidence   OPTIONAL  
                                            //  nextTime   TimeMark                 OPTIONAL  
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_37;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time.push_back(_tmp_37);
                                        
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000037") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_38;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time.push_back(_tmp_38);
                                        
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000038") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_39;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time.push_back(_tmp_39);
                                        
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000039") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeIntervalConfidence _tmp_40;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence.push_back(_tmp_40);
                                        
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000040") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_41;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time.push_back(_tmp_41);
                                        
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000041") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time " << tools::green("present");
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time.size() != 0) {
                                            // Field name: start_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_42 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_42;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000042") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        // Field name: min_end_time
                                        // Integer
                                        // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                        uint16_t* _tmp_43 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_43;
                                        ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value = __aux64__;
                                        
                                        if(debug) {
                                            logger->print() << "|" << tools::brown("000043") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value) << 
                                                         " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                            return false;
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time.size() != 0) {
                                            // Field name: max_end_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_44 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_44;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000044") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time.size() != 0) {
                                            // Field name: likely_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_45 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_45;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000045") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence.size() != 0) {
                                            // Field name: confidence
                                            // Integer
                                            // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                            uint8_t* _tmp_46 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_46;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000046") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time.size() != 0) {
                                            // Field name: next_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_47 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_47;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000047") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                }
                                
                                if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds.size() != 0) {
                                    // Field name: speeds
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16)
                                    int16_t* _tmp_48 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_48;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_48 = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000048") << "| SequenceOf ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0]. size: " << int(__aux64__);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int i = 0; i < _if__tmp_48; i++) {
                                        dsrc_v2_dsrc_msgs::msg::AdvisorySpeed seqof_i;  // SEQUENCE
                                        ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements.push_back(seqof_i);
                                    
                                            // AdvisorySpeed  SEQUENCE
                                                //  type       AdvisorySpeedType          
                                                //  speed      SpeedAdvice              OPTIONAL  
                                                //  confidence SpeedConfidenceDSRC      OPTIONAL  
                                                //  distance   ZoneLength               OPTIONAL  
                                                //  klass      RestrictionClassID       OPTIONAL  
                                                //  regional   AdvisorySpeed_regional   OPTIONAL  
                                                //  ...
                                            uint8_t* _ext_flag_6 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000049") << "| Reading ext flag from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].: " << int(*_ext_flag_6);
                                            }
                                            
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::SpeedAdvice _tmp_49;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed.push_back(_tmp_49);
                                            
                                                if(debug)
                                                    logger->print() << "|" << tools::brown("000050") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::SpeedConfidenceDSRC _tmp_50;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence.push_back(_tmp_50);
                                            
                                                if(debug)
                                                    logger->print() << "|" << tools::brown("000051") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_51;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance.push_back(_tmp_51);
                                            
                                                if(debug)
                                                    logger->print() << "|" << tools::brown("000052") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::RestrictionClassID _tmp_52;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass.push_back(_tmp_52);
                                            
                                                if(debug)
                                                    logger->print() << "|" << tools::brown("000053") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::AdvisorySpeedRegional _tmp_53;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].regional.push_back(_tmp_53);
                                            
                                                if(debug)
                                                    logger->print() << "|" << tools::brown("000054") << "| ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].regional " << tools::green("present");
                                            }
                                            
                                            // Field name: type
                                            // Enumerated
                                            // INT32  min(0) max(3) span(4) datatype(Int32)
                                            uint8_t* _ext_flag_7 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000055") << "| Reading ext flag from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.: " << int(*_ext_flag_7);
                                            }
                                            
                                            uint8_t* _tmp_54 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_54;
                                            __aux64__ += 0;
                                            ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000056") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value);
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed.size() != 0) {
                                                // Field name: speed
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(500) span(501) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_55 = (uint16_t*) buffer; buffer += 2;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value = *_tmp_55;
                                                __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 500) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value' " << (__aux64__) << " exceeds max allowable (500); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000057") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value) << " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0]: " <<
                                                                 ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence.size() != 0) {
                                                // Field name: confidence
                                                // Enumerated
                                                // INT32  min(0) max(7) span(8) datatype(Int32)
                                                uint8_t* _tmp_56 = (uint8_t*) buffer++;
                                                __aux64__ = *_tmp_56;
                                                __aux64__ += 0;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value = __aux64__;
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                                    return false;
                                                }
                                                
                                                
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000058") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value) << 
                                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value);
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance.size() != 0) {
                                                // Field name: distance
                                                // Integer
                                                // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                                uint16_t* _tmp_57 = (uint16_t*) buffer; buffer += 2;
                                                __aux64__ = *_tmp_57;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000059") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value) << 
                                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value;
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass.size() != 0) {
                                                // Field name: klass
                                                // Integer
                                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                                uint8_t* _tmp_58 = (uint8_t*) buffer++;
                                                __aux64__ = *_tmp_58;
                                                ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000060") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value) << 
                                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value);
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            // Field name: regional  // avoided
                                            if(*_ext_flag_6) { // from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i]. 
                                                uint8_t* _tmp_59 = (uint8_t*) buffer++;  // number of extensions
                                                bool _array_1[*_tmp_59];
                                                
                                                if(debug)
                                                    logger->print() << "|" << tools::brown("000061") << "| Reading number of exts from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].: " << static_cast<unsigned int>(*_tmp_59);
                                                
                                                // Extensions bytemap
                                                for(int i = 0; i < *_tmp_59; i++)
                                                    _array_1[i] = (*buffer++) != 0;
                                                
                                                // Discarding unknown OpenType containers
                                                for(int i = 0; i < *_tmp_59; i++) {
                                                    uint16_t* _tmp_60 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) {
                                                    }
                                                
                                                    for(int i = 0; i < *_tmp_60; i++)
                                                        buffer++;
                                                }
                                                
                                            }
                                    }
                                }
                                
                                // Field name: regional  // avoided
                                if(*_ext_flag_4) { // from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h]. 
                                    uint8_t* _tmp_61 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_2[*_tmp_61];
                                    
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000062") << "| Reading number of exts from ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].: " << static_cast<unsigned int>(*_tmp_61);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_61; i++)
                                        _array_2[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_61; i++) {
                                        uint16_t* _tmp_62 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_62; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list.size() != 0) {
                            // Field name: maneuver_assist_list
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(16) span(16)
                            int16_t* _tmp_63 = (int16_t*)buffer;
                            buffer += 2;
                            __aux64__ = *_tmp_63;
                            __aux64__ += 1;     // +min
                            
                            int _if__tmp_63 = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000063") << "| SequenceOf ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0]. size: " << int(__aux64__);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                return false;
                            }
                            
                            
                            for(int j = 0; j < _if__tmp_63; j++) {
                                dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssist seqof_j;  // SEQUENCE
                                ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements.push_back(seqof_j);
                            
                                    // ConnectionManeuverAssist  SEQUENCE
                                        //  connectionID           LaneConnectionID                      
                                        //  queueLength            ZoneLength                          OPTIONAL  
                                        //  availableStorageLength ZoneLength                          OPTIONAL  
                                        //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                        //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                        //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_10 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000064") << "| Reading ext flag from ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].: " << int(*_ext_flag_10);
                                    }
                                    
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_64;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length.push_back(_tmp_64);
                                    
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000065") << "| ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_65;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length.push_back(_tmp_65);
                                    
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000066") << "| ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::WaitOnStopline _tmp_66;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop.push_back(_tmp_66);
                                    
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000067") << "| ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::PedestrianBicycleDetect _tmp_67;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect.push_back(_tmp_67);
                                    
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000068") << "| ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssistRegional _tmp_68;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].regional.push_back(_tmp_68);
                                    
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000069") << "| ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].regional " << tools::green("present");
                                    }
                                    
                                    // Field name: connection_id
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_69 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_69;
                                    ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000070") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value) << 
                                                     " spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length.size() != 0) {
                                        // Field name: queue_length
                                        // Integer
                                        // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                        uint16_t* _tmp_70 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_70;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->print() << "|" << tools::brown("000071") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value) << 
                                                         " spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value: " << ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length.size() != 0) {
                                        // Field name: available_storage_length
                                        // Integer
                                        // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                        uint16_t* _tmp_71 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_71;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->print() << "|" << tools::brown("000072") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value) << 
                                                         " spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value: " << ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop.size() != 0) {
                                        // Field name: wait_on_stop
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_72 = (uint8_t*)buffer;
                                        buffer++;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop[0].value = (*_tmp_72 == 1);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000073") << "| \033[37;1mbool  \033[0m ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop[0].: " << (*_tmp_72);
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect.size() != 0) {
                                        // Field name: ped_bicycle_detect
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_73 = (uint8_t*)buffer;
                                        buffer++;
                                        ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect[0].value = (*_tmp_73 == 1);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000074") << "| \033[37;1mbool  \033[0m ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect[0].: " << (*_tmp_73);
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_10) { // from ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j]. 
                                        uint8_t* _tmp_74 = (uint8_t*) buffer++;  // number of extensions
                                        bool _array_3[*_tmp_74];
                                        
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000075") << "| Reading number of exts from ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].: " << static_cast<unsigned int>(*_tmp_74);
                                        
                                        // Extensions bytemap
                                        for(int i = 0; i < *_tmp_74; i++)
                                            _array_3[i] = (*buffer++) != 0;
                                        
                                        // Discarding unknown OpenType containers
                                        for(int i = 0; i < *_tmp_74; i++) {
                                            uint16_t* _tmp_75 = (uint16_t*)buffer;  // OpenType length
                                            buffer += 2;
                                        
                                            if(debug) {
                                            }
                                        
                                            for(int i = 0; i < *_tmp_75; i++)
                                                buffer++;
                                        }
                                        
                                    }
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3) { // from ros->spat.intersections.elements[b].states.elements[f]. 
                            uint8_t* _tmp_76 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_4[*_tmp_76];
                            
                            if(debug)
                                logger->print() << "|" << tools::brown("000076") << "| Reading number of exts from ros->spat.intersections.elements[b].states.elements[f].: " << static_cast<unsigned int>(*_tmp_76);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_76; i++)
                                _array_4[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_76; i++) {
                                uint16_t* _tmp_77 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_77; i++)
                                    buffer++;
                            }
                            
                        }
                }
                
                if(ros->spat.intersections.elements[b].maneuver_assist_list.size() != 0) {
                    // Field name: maneuver_assist_list
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16)
                    int16_t* _tmp_78 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_78;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_78 = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000077") << "| SequenceOf ros->spat.intersections.elements[b].maneuver_assist_list[0]. size: " << int(__aux64__);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                        return false;
                    }
                    
                    
                    for(int k = 0; k < _if__tmp_78; k++) {
                        dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssist seqof_k;  // SEQUENCE
                        ros->spat.intersections.elements[b].maneuver_assist_list[0].elements.push_back(seqof_k);
                    
                            // ConnectionManeuverAssist  SEQUENCE
                                //  connectionID           LaneConnectionID                      
                                //  queueLength            ZoneLength                          OPTIONAL  
                                //  availableStorageLength ZoneLength                          OPTIONAL  
                                //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_11 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000078") << "| Reading ext flag from ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].: " << int(*_ext_flag_11);
                            }
                            
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_79;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length.push_back(_tmp_79);
                            
                                if(debug)
                                    logger->print() << "|" << tools::brown("000079") << "| ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_80;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length.push_back(_tmp_80);
                            
                                if(debug)
                                    logger->print() << "|" << tools::brown("000080") << "| ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::WaitOnStopline _tmp_81;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop.push_back(_tmp_81);
                            
                                if(debug)
                                    logger->print() << "|" << tools::brown("000081") << "| ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::PedestrianBicycleDetect _tmp_82;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect.push_back(_tmp_82);
                            
                                if(debug)
                                    logger->print() << "|" << tools::brown("000082") << "| ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssistRegional _tmp_83;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].regional.push_back(_tmp_83);
                            
                                if(debug)
                                    logger->print() << "|" << tools::brown("000083") << "| ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].regional " << tools::green("present");
                            }
                            
                            // Field name: connection_id
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_84 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_84;
                            ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000084") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value) << 
                                             " spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length.size() != 0) {
                                // Field name: queue_length
                                // Integer
                                // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                uint16_t* _tmp_85 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_85;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000085") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value) << 
                                                 " spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value: " << ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length.size() != 0) {
                                // Field name: available_storage_length
                                // Integer
                                // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                uint16_t* _tmp_86 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_86;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000086") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value) << 
                                                 " spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value: " << ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop.size() != 0) {
                                // Field name: wait_on_stop
                                // Value
                                // Boolean
                                uint8_t* _tmp_87 = (uint8_t*)buffer;
                                buffer++;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop[0].value = (*_tmp_87 == 1);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000087") << "| \033[37;1mbool  \033[0m ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop[0].: " << (*_tmp_87);
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect.size() != 0) {
                                // Field name: ped_bicycle_detect
                                // Value
                                // Boolean
                                uint8_t* _tmp_88 = (uint8_t*)buffer;
                                buffer++;
                                ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect[0].value = (*_tmp_88 == 1);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000088") << "| \033[37;1mbool  \033[0m ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect[0].: " << (*_tmp_88);
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_11) { // from ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k]. 
                                uint8_t* _tmp_89 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_5[*_tmp_89];
                                
                                if(debug)
                                    logger->print() << "|" << tools::brown("000089") << "| Reading number of exts from ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].: " << static_cast<unsigned int>(*_tmp_89);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_89; i++)
                                    _array_5[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_89; i++) {
                                    uint16_t* _tmp_90 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_90; i++)
                                        buffer++;
                                }
                                
                            }
                    }
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_2) { // from ros->spat.intersections.elements[b]. 
                    uint8_t* _tmp_91 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_6[*_tmp_91];
                    
                    if(debug)
                        logger->print() << "|" << tools::brown("000090") << "| Reading number of exts from ros->spat.intersections.elements[b].: " << static_cast<unsigned int>(*_tmp_91);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_91; i++)
                        _array_6[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_91; i++) {
                        uint16_t* _tmp_92 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_92; i++)
                            buffer++;
                    }
                    
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_1) { // from ros->spat. 
            uint8_t* _tmp_93 = (uint8_t*) buffer++;  // number of extensions
            bool _array_7[*_tmp_93];
            
            if(debug)
                logger->print() << "|" << tools::brown("000091") << "| Reading number of exts from ros->spat.: " << static_cast<unsigned int>(*_tmp_93);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_93; i++)
                _array_7[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_93; i++) {
                uint16_t* _tmp_94 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_94; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}