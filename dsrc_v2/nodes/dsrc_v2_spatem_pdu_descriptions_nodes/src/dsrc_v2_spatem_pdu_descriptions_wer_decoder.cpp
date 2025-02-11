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
        uint8_t* _tmp_5250 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_5250;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m004636\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: message_id
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_5251 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_5251;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m004637\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: station_id
        // Integer
        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
        uint32_t* _tmp_5252 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_5252;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m004638\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
            return false;
        }
    
    // Field name: spat
        // SPAT  SEQUENCE
            //  timeStamp     MinuteOfTheYear         OPTIONAL  
            //  name          DescriptiveName         OPTIONAL  
            //  intersections IntersectionStateList     
            //  regional      SPAT_regional           OPTIONAL  
            //  ...
        uint8_t* _ext_flag_2380 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m004639\033[0m| Reading ext flag from ros->spat.: " << int(*_ext_flag_2380);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_5253;
            ros->spat.time_stamp.push_back(_tmp_5253);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m004640\033[0m| ros->spat.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_5254;
            ros->spat.name.push_back(_tmp_5254);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m004641\033[0m| ros->spat.name " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SPATRegional _tmp_5255;
            ros->spat.regional.push_back(_tmp_5255);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m004642\033[0m| ros->spat.regional " << tools::green("present");
        }
        
        if(ros->spat.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_5256 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_5256;
            ros->spat.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m004643\033[0m| " << tools::getTypeName(ros->spat.time_stamp[0].value) << 
                             " spat.time_stamp[0].value: " << ros->spat.time_stamp[0].value;
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'spat.time_stamp[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'spat.time_stamp[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                return false;
            }
        }
        
        if(ros->spat.name.size() != 0) {
            // Field name: name
            // Text
            
            // TEXT  min(1) max(63) span(63)
            uint8_t* _tmp_5257 = (uint8_t*)buffer;
            __aux64__ = *_tmp_5257 + 1;
            buffer += 1;
            
            int _if__tmp_5257 = __aux64__;
            for(int r = 0; r < _if__tmp_5257; r++) {  // DescriptiveName
                char* __tmp__ = (char*)buffer++;
                ros->spat.name[0].value += *__tmp__;
            }
        }
        
        // Field name: intersections
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(32) span(32)
        int16_t* _tmp_5258 = (int16_t*)buffer;
        buffer += 2;
        __aux64__ = *_tmp_5258;
        __aux64__ += 1;     // +min
        
        int _if__tmp_5258 = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m004644\033[0m| SequenceOf ros->spat.intersections. size: " << int(*_tmp_5258);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 1) {
            logger->warning() << "Error: Value in 'spat.intersections.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 32) {
            logger->warning() << "Error: Value in 'spat.intersections.value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
            return false;
        }
        
        
        for(int s = 0; s < _if__tmp_5258; s++) {
            dsrc_v2_dsrc_msgs::msg::IntersectionState seqof_s;  // SEQUENCE
            ros->spat.intersections.elements.push_back(seqof_s);
        
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
                uint8_t* _ext_flag_2381 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[s].
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m004645\033[0m| Reading ext flag from ros->spat.intersections.elements[s].: " << int(*_ext_flag_2381);
                }
                
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_5259;
                    ros->spat.intersections.elements[s].name.push_back(_tmp_5259);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004646\033[0m| ros->spat.intersections.elements[s].name " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_5260;
                    ros->spat.intersections.elements[s].moy.push_back(_tmp_5260);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004647\033[0m| ros->spat.intersections.elements[s].moy " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DSecond _tmp_5261;
                    ros->spat.intersections.elements[s].time_stamp.push_back(_tmp_5261);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004648\033[0m| ros->spat.intersections.elements[s].time_stamp " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::EnabledLaneList _tmp_5262;
                    ros->spat.intersections.elements[s].enabled_lanes.push_back(_tmp_5262);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004649\033[0m| ros->spat.intersections.elements[s].enabled_lanes " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::ManeuverAssistList _tmp_5263;
                    ros->spat.intersections.elements[s].maneuver_assist_list.push_back(_tmp_5263);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004650\033[0m| ros->spat.intersections.elements[s].maneuver_assist_list " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::IntersectionStateRegional _tmp_5264;
                    ros->spat.intersections.elements[s].regional.push_back(_tmp_5264);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004651\033[0m| ros->spat.intersections.elements[s].regional " << tools::green("present");
                }
                
                if(ros->spat.intersections.elements[s].name.size() != 0) {
                    // Field name: name
                    // Text
                    
                    // TEXT  min(1) max(63) span(63)
                    uint8_t* _tmp_5265 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_5265 + 1;
                    buffer += 1;
                    
                    int _if__tmp_5265 = __aux64__;
                    for(int t = 0; t < _if__tmp_5265; t++) {  // DescriptiveName
                        char* __tmp__ = (char*)buffer++;
                        ros->spat.intersections.elements[s].name[0].value += *__tmp__;
                    }
                }
                
                // Field name: id
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_5266;
                        ros->spat.intersections.elements[s].id.region.push_back(_tmp_5266);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m004652\033[0m| ros->spat.intersections.elements[s].id.region " << tools::green("present");
                    }
                    
                    if(ros->spat.intersections.elements[s].id.region.size() != 0) {
                        // Field name: region
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_5267 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_5267;
                        ros->spat.intersections.elements[s].id.region[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004653\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].id.region[0].value) << 
                                         " spat.intersections.elements[s].id.region[0].value: " << ros->spat.intersections.elements[s].id.region[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    // Field name: id
                    // Integer
                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                    uint16_t* _tmp_5268 = (uint16_t*) buffer; buffer += 2;
                    __aux64__ = *_tmp_5268;
                    ros->spat.intersections.elements[s].id.id.value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004654\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].id.id.value) << 
                                     " spat.intersections.elements[s].id.id.value: " << ros->spat.intersections.elements[s].id.id.value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                        return false;
                    }
                
                // Field name: revision
                // Integer
                // UINT8  min(0) max(127) span(128) datatype(UInt8)
                uint8_t* _tmp_5269 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_5269;
                ros->spat.intersections.elements[s].revision.value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m004655\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].revision.value) << 
                                 " spat.intersections.elements[s].revision.value: " << static_cast<int>(ros->spat.intersections.elements[s].revision.value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].revision.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].revision.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                    return false;
                }
                
                // Field name: status
                // BitString
                // BIT_STRING  min(16) max(16) span(1)
                uint8_t* _tmp_5270 = (uint8_t*)buffer;
                __aux64__ = *_tmp_5270 + 16;
                buffer += 1;
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m004656\033[0m| spat.intersections.elements[s].status.value: " << __aux64__;
                
                int _if__tmp_5270 = __aux64__;
                for(int u = 0; u < _if__tmp_5270; u++) {
                    uint8_t __c__;
                    ros->spat.intersections.elements[s].status.values.push_back(__c__);
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    ros->spat.intersections.elements[s].status.values[u] = (*__b__ == 1);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 16) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].status.value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].status.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                    return false;
                }
                
                if(ros->spat.intersections.elements[s].moy.size() != 0) {
                    // Field name: moy
                    // Integer
                    // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
                    uint32_t* _tmp_5271 = (uint32_t*) buffer; buffer += 4;
                    __aux64__ = *_tmp_5271;
                    ros->spat.intersections.elements[s].moy[0].value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004657\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].moy[0].value) << 
                                     " spat.intersections.elements[s].moy[0].value: " << ros->spat.intersections.elements[s].moy[0].value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].moy[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].moy[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                        return false;
                    }
                }
                
                if(ros->spat.intersections.elements[s].time_stamp.size() != 0) {
                    // Field name: time_stamp
                    // Integer
                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                    uint16_t* _tmp_5272 = (uint16_t*) buffer; buffer += 2;
                    __aux64__ = *_tmp_5272;
                    ros->spat.intersections.elements[s].time_stamp[0].value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004658\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].time_stamp[0].value) << 
                                     " spat.intersections.elements[s].time_stamp[0].value: " << ros->spat.intersections.elements[s].time_stamp[0].value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].time_stamp[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].time_stamp[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                        return false;
                    }
                }
                
                if(ros->spat.intersections.elements[s].enabled_lanes.size() != 0) {
                    // Field name: enabled_lanes
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16)
                    int16_t* _tmp_5273 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_5273;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_5273 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004659\033[0m| SequenceOf ros->spat.intersections.elements[s].enabled_lanes[0]. size: " << int(*_tmp_5273);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].enabled_lanes[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].enabled_lanes[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                        return false;
                    }
                    
                    
                    for(int v = 0; v < _if__tmp_5273; v++) {
                        dsrc_v2_dsrc_msgs::msg::LaneID seqof_v;  // INTEGER
                        ros->spat.intersections.elements[s].enabled_lanes[0].elements.push_back(seqof_v);
                    
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_5274 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_5274;
                        ros->spat.intersections.elements[s].enabled_lanes[0].elements[v].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004660\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].enabled_lanes[0].elements[v].value) << 
                                         " spat.intersections.elements[s].enabled_lanes[0].elements[v].value: " << static_cast<int>(ros->spat.intersections.elements[s].enabled_lanes[0].elements[v].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].enabled_lanes[0].elements[v].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].enabled_lanes[0].elements[v].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                            return false;
                        }
                        
                        
                    }
                }
                
                // Field name: states
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(255) span(255)
                int16_t* _tmp_5275 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_5275;
                __aux64__ += 1;     // +min
                
                int _if__tmp_5275 = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m004661\033[0m| SequenceOf ros->spat.intersections.elements[s].states. size: " << int(*_tmp_5275);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                    return false;
                }
                
                
                for(int w = 0; w < _if__tmp_5275; w++) {
                    dsrc_v2_dsrc_msgs::msg::MovementState seqof_w;  // SEQUENCE
                    ros->spat.intersections.elements[s].states.elements.push_back(seqof_w);
                
                        // MovementState  SEQUENCE
                            //  movementName       DescriptiveName          OPTIONAL  
                            //  signalGroup        SignalGroupID              
                            //  state_time_speed   MovementEventList          
                            //  maneuverAssistList ManeuverAssistList       OPTIONAL  
                            //  regional           MovementState_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_2382 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[s].states.elements[w].
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004662\033[0m| Reading ext flag from ros->spat.intersections.elements[s].states.elements[w].: " << int(*_ext_flag_2382);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_5276;
                            ros->spat.intersections.elements[s].states.elements[w].movement_name.push_back(_tmp_5276);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004663\033[0m| ros->spat.intersections.elements[s].states.elements[w].movement_name " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::ManeuverAssistList _tmp_5277;
                            ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list.push_back(_tmp_5277);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004664\033[0m| ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::MovementStateRegional _tmp_5278;
                            ros->spat.intersections.elements[s].states.elements[w].regional.push_back(_tmp_5278);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004665\033[0m| ros->spat.intersections.elements[s].states.elements[w].regional " << tools::green("present");
                        }
                        
                        if(ros->spat.intersections.elements[s].states.elements[w].movement_name.size() != 0) {
                            // Field name: movement_name
                            // Text
                            
                            // TEXT  min(1) max(63) span(63)
                            uint8_t* _tmp_5279 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_5279 + 1;
                            buffer += 1;
                            
                            int _if__tmp_5279 = __aux64__;
                            for(int x = 0; x < _if__tmp_5279; x++) {  // DescriptiveName
                                char* __tmp__ = (char*)buffer++;
                                ros->spat.intersections.elements[s].states.elements[w].movement_name[0].value += *__tmp__;
                            }
                        }
                        
                        // Field name: signal_group
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_5280 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_5280;
                        ros->spat.intersections.elements[s].states.elements[w].signal_group.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004666\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].signal_group.value) << 
                                         " spat.intersections.elements[s].states.elements[w].signal_group.value: " << static_cast<int>(ros->spat.intersections.elements[s].states.elements[w].signal_group.value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].signal_group.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].signal_group.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                            return false;
                        }
                        
                        // Field name: state_time_speed
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16)
                        int16_t* _tmp_5281 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_5281;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_5281 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004667\033[0m| SequenceOf ros->spat.intersections.elements[s].states.elements[w].state_time_speed. size: " << int(*_tmp_5281);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                            return false;
                        }
                        
                        
                        for(int y = 0; y < _if__tmp_5281; y++) {
                            dsrc_v2_dsrc_msgs::msg::MovementEvent seqof_y;  // SEQUENCE
                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements.push_back(seqof_y);
                        
                                // MovementEvent  SEQUENCE
                                    //  eventState MovementPhaseState         
                                    //  timing     TimeChangeDetails        OPTIONAL  
                                    //  speeds     AdvisorySpeedList        OPTIONAL  
                                    //  regional   MovementEvent_regional   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_2383 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m004668\033[0m| Reading ext flag from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].: " << int(*_ext_flag_2383);
                                }
                                
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::TimeChangeDetails _tmp_5282;
                                    ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing.push_back(_tmp_5282);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004669\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::AdvisorySpeedList _tmp_5283;
                                    ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds.push_back(_tmp_5283);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004670\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::MovementEventRegional _tmp_5284;
                                    ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].regional.push_back(_tmp_5284);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004671\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].regional " << tools::green("present");
                                }
                                
                                // Field name: event_state
                                // Enumerated
                                // INT32  min(0) max(9) span(10) datatype(Int32)
                                uint8_t* _tmp_5285 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_5285;
                                __aux64__ += 0;
                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].event_state.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].event_state.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 9) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].event_state.value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m004672\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].event_state.value) << 
                                                 " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].event_state.value: " << static_cast<int>(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].event_state.value);
                                }
                                
                                if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing.size() != 0) {
                                    // Field name: timing
                                        // TimeChangeDetails  SEQUENCE
                                            //  startTime  TimeMark                 OPTIONAL  
                                            //  minEndTime TimeMark                   
                                            //  maxEndTime TimeMark                 OPTIONAL  
                                            //  likelyTime TimeMark                 OPTIONAL  
                                            //  confidence TimeIntervalConfidence   OPTIONAL  
                                            //  nextTime   TimeMark                 OPTIONAL  
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_5286;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time.push_back(_tmp_5286);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004673\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_5287;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time.push_back(_tmp_5287);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004674\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_5288;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time.push_back(_tmp_5288);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004675\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeIntervalConfidence _tmp_5289;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence.push_back(_tmp_5289);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004676\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::TimeMark _tmp_5290;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time.push_back(_tmp_5290);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004677\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time " << tools::green("present");
                                        }
                                        
                                        if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time.size() != 0) {
                                            // Field name: start_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_5291 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_5291;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004678\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time[0].value) << 
                                                             " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time[0].value: " << ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].start_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        // Field name: min_end_time
                                        // Integer
                                        // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                        uint16_t* _tmp_5292 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_5292;
                                        ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].min_end_time.value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m004679\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].min_end_time.value) << 
                                                         " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].min_end_time.value: " << ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].min_end_time.value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].min_end_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].min_end_time.value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                            return false;
                                        }
                                        
                                        if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time.size() != 0) {
                                            // Field name: max_end_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_5293 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_5293;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004680\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time[0].value) << 
                                                             " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time[0].value: " << ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].max_end_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time.size() != 0) {
                                            // Field name: likely_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_5294 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_5294;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004681\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time[0].value) << 
                                                             " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time[0].value: " << ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].likely_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence.size() != 0) {
                                            // Field name: confidence
                                            // Integer
                                            // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                            uint8_t* _tmp_5295 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_5295;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004682\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence[0].value) << 
                                                             " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].confidence[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time.size() != 0) {
                                            // Field name: next_time
                                            // Integer
                                            // UINT16  min(0) max(36001) span(36002) datatype(UInt16)
                                            uint16_t* _tmp_5296 = (uint16_t*) buffer; buffer += 2;
                                            __aux64__ = *_tmp_5296;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004683\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time[0].value) << 
                                                             " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time[0].value: " << ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time[0].value;
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].timing[0].next_time[0].value' " << (__aux64__) << " exceeds max allowable (36001); message dropped.";
                                                return false;
                                            }
                                        }
                                }
                                
                                if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds.size() != 0) {
                                    // Field name: speeds
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16)
                                    int16_t* _tmp_5297 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_5297;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_5297 = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m004684\033[0m| SequenceOf ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0]. size: " << int(*_tmp_5297);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int z = 0; z < _if__tmp_5297; z++) {
                                        dsrc_v2_dsrc_msgs::msg::AdvisorySpeed seqof_z;  // SEQUENCE
                                        ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements.push_back(seqof_z);
                                    
                                            // AdvisorySpeed  SEQUENCE
                                                //  type       AdvisorySpeedType          
                                                //  speed      SpeedAdvice              OPTIONAL  
                                                //  confidence SpeedConfidenceDSRC      OPTIONAL  
                                                //  distance   ZoneLength               OPTIONAL  
                                                //  klass      RestrictionClassID       OPTIONAL  
                                                //  regional   AdvisorySpeed_regional   OPTIONAL  
                                                //  ...
                                            uint8_t* _ext_flag_2385 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004685\033[0m| Reading ext flag from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].: " << int(*_ext_flag_2385);
                                            }
                                            
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::SpeedAdvice _tmp_5298;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed.push_back(_tmp_5298);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m004686\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::SpeedConfidenceDSRC _tmp_5299;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence.push_back(_tmp_5299);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m004687\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_5300;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance.push_back(_tmp_5300);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m004688\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::RestrictionClassID _tmp_5301;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass.push_back(_tmp_5301);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m004689\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::AdvisorySpeedRegional _tmp_5302;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].regional.push_back(_tmp_5302);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m004690\033[0m| ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].regional " << tools::green("present");
                                            }
                                            
                                            // Field name: type
                                            // Enumerated
                                            // INT32  min(0) max(3) span(4) datatype(Int32)
                                            uint8_t* _ext_flag_2386 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004691\033[0m| Reading ext flag from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.: " << int(*_ext_flag_2386);
                                            }
                                            
                                            uint8_t* _tmp_5303 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_5303;
                                            __aux64__ += 0;
                                            ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004692\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.value) << 
                                                             " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.value: " << static_cast<int>(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].type.value);
                                            }
                                            
                                            if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed.size() != 0) {
                                                // Field name: speed
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(500) span(501) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_5304 = (uint16_t*) buffer; buffer += 2;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0].value = *_tmp_5304;
                                                __aux64__ = ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0].value;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 500) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0].value' " << (__aux64__) << " exceeds max allowable (500); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004693\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0].value) << " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0]: " <<
                                                                 ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].speed[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence.size() != 0) {
                                                // Field name: confidence
                                                // Enumerated
                                                // INT32  min(0) max(7) span(8) datatype(Int32)
                                                uint8_t* _tmp_5305 = (uint8_t*) buffer++;
                                                __aux64__ = *_tmp_5305;
                                                __aux64__ += 0;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence[0].value = __aux64__;
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                                    return false;
                                                }
                                                
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004694\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence[0].value) << 
                                                                 " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].confidence[0].value);
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance.size() != 0) {
                                                // Field name: distance
                                                // Integer
                                                // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                                uint16_t* _tmp_5306 = (uint16_t*) buffer; buffer += 2;
                                                __aux64__ = *_tmp_5306;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance[0].value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004695\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance[0].value) << 
                                                                 " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance[0].value: " << ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance[0].value;
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].distance[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass.size() != 0) {
                                                // Field name: klass
                                                // Integer
                                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                                uint8_t* _tmp_5307 = (uint8_t*) buffer++;
                                                __aux64__ = *_tmp_5307;
                                                ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass[0].value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004696\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass[0].value) << 
                                                                 " spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass[0].value: " << static_cast<int>(ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass[0].value);
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].klass[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            // Field name: regional  // avoided
                                            if(*_ext_flag_2385) { // from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z]. 
                                                uint8_t* _tmp_5308 = (uint8_t*) buffer++;  // number of extensions
                                                bool _array_64[*_tmp_5308];
                                                
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m004697\033[0m| Reading number of exts from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].speeds[0].elements[z].: " << static_cast<unsigned int>(*_tmp_5308);
                                                
                                                // Extensions bytemap
                                                for(int i = 0; i < *_tmp_5308; i++)
                                                    _array_64[i] = (*buffer++) != 0;
                                                
                                                // Discarding unknown OpenType containers
                                                for(int i = 0; i < *_tmp_5308; i++) {
                                                    uint16_t* _tmp_5309 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) {
                                                    }
                                                
                                                    for(int i = 0; i < *_tmp_5309; i++)
                                                        buffer++;
                                                }
                                                
                                            }
                                    }
                                }
                                
                                // Field name: regional  // avoided
                                if(*_ext_flag_2383) { // from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y]. 
                                    uint8_t* _tmp_5310 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_65[*_tmp_5310];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004698\033[0m| Reading number of exts from ros->spat.intersections.elements[s].states.elements[w].state_time_speed.elements[y].: " << static_cast<unsigned int>(*_tmp_5310);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_5310; i++)
                                        _array_65[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_5310; i++) {
                                        uint16_t* _tmp_5311 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_5311; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list.size() != 0) {
                            // Field name: maneuver_assist_list
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(16) span(16)
                            int16_t* _tmp_5312 = (int16_t*)buffer;
                            buffer += 2;
                            __aux64__ = *_tmp_5312;
                            __aux64__ += 1;     // +min
                            
                            int _if__tmp_5312 = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m004699\033[0m| SequenceOf ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0]. size: " << int(*_tmp_5312);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                return false;
                            }
                            
                            
                            for(int a = 0; a < _if__tmp_5312; a++) {
                                dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssist seqof_a;  // SEQUENCE
                                ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements.push_back(seqof_a);
                            
                                    // ConnectionManeuverAssist  SEQUENCE
                                        //  connectionID           LaneConnectionID                      
                                        //  queueLength            ZoneLength                          OPTIONAL  
                                        //  availableStorageLength ZoneLength                          OPTIONAL  
                                        //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                        //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                        //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_2389 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m004700\033[0m| Reading ext flag from ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].: " << int(*_ext_flag_2389);
                                    }
                                    
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_5313;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length.push_back(_tmp_5313);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004701\033[0m| ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_5314;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length.push_back(_tmp_5314);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004702\033[0m| ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::WaitOnStopline _tmp_5315;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].wait_on_stop.push_back(_tmp_5315);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004703\033[0m| ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].wait_on_stop " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::PedestrianBicycleDetect _tmp_5316;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].ped_bicycle_detect.push_back(_tmp_5316);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004704\033[0m| ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].ped_bicycle_detect " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssistRegional _tmp_5317;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].regional.push_back(_tmp_5317);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004705\033[0m| ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].regional " << tools::green("present");
                                    }
                                    
                                    // Field name: connection_id
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_5318 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_5318;
                                    ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].connection_id.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m004706\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].connection_id.value) << 
                                                     " spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].connection_id.value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].connection_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].connection_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    if(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length.size() != 0) {
                                        // Field name: queue_length
                                        // Integer
                                        // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                        uint16_t* _tmp_5319 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_5319;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m004707\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length[0].value) << 
                                                         " spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length[0].value: " << ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].queue_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length.size() != 0) {
                                        // Field name: available_storage_length
                                        // Integer
                                        // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                        uint16_t* _tmp_5320 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_5320;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m004708\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length[0].value) << 
                                                         " spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length[0].value: " << ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].available_storage_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].wait_on_stop.size() != 0) {
                                        // Field name: wait_on_stop
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_5321 = (uint8_t*)buffer;
                                        buffer++;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].wait_on_stop[0].value = (*_tmp_5321 == 1);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004709\033[0m| \033[37;1mbool  \033[0m ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].wait_on_stop[0].: " << (*_tmp_5321);
                                    }
                                    
                                    if(ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].ped_bicycle_detect.size() != 0) {
                                        // Field name: ped_bicycle_detect
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_5322 = (uint8_t*)buffer;
                                        buffer++;
                                        ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].ped_bicycle_detect[0].value = (*_tmp_5322 == 1);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004710\033[0m| \033[37;1mbool  \033[0m ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].ped_bicycle_detect[0].: " << (*_tmp_5322);
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_2389) { // from ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a]. 
                                        uint8_t* _tmp_5323 = (uint8_t*) buffer++;  // number of extensions
                                        bool _array_66[*_tmp_5323];
                                        
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004711\033[0m| Reading number of exts from ros->spat.intersections.elements[s].states.elements[w].maneuver_assist_list[0].elements[a].: " << static_cast<unsigned int>(*_tmp_5323);
                                        
                                        // Extensions bytemap
                                        for(int i = 0; i < *_tmp_5323; i++)
                                            _array_66[i] = (*buffer++) != 0;
                                        
                                        // Discarding unknown OpenType containers
                                        for(int i = 0; i < *_tmp_5323; i++) {
                                            uint16_t* _tmp_5324 = (uint16_t*)buffer;  // OpenType length
                                            buffer += 2;
                                        
                                            if(debug) {
                                            }
                                        
                                            for(int i = 0; i < *_tmp_5324; i++)
                                                buffer++;
                                        }
                                        
                                    }
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_2382) { // from ros->spat.intersections.elements[s].states.elements[w]. 
                            uint8_t* _tmp_5325 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_67[*_tmp_5325];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004712\033[0m| Reading number of exts from ros->spat.intersections.elements[s].states.elements[w].: " << static_cast<unsigned int>(*_tmp_5325);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_5325; i++)
                                _array_67[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_5325; i++) {
                                uint16_t* _tmp_5326 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_5326; i++)
                                    buffer++;
                            }
                            
                        }
                }
                
                if(ros->spat.intersections.elements[s].maneuver_assist_list.size() != 0) {
                    // Field name: maneuver_assist_list
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16)
                    int16_t* _tmp_5327 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_5327;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_5327 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004713\033[0m| SequenceOf ros->spat.intersections.elements[s].maneuver_assist_list[0]. size: " << int(*_tmp_5327);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                        return false;
                    }
                    
                    
                    for(int b = 0; b < _if__tmp_5327; b++) {
                        dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssist seqof_b;  // SEQUENCE
                        ros->spat.intersections.elements[s].maneuver_assist_list[0].elements.push_back(seqof_b);
                    
                            // ConnectionManeuverAssist  SEQUENCE
                                //  connectionID           LaneConnectionID                      
                                //  queueLength            ZoneLength                          OPTIONAL  
                                //  availableStorageLength ZoneLength                          OPTIONAL  
                                //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_2390 = (uint8_t*) buffer++;  // Read ext flag from ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m004714\033[0m| Reading ext flag from ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].: " << int(*_ext_flag_2390);
                            }
                            
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_5328;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length.push_back(_tmp_5328);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004715\033[0m| ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ZoneLength _tmp_5329;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length.push_back(_tmp_5329);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004716\033[0m| ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::WaitOnStopline _tmp_5330;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].wait_on_stop.push_back(_tmp_5330);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004717\033[0m| ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].wait_on_stop " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::PedestrianBicycleDetect _tmp_5331;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].ped_bicycle_detect.push_back(_tmp_5331);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004718\033[0m| ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].ped_bicycle_detect " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ConnectionManeuverAssistRegional _tmp_5332;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].regional.push_back(_tmp_5332);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004719\033[0m| ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].regional " << tools::green("present");
                            }
                            
                            // Field name: connection_id
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_5333 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_5333;
                            ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].connection_id.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m004720\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].connection_id.value) << 
                                             " spat.intersections.elements[s].maneuver_assist_list[0].elements[b].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].connection_id.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].elements[b].connection_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].elements[b].connection_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                            
                            if(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length.size() != 0) {
                                // Field name: queue_length
                                // Integer
                                // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                uint16_t* _tmp_5334 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_5334;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m004721\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length[0].value) << 
                                                 " spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length[0].value: " << ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].elements[b].queue_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length.size() != 0) {
                                // Field name: available_storage_length
                                // Integer
                                // UINT16  min(0) max(10000) span(10001) datatype(UInt16)
                                uint16_t* _tmp_5335 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_5335;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m004722\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length[0].value) << 
                                                 " spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length[0].value: " << ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[s].maneuver_assist_list[0].elements[b].available_storage_length[0].value' " << (__aux64__) << " exceeds max allowable (10000); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].wait_on_stop.size() != 0) {
                                // Field name: wait_on_stop
                                // Value
                                // Boolean
                                uint8_t* _tmp_5336 = (uint8_t*)buffer;
                                buffer++;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].wait_on_stop[0].value = (*_tmp_5336 == 1);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004723\033[0m| \033[37;1mbool  \033[0m ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].wait_on_stop[0].: " << (*_tmp_5336);
                            }
                            
                            if(ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].ped_bicycle_detect.size() != 0) {
                                // Field name: ped_bicycle_detect
                                // Value
                                // Boolean
                                uint8_t* _tmp_5337 = (uint8_t*)buffer;
                                buffer++;
                                ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].ped_bicycle_detect[0].value = (*_tmp_5337 == 1);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004724\033[0m| \033[37;1mbool  \033[0m ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].ped_bicycle_detect[0].: " << (*_tmp_5337);
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_2390) { // from ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b]. 
                                uint8_t* _tmp_5338 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_68[*_tmp_5338];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004725\033[0m| Reading number of exts from ros->spat.intersections.elements[s].maneuver_assist_list[0].elements[b].: " << static_cast<unsigned int>(*_tmp_5338);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_5338; i++)
                                    _array_68[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_5338; i++) {
                                    uint16_t* _tmp_5339 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_5339; i++)
                                        buffer++;
                                }
                                
                            }
                    }
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_2381) { // from ros->spat.intersections.elements[s]. 
                    uint8_t* _tmp_5340 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_69[*_tmp_5340];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004726\033[0m| Reading number of exts from ros->spat.intersections.elements[s].: " << static_cast<unsigned int>(*_tmp_5340);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_5340; i++)
                        _array_69[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_5340; i++) {
                        uint16_t* _tmp_5341 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_5341; i++)
                            buffer++;
                    }
                    
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_2380) { // from ros->spat. 
            uint8_t* _tmp_5342 = (uint8_t*) buffer++;  // number of extensions
            bool _array_70[*_tmp_5342];
            
            if(debug)
                logger->debug() << "|\033[38;5;94m004727\033[0m| Reading number of exts from ros->spat.: " << static_cast<unsigned int>(*_tmp_5342);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_5342; i++)
                _array_70[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_5342; i++) {
                uint16_t* _tmp_5343 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_5343; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}