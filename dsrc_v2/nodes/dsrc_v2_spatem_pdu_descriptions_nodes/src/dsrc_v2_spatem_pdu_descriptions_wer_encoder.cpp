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
#include <dsrc_v2_spatem_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_dsrc_v2_spatem_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const dsrc_v2_spatem_pdu_descriptions_msgs::SPATEM::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<dsrc_v2_spatem_pdu_descriptions_msgs::msg::SPATEM>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const dsrc_v2_spatem_pdu_descriptions_msgs::msg::SPATEM* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // SPATEM  SEQUENCE
        //  header     ItsPduHeader     
        //  spat       SPAT             
    // Optional fields bytemap
    
    // Field:  type(ItsPduHeader) name(hheader) extGroup(0)
        // ItsPduHeader  SEQUENCE
            //  protocolVersion ItsPduHeader_protocolVersion     
            //  messageID       ItsPduHeader_messageID           
            //  stationID       StationID                        
        // Optional fields bytemap
        
        // Field:  type(ItsPduHeader_protocolVersion) name(protocol_version) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m004556\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_5162 = (uint8_t*) buffer++;
        *_tmp_5162 = ros->hheader.protocol_version.value; 
        __aux64__ = ros->hheader.protocol_version.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(ItsPduHeader_messageID) name(message_id) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m004557\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_5163 = (uint8_t*) buffer++;
        *_tmp_5163 = ros->hheader.message_id.value; 
        __aux64__ = ros->hheader.message_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(StationID) name(station_id) extGroup(0)
        // Integer
        
        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
        if(debug) {
            logger->debug() << "|\033[38;5;94m004558\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_5164 = (uint32_t*) buffer; buffer += 4;
        *_tmp_5164 = ros->hheader.station_id.value; 
        __aux64__ = ros->hheader.station_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
            return -1;
        }
    
    // Field:  type(SPAT) name(spat) extGroup(0)
        // SPAT  SEQUENCE
            //  timeStamp     MinuteOfTheYear         OPTIONAL  
            //  name          DescriptiveName         OPTIONAL  
            //  intersections IntersectionStateList     
            //  regional      SPAT_regional           OPTIONAL  
            //  ...
        uint8_t* _ext_flag_2347 = (uint8_t*) buffer++;  // Write extension flag for SPAT
        *_ext_flag_2347 = 0;  
        
        // Optional fields bytemap
        char* _tmp_5165 = (char*) buffer++;
        *_tmp_5165 = (ros->spat.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m004559\033[0m| Optional field time_stamp = " << *_tmp_5165;
        char* _tmp_5166 = (char*) buffer++;
        *_tmp_5166 = (ros->spat.name.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m004560\033[0m| Optional field name = " << *_tmp_5166;
        char* _tmp_5167 = (char*) buffer++;
        *_tmp_5167 = (ros->spat.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m004561\033[0m| Optional field regional = " << *_tmp_5167;
        
        if(ros->spat.time_stamp.size() != 0) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->debug() << "|\033[38;5;94m004562\033[0m| " << tools::getTypeName(ros->spat.time_stamp[0].value) << 
                             " spat.time_stamp[0].value: " << ros->spat.time_stamp[0].value;
            }
            
            uint32_t* _tmp_5168 = (uint32_t*) buffer; buffer += 4;
            *_tmp_5168 = ros->spat.time_stamp[0].value; 
            __aux64__ = ros->spat.time_stamp[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'spat.time_stamp[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'spat.time_stamp[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                return -1;
            }
        }
        
        if(ros->spat.name.size() != 0) {
            // Field:  type(DescriptiveName) name(name) extGroup(0)
            // Text
            
            // TEXT  min(1) max(63) span(63)
            uint8_t* _tmp_5169 = (uint8_t*)buffer;
            __aux64__ = ros->spat.name[0].value.size();
            
            if(ros->spat.name[0].value.size() < 1) {
                logger->warning() << "Error: Length of 'spat.name[0].value' " << (ros->spat.name[0].value) << " is less than allowable (1); message dropped.";
                return -1;
            }
            if(ros->spat.name[0].value.size() > 63) {
                logger->warning() << "Error: Value in 'spat.name[0].value' " << (ros->spat.name[0].value) << " exceeds max allowable (63); message dropped.";
                return -1;
            }
            if(debug)
                logger->debug() << "|\033[38;5;94m004563\033[0m| spat.name[0].value.size(): " << 
                            static_cast<int>(ros->spat.name[0].value.size());
            
            if(__aux64__ > 63) __aux64__ = 63;
            *_tmp_5169 = __aux64__ - 1;
            buffer += 1;
            
            int __ifg = __aux64__;
            for(int g = 0; g < __ifg; g++) {  // 63
                char* __tmp__ = (char*)buffer++;
                *__tmp__ = ros->spat.name[0].value.c_str()[g];
            }
        }
        
        // Field:  type(IntersectionStateList) name(intersections) extGroup(0)
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
        __aux64__ = ros->spat.intersections.elements.size();
        if(__aux64__ > 32) __aux64__ = 32;
        uint16_t* _tmp_5170 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_5170 = __aux64__ - 1;
        
        int __ifh = __aux64__;
        for(int h = 0; h < __ifh; h++) { 
            
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
                uint8_t* _ext_flag_2349 = (uint8_t*) buffer++;  // Write extension flag for IntersectionState
                *_ext_flag_2349 = 0;  
                
                // Optional fields bytemap
                char* _tmp_5171 = (char*) buffer++;
                *_tmp_5171 = (ros->spat.intersections.elements[h].name.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m004565\033[0m| Optional field name = " << *_tmp_5171;
                char* _tmp_5172 = (char*) buffer++;
                *_tmp_5172 = (ros->spat.intersections.elements[h].moy.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m004566\033[0m| Optional field moy = " << *_tmp_5172;
                char* _tmp_5173 = (char*) buffer++;
                *_tmp_5173 = (ros->spat.intersections.elements[h].time_stamp.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m004567\033[0m| Optional field time_stamp = " << *_tmp_5173;
                char* _tmp_5174 = (char*) buffer++;
                *_tmp_5174 = (ros->spat.intersections.elements[h].enabled_lanes.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m004568\033[0m| Optional field enabled_lanes = " << *_tmp_5174;
                char* _tmp_5175 = (char*) buffer++;
                *_tmp_5175 = (ros->spat.intersections.elements[h].maneuver_assist_list.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m004569\033[0m| Optional field maneuver_assist_list = " << *_tmp_5175;
                char* _tmp_5176 = (char*) buffer++;
                *_tmp_5176 = (ros->spat.intersections.elements[h].regional.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m004570\033[0m| Optional field regional = " << *_tmp_5176;
                
                if(ros->spat.intersections.elements[h].name.size() != 0) {
                    // Field:  type(DescriptiveName) name(name) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(63) span(63)
                    uint8_t* _tmp_5177 = (uint8_t*)buffer;
                    __aux64__ = ros->spat.intersections.elements[h].name[0].value.size();
                    
                    if(ros->spat.intersections.elements[h].name[0].value.size() < 1) {
                        logger->warning() << "Error: Length of 'spat.intersections.elements[h].name[0].value' " << (ros->spat.intersections.elements[h].name[0].value) << " is less than allowable (1); message dropped.";
                        return -1;
                    }
                    if(ros->spat.intersections.elements[h].name[0].value.size() > 63) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].name[0].value' " << (ros->spat.intersections.elements[h].name[0].value) << " exceeds max allowable (63); message dropped.";
                        return -1;
                    }
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004571\033[0m| spat.intersections.elements[h].name[0].value.size(): " << 
                                    static_cast<int>(ros->spat.intersections.elements[h].name[0].value.size());
                    
                    if(__aux64__ > 63) __aux64__ = 63;
                    *_tmp_5177 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ifi = __aux64__;
                    for(int i = 0; i < __ifi; i++) {  // 63
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->spat.intersections.elements[h].name[0].value.c_str()[i];
                    }
                }
                
                // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    // Optional fields bytemap
                    char* _tmp_5178 = (char*) buffer++;
                    *_tmp_5178 = (ros->spat.intersections.elements[h].id.region.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m004572\033[0m| Optional field region = " << *_tmp_5178;
                    
                    if(ros->spat.intersections.elements[h].id.region.size() != 0) {
                        // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004573\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].id.region[0].value) << 
                                         " spat.intersections.elements[h].id.region[0].value: " << ros->spat.intersections.elements[h].id.region[0].value;
                        }
                        
                        uint16_t* _tmp_5179 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_5179 = ros->spat.intersections.elements[h].id.region[0].value; 
                        __aux64__ = ros->spat.intersections.elements[h].id.region[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field:  type(IntersectionID) name(id) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004574\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].id.id.value) << 
                                     " spat.intersections.elements[h].id.id.value: " << ros->spat.intersections.elements[h].id.id.value;
                    }
                    
                    uint16_t* _tmp_5180 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_5180 = ros->spat.intersections.elements[h].id.id.value; 
                    __aux64__ = ros->spat.intersections.elements[h].id.id.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                        return -1;
                    }
                
                // Field:  type(MsgCount) name(revision) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(127) span(128) dataType(UInt8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m004575\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].revision.value) << 
                                 " spat.intersections.elements[h].revision.value: " << static_cast<int>(ros->spat.intersections.elements[h].revision.value);
                }
                
                uint8_t* _tmp_5181 = (uint8_t*) buffer++;
                *_tmp_5181 = ros->spat.intersections.elements[h].revision.value; 
                __aux64__ = ros->spat.intersections.elements[h].revision.value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].revision.value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].revision.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                    return -1;
                }
                
                // Field:  type(IntersectionStatusObject) name(status) extGroup(0)
                // BitString
                // BIT_STRING  min(16) max(16) span(1)
                if(debug)
                    logger->debug() << "|\033[38;5;94m004576\033[0m| spat.intersections.elements[h].status.value: " << static_cast<int>(ros->spat.intersections.elements[h].status.values.size());
                
                if(ros->spat.intersections.elements[h].status.values.size() < 16) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].status.value' " << (ros->spat.intersections.elements[h].status.values.size()) << " is less than allowable (16); message dropped.";
                    return -1;
                }
                if(ros->spat.intersections.elements[h].status.values.size() > 16) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].status.value' " << (ros->spat.intersections.elements[h].status.values.size()) << " exceeds max allowable (16); message dropped.";
                    return -1;
                }
                
                uint8_t* _tmp_5182 = (uint8_t*)buffer;
                __aux64__ = ros->spat.intersections.elements[h].status.values.size();
                if(__aux64__ > 16) __aux64__ = 16;
                *_tmp_5182 = __aux64__ - 16;
                buffer += 1;
                
                int __ifj = __aux64__;
                for(int j = 0; j < __ifj; j++) {
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    *__b__ = (ros->spat.intersections.elements[h].status.values[j]? 1: 0);
                }
                
                if(ros->spat.intersections.elements[h].moy.size() != 0) {
                    // Field:  type(MinuteOfTheYear) name(moy) extGroup(0)
                    // Integer
                    
                    // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004577\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].moy[0].value) << 
                                     " spat.intersections.elements[h].moy[0].value: " << ros->spat.intersections.elements[h].moy[0].value;
                    }
                    
                    uint32_t* _tmp_5183 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_5183 = ros->spat.intersections.elements[h].moy[0].value; 
                    __aux64__ = ros->spat.intersections.elements[h].moy[0].value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].moy[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].moy[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                        return -1;
                    }
                }
                
                if(ros->spat.intersections.elements[h].time_stamp.size() != 0) {
                    // Field:  type(DSecond) name(time_stamp) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m004578\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].time_stamp[0].value) << 
                                     " spat.intersections.elements[h].time_stamp[0].value: " << ros->spat.intersections.elements[h].time_stamp[0].value;
                    }
                    
                    uint16_t* _tmp_5184 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_5184 = ros->spat.intersections.elements[h].time_stamp[0].value; 
                    __aux64__ = ros->spat.intersections.elements[h].time_stamp[0].value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].time_stamp[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].time_stamp[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                        return -1;
                    }
                }
                
                if(ros->spat.intersections.elements[h].enabled_lanes.size() != 0) {
                    // Field:  type(EnabledLaneList) name(enabled_lanes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                    __aux64__ = ros->spat.intersections.elements[h].enabled_lanes[0].elements.size();
                    if(__aux64__ > 16) __aux64__ = 16;
                    uint16_t* _tmp_5185 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_5185 = __aux64__ - 1;
                    
                    int __ifk = __aux64__;
                    for(int k = 0; k < __ifk; k++) { 
                        
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004580\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].enabled_lanes[0].elements[k].value) << 
                                         " spat.intersections.elements[h].enabled_lanes[0].elements[k].value: " << static_cast<int>(ros->spat.intersections.elements[h].enabled_lanes[0].elements[k].value);
                        }
                        
                        uint8_t* _tmp_5186 = (uint8_t*) buffer++;
                        *_tmp_5186 = ros->spat.intersections.elements[h].enabled_lanes[0].elements[k].value; 
                        __aux64__ = ros->spat.intersections.elements[h].enabled_lanes[0].elements[k].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].enabled_lanes[0].elements[k].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].enabled_lanes[0].elements[k].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                    }
                }
                
                // Field:  type(MovementList) name(states) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(255) span(255) ext(false)
                __aux64__ = ros->spat.intersections.elements[h].states.elements.size();
                if(__aux64__ > 255) __aux64__ = 255;
                uint16_t* _tmp_5187 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_5187 = __aux64__ - 1;
                
                int __ifl = __aux64__;
                for(int l = 0; l < __ifl; l++) { 
                    
                        // MovementState  SEQUENCE
                            //  movementName       DescriptiveName          OPTIONAL  
                            //  signalGroup        SignalGroupID              
                            //  state_time_speed   MovementEventList          
                            //  maneuverAssistList ManeuverAssistList       OPTIONAL  
                            //  regional           MovementState_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_2356 = (uint8_t*) buffer++;  // Write extension flag for MovementState
                        *_ext_flag_2356 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_5188 = (char*) buffer++;
                        *_tmp_5188 = (ros->spat.intersections.elements[h].states.elements[l].movement_name.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m004582\033[0m| Optional field movement_name = " << *_tmp_5188;
                        char* _tmp_5189 = (char*) buffer++;
                        *_tmp_5189 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m004583\033[0m| Optional field maneuver_assist_list = " << *_tmp_5189;
                        char* _tmp_5190 = (char*) buffer++;
                        *_tmp_5190 = (ros->spat.intersections.elements[h].states.elements[l].regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m004584\033[0m| Optional field regional = " << *_tmp_5190;
                        
                        if(ros->spat.intersections.elements[h].states.elements[l].movement_name.size() != 0) {
                            // Field:  type(DescriptiveName) name(movement_name) extGroup(0)
                            // Text
                            
                            // TEXT  min(1) max(63) span(63)
                            uint8_t* _tmp_5191 = (uint8_t*)buffer;
                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].movement_name[0].value.size();
                            
                            if(ros->spat.intersections.elements[h].states.elements[l].movement_name[0].value.size() < 1) {
                                logger->warning() << "Error: Length of 'spat.intersections.elements[h].states.elements[l].movement_name[0].value' " << (ros->spat.intersections.elements[h].states.elements[l].movement_name[0].value) << " is less than allowable (1); message dropped.";
                                return -1;
                            }
                            if(ros->spat.intersections.elements[h].states.elements[l].movement_name[0].value.size() > 63) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].movement_name[0].value' " << (ros->spat.intersections.elements[h].states.elements[l].movement_name[0].value) << " exceeds max allowable (63); message dropped.";
                                return -1;
                            }
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004585\033[0m| spat.intersections.elements[h].states.elements[l].movement_name[0].value.size(): " << 
                                            static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].movement_name[0].value.size());
                            
                            if(__aux64__ > 63) __aux64__ = 63;
                            *_tmp_5191 = __aux64__ - 1;
                            buffer += 1;
                            
                            int __ifm = __aux64__;
                            for(int m = 0; m < __ifm; m++) {  // 63
                                char* __tmp__ = (char*)buffer++;
                                *__tmp__ = ros->spat.intersections.elements[h].states.elements[l].movement_name[0].value.c_str()[m];
                            }
                        }
                        
                        // Field:  type(SignalGroupID) name(signal_group) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m004586\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].signal_group.value) << 
                                         " spat.intersections.elements[h].states.elements[l].signal_group.value: " << static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].signal_group.value);
                        }
                        
                        uint8_t* _tmp_5192 = (uint8_t*) buffer++;
                        *_tmp_5192 = ros->spat.intersections.elements[h].states.elements[l].signal_group.value; 
                        __aux64__ = ros->spat.intersections.elements[h].states.elements[l].signal_group.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].signal_group.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].signal_group.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MovementEventList) name(state_time_speed) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                        __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        uint16_t* _tmp_5193 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_5193 = __aux64__ - 1;
                        
                        int __ifn = __aux64__;
                        for(int n = 0; n < __ifn; n++) { 
                            
                                // MovementEvent  SEQUENCE
                                    //  eventState MovementPhaseState         
                                    //  timing     TimeChangeDetails        OPTIONAL  
                                    //  speeds     AdvisorySpeedList        OPTIONAL  
                                    //  regional   MovementEvent_regional   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_2358 = (uint8_t*) buffer++;  // Write extension flag for MovementEvent
                                *_ext_flag_2358 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_5194 = (char*) buffer++;
                                *_tmp_5194 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004588\033[0m| Optional field timing = " << *_tmp_5194;
                                char* _tmp_5195 = (char*) buffer++;
                                *_tmp_5195 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004589\033[0m| Optional field speeds = " << *_tmp_5195;
                                char* _tmp_5196 = (char*) buffer++;
                                *_tmp_5196 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].regional.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004590\033[0m| Optional field regional = " << *_tmp_5196;
                                
                                // Field:  type(MovementPhaseState) name(event_state) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(9) span(10) dataType(Int32)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m004591\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].event_state.value) << 
                                                 " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].event_state.value: " << static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].event_state.value);
                                }
                                
                                uint8_t* _tmp_5197 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_5197 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].event_state.value; 
                                __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].event_state.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].event_state.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 9) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].event_state.value' (" << __aux64__ << ") exceeds max allowable (9); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing.size() != 0) {
                                    // Field:  type(TimeChangeDetails) name(timing) extGroup(0)
                                        // TimeChangeDetails  SEQUENCE
                                            //  startTime  TimeMark                 OPTIONAL  
                                            //  minEndTime TimeMark                   
                                            //  maxEndTime TimeMark                 OPTIONAL  
                                            //  likelyTime TimeMark                 OPTIONAL  
                                            //  confidence TimeIntervalConfidence   OPTIONAL  
                                            //  nextTime   TimeMark                 OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_5198 = (char*) buffer++;
                                        *_tmp_5198 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004592\033[0m| Optional field start_time = " << *_tmp_5198;
                                        char* _tmp_5199 = (char*) buffer++;
                                        *_tmp_5199 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004593\033[0m| Optional field max_end_time = " << *_tmp_5199;
                                        char* _tmp_5200 = (char*) buffer++;
                                        *_tmp_5200 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004594\033[0m| Optional field likely_time = " << *_tmp_5200;
                                        char* _tmp_5201 = (char*) buffer++;
                                        *_tmp_5201 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004595\033[0m| Optional field confidence = " << *_tmp_5201;
                                        char* _tmp_5202 = (char*) buffer++;
                                        *_tmp_5202 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004596\033[0m| Optional field next_time = " << *_tmp_5202;
                                        
                                        if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time.size() != 0) {
                                            // Field:  type(TimeMark) name(start_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004597\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time[0].value) << 
                                                             " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time[0].value: " << ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_5203 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_5203 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].start_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        // Field:  type(TimeMark) name(min_end_time) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m004598\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].min_end_time.value) << 
                                                         " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].min_end_time.value: " << ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].min_end_time.value;
                                        }
                                        
                                        uint16_t* _tmp_5204 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_5204 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].min_end_time.value; 
                                        __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].min_end_time.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].min_end_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].min_end_time.value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time.size() != 0) {
                                            // Field:  type(TimeMark) name(max_end_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004599\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time[0].value) << 
                                                             " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time[0].value: " << ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_5205 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_5205 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].max_end_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time.size() != 0) {
                                            // Field:  type(TimeMark) name(likely_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004600\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time[0].value) << 
                                                             " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time[0].value: " << ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_5206 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_5206 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].likely_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence.size() != 0) {
                                            // Field:  type(TimeIntervalConfidence) name(confidence) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004601\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence[0].value) << 
                                                             " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence[0].value);
                                            }
                                            
                                            uint8_t* _tmp_5207 = (uint8_t*) buffer++;
                                            *_tmp_5207 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].confidence[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time.size() != 0) {
                                            // Field:  type(TimeMark) name(next_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004602\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time[0].value) << 
                                                             " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time[0].value: " << ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_5208 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_5208 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].timing[0].next_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds.size() != 0) {
                                    // Field:  type(AdvisorySpeedList) name(speeds) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                                    __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_5209 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_5209 = __aux64__ - 1;
                                    
                                    int __ifo = __aux64__;
                                    for(int o = 0; o < __ifo; o++) { 
                                        
                                            // AdvisorySpeed  SEQUENCE
                                                //  type       AdvisorySpeedType          
                                                //  speed      SpeedAdvice              OPTIONAL  
                                                //  confidence SpeedConfidenceDSRC      OPTIONAL  
                                                //  distance   ZoneLength               OPTIONAL  
                                                //  klass      RestrictionClassID       OPTIONAL  
                                                //  regional   AdvisorySpeed_regional   OPTIONAL  
                                                //  ...
                                            uint8_t* _ext_flag_2366 = (uint8_t*) buffer++;  // Write extension flag for AdvisorySpeed
                                            *_ext_flag_2366 = 0;  
                                            
                                            // Optional fields bytemap
                                            char* _tmp_5210 = (char*) buffer++;
                                            *_tmp_5210 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004604\033[0m| Optional field speed = " << *_tmp_5210;
                                            char* _tmp_5211 = (char*) buffer++;
                                            *_tmp_5211 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004605\033[0m| Optional field confidence = " << *_tmp_5211;
                                            char* _tmp_5212 = (char*) buffer++;
                                            *_tmp_5212 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004606\033[0m| Optional field distance = " << *_tmp_5212;
                                            char* _tmp_5213 = (char*) buffer++;
                                            *_tmp_5213 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004607\033[0m| Optional field klass = " << *_tmp_5213;
                                            char* _tmp_5214 = (char*) buffer++;
                                            *_tmp_5214 = (ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].regional.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m004608\033[0m| Optional field regional = " << *_tmp_5214;
                                            
                                            // Field:  type(AdvisorySpeedType) name(type) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(3) span(4) dataType(Int32)
                                            uint8_t* _ext_flag_2367 = (uint8_t*) buffer++; // Write extension flag for ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m004609\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.value) << 
                                                             " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.value: " << static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.value);
                                            }
                                            
                                            uint8_t* _tmp_5215 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_5215 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.value; 
                                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].type.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed.size() != 0) {
                                                // Field:  type(SpeedAdvice) name(speed) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(500) span(501) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004610\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed[0].value) << 
                                                                 " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed[0].value: " << ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed[0].value;
                                                }
                                                
                                                float _tmp_5217 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed[0].value;
                                                _tmp_5217 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_5217);
                                                uint16_t* _tmp_5216 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_5216 = static_cast<uint16_t>(_tmp_5217);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 500) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].speed[0].value' (" << __aux64__ << ") exceeds max allowable (500); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence.size() != 0) {
                                                // Field:  type(SpeedConfidenceDSRC) name(confidence) extGroup(0)
                                                // Enumerated
                                                // INT32  min(0) max(7) span(8) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004611\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence[0].value) << 
                                                                 " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence[0].value);
                                                }
                                                
                                                uint8_t* _tmp_5218 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_5218 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence[0].value; 
                                                __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].confidence[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance.size() != 0) {
                                                // Field:  type(ZoneLength) name(distance) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004612\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance[0].value) << 
                                                                 " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance[0].value: " << ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance[0].value;
                                                }
                                                
                                                uint16_t* _tmp_5219 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_5219 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance[0].value; 
                                                __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance[0].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].distance[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass.size() != 0) {
                                                // Field:  type(RestrictionClassID) name(klass) extGroup(0)
                                                // Integer
                                                
                                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m004613\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass[0].value) << 
                                                                 " spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass[0].value: " << static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass[0].value);
                                                }
                                                
                                                uint8_t* _tmp_5220 = (uint8_t*) buffer++;
                                                *_tmp_5220 = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass[0].value; 
                                                __aux64__ = ros->spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass[0].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].state_time_speed.elements[n].speeds[0].elements[o].klass[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            // Field name: regional  // avoided
                                            if(*_ext_flag_2366) {
                                            }
                                    }
                                }
                                
                                // Field name: regional  // avoided
                                if(*_ext_flag_2358) {
                                }
                        }
                        
                        if(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list.size() != 0) {
                            // Field:  type(ManeuverAssistList) name(maneuver_assist_list) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                            __aux64__ = ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements.size();
                            if(__aux64__ > 16) __aux64__ = 16;
                            uint16_t* _tmp_5223 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_5223 = __aux64__ - 1;
                            
                            int __ifp = __aux64__;
                            for(int p = 0; p < __ifp; p++) { 
                                
                                    // ConnectionManeuverAssist  SEQUENCE
                                        //  connectionID           LaneConnectionID                      
                                        //  queueLength            ZoneLength                          OPTIONAL  
                                        //  availableStorageLength ZoneLength                          OPTIONAL  
                                        //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                        //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                        //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_2372 = (uint8_t*) buffer++;  // Write extension flag for ConnectionManeuverAssist
                                    *_ext_flag_2372 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_5224 = (char*) buffer++;
                                    *_tmp_5224 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004615\033[0m| Optional field queue_length = " << *_tmp_5224;
                                    char* _tmp_5225 = (char*) buffer++;
                                    *_tmp_5225 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004616\033[0m| Optional field available_storage_length = " << *_tmp_5225;
                                    char* _tmp_5226 = (char*) buffer++;
                                    *_tmp_5226 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].wait_on_stop.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004617\033[0m| Optional field wait_on_stop = " << *_tmp_5226;
                                    char* _tmp_5227 = (char*) buffer++;
                                    *_tmp_5227 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].ped_bicycle_detect.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004618\033[0m| Optional field ped_bicycle_detect = " << *_tmp_5227;
                                    char* _tmp_5228 = (char*) buffer++;
                                    *_tmp_5228 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].regional.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m004619\033[0m| Optional field regional = " << *_tmp_5228;
                                    
                                    // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m004620\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].connection_id.value) << 
                                                     " spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].connection_id.value);
                                    }
                                    
                                    uint8_t* _tmp_5229 = (uint8_t*) buffer++;
                                    *_tmp_5229 = ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].connection_id.value; 
                                    __aux64__ = ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].connection_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].connection_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].connection_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length.size() != 0) {
                                        // Field:  type(ZoneLength) name(queue_length) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m004621\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length[0].value) << 
                                                         " spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length[0].value: " << ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length[0].value;
                                        }
                                        
                                        uint16_t* _tmp_5230 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_5230 = ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length[0].value; 
                                        __aux64__ = ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].queue_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length.size() != 0) {
                                        // Field:  type(ZoneLength) name(available_storage_length) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m004622\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length[0].value) << 
                                                         " spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length[0].value: " << ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length[0].value;
                                        }
                                        
                                        uint16_t* _tmp_5231 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_5231 = ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length[0].value; 
                                        __aux64__ = ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->warning() << "Error: Value in 'spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].available_storage_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].wait_on_stop.size() != 0) {
                                        // Field:  type(WaitOnStopline) name(wait_on_stop) extGroup(0)
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_5232 = (uint8_t*)buffer++;
                                        *_tmp_5232 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].wait_on_stop[0].value ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004623\033[0m| spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].wait_on_stop[0]: " << (*_tmp_5232);
                                    }
                                    
                                    if(ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].ped_bicycle_detect.size() != 0) {
                                        // Field:  type(PedestrianBicycleDetect) name(ped_bicycle_detect) extGroup(0)
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_5233 = (uint8_t*)buffer++;
                                        *_tmp_5233 = (ros->spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].ped_bicycle_detect[0].value ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m004624\033[0m| spat.intersections.elements[h].states.elements[l].maneuver_assist_list[0].elements[p].ped_bicycle_detect[0]: " << (*_tmp_5233);
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_2372) {
                                    }
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_2356) {
                        }
                }
                
                if(ros->spat.intersections.elements[h].maneuver_assist_list.size() != 0) {
                    // Field:  type(ManeuverAssistList) name(maneuver_assist_list) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                    __aux64__ = ros->spat.intersections.elements[h].maneuver_assist_list[0].elements.size();
                    if(__aux64__ > 16) __aux64__ = 16;
                    uint16_t* _tmp_5236 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_5236 = __aux64__ - 1;
                    
                    int __ifq = __aux64__;
                    for(int q = 0; q < __ifq; q++) { 
                        
                            // ConnectionManeuverAssist  SEQUENCE
                                //  connectionID           LaneConnectionID                      
                                //  queueLength            ZoneLength                          OPTIONAL  
                                //  availableStorageLength ZoneLength                          OPTIONAL  
                                //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_2376 = (uint8_t*) buffer++;  // Write extension flag for ConnectionManeuverAssist
                            *_ext_flag_2376 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_5237 = (char*) buffer++;
                            *_tmp_5237 = (ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004626\033[0m| Optional field queue_length = " << *_tmp_5237;
                            char* _tmp_5238 = (char*) buffer++;
                            *_tmp_5238 = (ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004627\033[0m| Optional field available_storage_length = " << *_tmp_5238;
                            char* _tmp_5239 = (char*) buffer++;
                            *_tmp_5239 = (ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].wait_on_stop.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004628\033[0m| Optional field wait_on_stop = " << *_tmp_5239;
                            char* _tmp_5240 = (char*) buffer++;
                            *_tmp_5240 = (ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].ped_bicycle_detect.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004629\033[0m| Optional field ped_bicycle_detect = " << *_tmp_5240;
                            char* _tmp_5241 = (char*) buffer++;
                            *_tmp_5241 = (ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].regional.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m004630\033[0m| Optional field regional = " << *_tmp_5241;
                            
                            // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m004631\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].connection_id.value) << 
                                             " spat.intersections.elements[h].maneuver_assist_list[0].elements[q].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].connection_id.value);
                            }
                            
                            uint8_t* _tmp_5242 = (uint8_t*) buffer++;
                            *_tmp_5242 = ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].connection_id.value; 
                            __aux64__ = ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].connection_id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].maneuver_assist_list[0].elements[q].connection_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[h].maneuver_assist_list[0].elements[q].connection_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                            
                            if(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length.size() != 0) {
                                // Field:  type(ZoneLength) name(queue_length) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m004632\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length[0].value) << 
                                                 " spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length[0].value: " << ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length[0].value;
                                }
                                
                                uint16_t* _tmp_5243 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_5243 = ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length[0].value; 
                                __aux64__ = ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].maneuver_assist_list[0].elements[q].queue_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length.size() != 0) {
                                // Field:  type(ZoneLength) name(available_storage_length) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m004633\033[0m| " << tools::getTypeName(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length[0].value) << 
                                                 " spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length[0].value: " << ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length[0].value;
                                }
                                
                                uint16_t* _tmp_5244 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_5244 = ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length[0].value; 
                                __aux64__ = ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->warning() << "Error: Value in 'spat.intersections.elements[h].maneuver_assist_list[0].elements[q].available_storage_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].wait_on_stop.size() != 0) {
                                // Field:  type(WaitOnStopline) name(wait_on_stop) extGroup(0)
                                // Value
                                // Boolean
                                uint8_t* _tmp_5245 = (uint8_t*)buffer++;
                                *_tmp_5245 = (ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].wait_on_stop[0].value ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004634\033[0m| spat.intersections.elements[h].maneuver_assist_list[0].elements[q].wait_on_stop[0]: " << (*_tmp_5245);
                            }
                            
                            if(ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].ped_bicycle_detect.size() != 0) {
                                // Field:  type(PedestrianBicycleDetect) name(ped_bicycle_detect) extGroup(0)
                                // Value
                                // Boolean
                                uint8_t* _tmp_5246 = (uint8_t*)buffer++;
                                *_tmp_5246 = (ros->spat.intersections.elements[h].maneuver_assist_list[0].elements[q].ped_bicycle_detect[0].value ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m004635\033[0m| spat.intersections.elements[h].maneuver_assist_list[0].elements[q].ped_bicycle_detect[0]: " << (*_tmp_5246);
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_2376) {
                            }
                    }
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_2349) {
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_2347) {
        }
    
	
            return buffer - start;
        }
    } 
}