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
            logger->print() << "|" << tools::brown("000000") << "| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        *_tmp_1 = ros->hheader.protocol_version.value; 
        __aux64__ = ros->hheader.protocol_version.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(ItsPduHeader_messageID) name(message_id) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->print() << "|" << tools::brown("000001") << "| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_2 = (uint8_t*) buffer++;
        *_tmp_2 = ros->hheader.message_id.value; 
        __aux64__ = ros->hheader.message_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(StationID) name(station_id) extGroup(0)
        // Integer
        
        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
        if(debug) {
            logger->print() << "|" << tools::brown("000002") << "| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_3 = (uint32_t*) buffer; buffer += 4;
        *_tmp_3 = ros->hheader.station_id.value; 
        __aux64__ = ros->hheader.station_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->error() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
            return -1;
        }
    
    // Field:  type(SPAT) name(spat) extGroup(0)
        // SPAT  SEQUENCE
            //  timeStamp     MinuteOfTheYear         OPTIONAL  
            //  name          DescriptiveName         OPTIONAL  
            //  intersections IntersectionStateList     
            //  regional      SPAT_regional           OPTIONAL  
            //  ...
        uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Write extension flag for SPAT
        *_ext_flag_4 = 0;  
        
        // Optional fields bytemap
        char* _tmp_4 = (char*) buffer++;
        *_tmp_4 = (ros->spat.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->print() << "|" << tools::brown("000003") << "| Optional field time_stamp = " << *_tmp_4;
        char* _tmp_5 = (char*) buffer++;
        *_tmp_5 = (ros->spat.name.size() != 0 ? 1 : 0);
        if(debug)
            logger->print() << "|" << tools::brown("000004") << "| Optional field name = " << *_tmp_5;
        char* _tmp_6 = (char*) buffer++;
        *_tmp_6 = (ros->spat.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->print() << "|" << tools::brown("000005") << "| Optional field regional = " << *_tmp_6;
        
        if(ros->spat.time_stamp.size() == 1) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->print() << "|" << tools::brown("000006") << "| " << tools::getTypeName(ros->spat.time_stamp[0].value) << 
                             " spat.time_stamp[0].value: " << ros->spat.time_stamp[0].value;
            }
            
            uint32_t* _tmp_7 = (uint32_t*) buffer; buffer += 4;
            *_tmp_7 = ros->spat.time_stamp[0].value; 
            __aux64__ = ros->spat.time_stamp[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->error() << "Error: Value in 'spat.time_stamp[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->error() << "Error: Value in 'spat.time_stamp[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                return -1;
            }
        }
        else if(ros->spat.time_stamp.size() > 1) {
            logger->error() << "Error: In 'ros->spat.time_stamp', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
            return -1;
        }
        
        if(ros->spat.name.size() == 1) {
            // Field:  type(DescriptiveName) name(name) extGroup(0)
            // Text
            
            // TEXT  min(1) max(63) span(63)
            uint8_t* _tmp_8 = (uint8_t*)buffer;
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
                logger->print() << "|" << tools::brown("000007") << "| spat.name[0].value.size(): " << 
                            static_cast<int>(ros->spat.name[0].value.size());
            
            if(__aux64__ > 63) __aux64__ = 63;
            *_tmp_8 = __aux64__ - 1;
            buffer += 1;
            
            int __ifa = __aux64__;
            for(int a = 0; a < __ifa; a++) {  // 63
                char* __tmp__ = (char*)buffer++;
                *__tmp__ = ros->spat.name[0].value.c_str()[a];
            }
        }
        else if(ros->spat.name.size() > 1) {
            logger->error() << "Error: In 'ros->spat.name', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
            return -1;
        }
        
        // Field:  type(IntersectionStateList) name(intersections) extGroup(0)
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
        __aux64__ = ros->spat.intersections.elements.size();
        if(__aux64__ > 32) __aux64__ = 32;
        uint16_t* _tmp_9 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_9 = __aux64__ - 1;
        
        int __ifb = __aux64__;
        for(int b = 0; b < __ifb; b++) { 
            
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
                uint8_t* _ext_flag_6 = (uint8_t*) buffer++;  // Write extension flag for IntersectionState
                *_ext_flag_6 = 0;  
                
                // Optional fields bytemap
                char* _tmp_10 = (char*) buffer++;
                *_tmp_10 = (ros->spat.intersections.elements[b].name.size() != 0 ? 1 : 0);
                if(debug)
                    logger->print() << "|" << tools::brown("000009") << "| Optional field name = " << *_tmp_10;
                char* _tmp_11 = (char*) buffer++;
                *_tmp_11 = (ros->spat.intersections.elements[b].moy.size() != 0 ? 1 : 0);
                if(debug)
                    logger->print() << "|" << tools::brown("000010") << "| Optional field moy = " << *_tmp_11;
                char* _tmp_12 = (char*) buffer++;
                *_tmp_12 = (ros->spat.intersections.elements[b].time_stamp.size() != 0 ? 1 : 0);
                if(debug)
                    logger->print() << "|" << tools::brown("000011") << "| Optional field time_stamp = " << *_tmp_12;
                char* _tmp_13 = (char*) buffer++;
                *_tmp_13 = (ros->spat.intersections.elements[b].enabled_lanes.size() != 0 ? 1 : 0);
                if(debug)
                    logger->print() << "|" << tools::brown("000012") << "| Optional field enabled_lanes = " << *_tmp_13;
                char* _tmp_14 = (char*) buffer++;
                *_tmp_14 = (ros->spat.intersections.elements[b].maneuver_assist_list.size() != 0 ? 1 : 0);
                if(debug)
                    logger->print() << "|" << tools::brown("000013") << "| Optional field maneuver_assist_list = " << *_tmp_14;
                char* _tmp_15 = (char*) buffer++;
                *_tmp_15 = (ros->spat.intersections.elements[b].regional.size() != 0 ? 1 : 0);
                if(debug)
                    logger->print() << "|" << tools::brown("000014") << "| Optional field regional = " << *_tmp_15;
                
                if(ros->spat.intersections.elements[b].name.size() == 1) {
                    // Field:  type(DescriptiveName) name(name) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(63) span(63)
                    uint8_t* _tmp_16 = (uint8_t*)buffer;
                    __aux64__ = ros->spat.intersections.elements[b].name[0].value.size();
                    
                    if(ros->spat.intersections.elements[b].name[0].value.size() < 1) {
                        logger->warning() << "Error: Length of 'spat.intersections.elements[b].name[0].value' " << (ros->spat.intersections.elements[b].name[0].value) << " is less than allowable (1); message dropped.";
                        return -1;
                    }
                    if(ros->spat.intersections.elements[b].name[0].value.size() > 63) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[b].name[0].value' " << (ros->spat.intersections.elements[b].name[0].value) << " exceeds max allowable (63); message dropped.";
                        return -1;
                    }
                    if(debug)
                        logger->print() << "|" << tools::brown("000015") << "| spat.intersections.elements[b].name[0].value.size(): " << 
                                    static_cast<int>(ros->spat.intersections.elements[b].name[0].value.size());
                    
                    if(__aux64__ > 63) __aux64__ = 63;
                    *_tmp_16 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ifc = __aux64__;
                    for(int c = 0; c < __ifc; c++) {  // 63
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->spat.intersections.elements[b].name[0].value.c_str()[c];
                    }
                }
                else if(ros->spat.intersections.elements[b].name.size() > 1) {
                    logger->error() << "Error: In 'ros->spat.intersections.elements[b].name', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                    return -1;
                }
                
                // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    // Optional fields bytemap
                    char* _tmp_17 = (char*) buffer++;
                    *_tmp_17 = (ros->spat.intersections.elements[b].id.region.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000016") << "| Optional field region = " << *_tmp_17;
                    
                    if(ros->spat.intersections.elements[b].id.region.size() == 1) {
                        // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000017") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].id.region[0].value) << 
                                         " spat.intersections.elements[b].id.region[0].value: " << ros->spat.intersections.elements[b].id.region[0].value;
                        }
                        
                        uint16_t* _tmp_18 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18 = ros->spat.intersections.elements[b].id.region[0].value; 
                        __aux64__ = ros->spat.intersections.elements[b].id.region[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    else if(ros->spat.intersections.elements[b].id.region.size() > 1) {
                        logger->error() << "Error: In 'ros->spat.intersections.elements[b].id.region', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(IntersectionID) name(id) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                    if(debug) {
                        logger->print() << "|" << tools::brown("000018") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].id.id.value) << 
                                     " spat.intersections.elements[b].id.id.value: " << ros->spat.intersections.elements[b].id.id.value;
                    }
                    
                    uint16_t* _tmp_19 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_19 = ros->spat.intersections.elements[b].id.id.value; 
                    __aux64__ = ros->spat.intersections.elements[b].id.id.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                        return -1;
                    }
                
                // Field:  type(MsgCount) name(revision) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(127) span(128) dataType(UInt8)
                if(debug) {
                    logger->print() << "|" << tools::brown("000019") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].revision.value) << 
                                 " spat.intersections.elements[b].revision.value: " << static_cast<int>(ros->spat.intersections.elements[b].revision.value);
                }
                
                uint8_t* _tmp_20 = (uint8_t*) buffer++;
                *_tmp_20 = ros->spat.intersections.elements[b].revision.value; 
                __aux64__ = ros->spat.intersections.elements[b].revision.value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].revision.value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->error() << "Error: Value in 'spat.intersections.elements[b].revision.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                    return -1;
                }
                
                // Field:  type(IntersectionStatusObject) name(status) extGroup(0)
                // BitString
                // BIT_STRING  min(16) max(16) span(1)
                if(debug)
                    logger->print() << "|" << tools::brown("000020") << "| spat.intersections.elements[b].status.value: " << static_cast<int>(ros->spat.intersections.elements[b].status.values.size());
                
                if(ros->spat.intersections.elements[b].status.values.size() < 16) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[b].status.value' " << (ros->spat.intersections.elements[b].status.values.size()) << " is less than allowable (16); message dropped.";
                    return -1;
                }
                if(ros->spat.intersections.elements[b].status.values.size() > 16) {
                        logger->warning() << "Error: Value in 'spat.intersections.elements[b].status.value' " << (ros->spat.intersections.elements[b].status.values.size()) << " exceeds max allowable (16); message dropped.";
                    return -1;
                }
                
                uint8_t* _tmp_21 = (uint8_t*)buffer;
                __aux64__ = ros->spat.intersections.elements[b].status.values.size();
                if(__aux64__ > 16) __aux64__ = 16;
                *_tmp_21 = __aux64__ - 16;
                buffer += 1;
                
                int __ifd = __aux64__;
                for(int d = 0; d < __ifd; d++) {
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    *__b__ = (ros->spat.intersections.elements[b].status.values[d]? 1: 0);
                }
                
                if(ros->spat.intersections.elements[b].moy.size() == 1) {
                    // Field:  type(MinuteOfTheYear) name(moy) extGroup(0)
                    // Integer
                    
                    // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
                    if(debug) {
                        logger->print() << "|" << tools::brown("000021") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].moy[0].value) << 
                                     " spat.intersections.elements[b].moy[0].value: " << ros->spat.intersections.elements[b].moy[0].value;
                    }
                    
                    uint32_t* _tmp_22 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_22 = ros->spat.intersections.elements[b].moy[0].value; 
                    __aux64__ = ros->spat.intersections.elements[b].moy[0].value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].moy[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].moy[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                        return -1;
                    }
                }
                else if(ros->spat.intersections.elements[b].moy.size() > 1) {
                    logger->error() << "Error: In 'ros->spat.intersections.elements[b].moy', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                    return -1;
                }
                
                if(ros->spat.intersections.elements[b].time_stamp.size() == 1) {
                    // Field:  type(DSecond) name(time_stamp) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                    if(debug) {
                        logger->print() << "|" << tools::brown("000022") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].time_stamp[0].value) << 
                                     " spat.intersections.elements[b].time_stamp[0].value: " << ros->spat.intersections.elements[b].time_stamp[0].value;
                    }
                    
                    uint16_t* _tmp_23 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_23 = ros->spat.intersections.elements[b].time_stamp[0].value; 
                    __aux64__ = ros->spat.intersections.elements[b].time_stamp[0].value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].time_stamp[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->error() << "Error: Value in 'spat.intersections.elements[b].time_stamp[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                        return -1;
                    }
                }
                else if(ros->spat.intersections.elements[b].time_stamp.size() > 1) {
                    logger->error() << "Error: In 'ros->spat.intersections.elements[b].time_stamp', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                    return -1;
                }
                
                if(ros->spat.intersections.elements[b].enabled_lanes.size() == 1) {
                    // Field:  type(EnabledLaneList) name(enabled_lanes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                    __aux64__ = ros->spat.intersections.elements[b].enabled_lanes[0].elements.size();
                    if(__aux64__ > 16) __aux64__ = 16;
                    uint16_t* _tmp_24 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_24 = __aux64__ - 1;
                    
                    int __ife = __aux64__;
                    for(int e = 0; e < __ife; e++) { 
                        
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000024") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].enabled_lanes[0].elements[e].value) << 
                                         " spat.intersections.elements[b].enabled_lanes[0].elements[e].value: " << static_cast<int>(ros->spat.intersections.elements[b].enabled_lanes[0].elements[e].value);
                        }
                        
                        uint8_t* _tmp_25 = (uint8_t*) buffer++;
                        *_tmp_25 = ros->spat.intersections.elements[b].enabled_lanes[0].elements[e].value; 
                        __aux64__ = ros->spat.intersections.elements[b].enabled_lanes[0].elements[e].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].enabled_lanes[0].elements[e].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].enabled_lanes[0].elements[e].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                    }
                }
                else if(ros->spat.intersections.elements[b].enabled_lanes.size() > 1) {
                    logger->error() << "Error: In 'ros->spat.intersections.elements[b].enabled_lanes', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                    return -1;
                }
                
                // Field:  type(MovementList) name(states) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(255) span(255) ext(false)
                __aux64__ = ros->spat.intersections.elements[b].states.elements.size();
                if(__aux64__ > 255) __aux64__ = 255;
                uint16_t* _tmp_26 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_26 = __aux64__ - 1;
                
                int __iff = __aux64__;
                for(int f = 0; f < __iff; f++) { 
                    
                        // MovementState  SEQUENCE
                            //  movementName       DescriptiveName          OPTIONAL  
                            //  signalGroup        SignalGroupID              
                            //  state_time_speed   MovementEventList          
                            //  maneuverAssistList ManeuverAssistList       OPTIONAL  
                            //  regional           MovementState_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_13 = (uint8_t*) buffer++;  // Write extension flag for MovementState
                        *_ext_flag_13 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_27 = (char*) buffer++;
                        *_tmp_27 = (ros->spat.intersections.elements[b].states.elements[f].movement_name.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000026") << "| Optional field movement_name = " << *_tmp_27;
                        char* _tmp_28 = (char*) buffer++;
                        *_tmp_28 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000027") << "| Optional field maneuver_assist_list = " << *_tmp_28;
                        char* _tmp_29 = (char*) buffer++;
                        *_tmp_29 = (ros->spat.intersections.elements[b].states.elements[f].regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000028") << "| Optional field regional = " << *_tmp_29;
                        
                        if(ros->spat.intersections.elements[b].states.elements[f].movement_name.size() == 1) {
                            // Field:  type(DescriptiveName) name(movement_name) extGroup(0)
                            // Text
                            
                            // TEXT  min(1) max(63) span(63)
                            uint8_t* _tmp_30 = (uint8_t*)buffer;
                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value.size();
                            
                            if(ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value.size() < 1) {
                                logger->warning() << "Error: Length of 'spat.intersections.elements[b].states.elements[f].movement_name[0].value' " << (ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value) << " is less than allowable (1); message dropped.";
                                return -1;
                            }
                            if(ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value.size() > 63) {
                                logger->warning() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].movement_name[0].value' " << (ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value) << " exceeds max allowable (63); message dropped.";
                                return -1;
                            }
                            if(debug)
                                logger->print() << "|" << tools::brown("000029") << "| spat.intersections.elements[b].states.elements[f].movement_name[0].value.size(): " << 
                                            static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value.size());
                            
                            if(__aux64__ > 63) __aux64__ = 63;
                            *_tmp_30 = __aux64__ - 1;
                            buffer += 1;
                            
                            int __ifg = __aux64__;
                            for(int g = 0; g < __ifg; g++) {  // 63
                                char* __tmp__ = (char*)buffer++;
                                *__tmp__ = ros->spat.intersections.elements[b].states.elements[f].movement_name[0].value.c_str()[g];
                            }
                        }
                        else if(ros->spat.intersections.elements[b].states.elements[f].movement_name.size() > 1) {
                            logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].movement_name', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SignalGroupID) name(signal_group) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000030") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].signal_group.value) << 
                                         " spat.intersections.elements[b].states.elements[f].signal_group.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].signal_group.value);
                        }
                        
                        uint8_t* _tmp_31 = (uint8_t*) buffer++;
                        *_tmp_31 = ros->spat.intersections.elements[b].states.elements[f].signal_group.value; 
                        __aux64__ = ros->spat.intersections.elements[b].states.elements[f].signal_group.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].signal_group.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].signal_group.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MovementEventList) name(state_time_speed) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                        __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        uint16_t* _tmp_32 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_32 = __aux64__ - 1;
                        
                        int __ifh = __aux64__;
                        for(int h = 0; h < __ifh; h++) { 
                            
                                // MovementEvent  SEQUENCE
                                    //  eventState MovementPhaseState         
                                    //  timing     TimeChangeDetails        OPTIONAL  
                                    //  speeds     AdvisorySpeedList        OPTIONAL  
                                    //  regional   MovementEvent_regional   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_15 = (uint8_t*) buffer++;  // Write extension flag for MovementEvent
                                *_ext_flag_15 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_33 = (char*) buffer++;
                                *_tmp_33 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000032") << "| Optional field timing = " << *_tmp_33;
                                char* _tmp_34 = (char*) buffer++;
                                *_tmp_34 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000033") << "| Optional field speeds = " << *_tmp_34;
                                char* _tmp_35 = (char*) buffer++;
                                *_tmp_35 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].regional.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000034") << "| Optional field regional = " << *_tmp_35;
                                
                                // Field:  type(MovementPhaseState) name(event_state) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(9) span(10) dataType(Int32)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000035") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value) << 
                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value);
                                }
                                
                                uint8_t* _tmp_36 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_36 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value; 
                                __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 9) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].event_state.value' (" << __aux64__ << ") exceeds max allowable (9); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing.size() == 1) {
                                    // Field:  type(TimeChangeDetails) name(timing) extGroup(0)
                                        // TimeChangeDetails  SEQUENCE
                                            //  startTime  TimeMark                 OPTIONAL  
                                            //  minEndTime TimeMark                   
                                            //  maxEndTime TimeMark                 OPTIONAL  
                                            //  likelyTime TimeMark                 OPTIONAL  
                                            //  confidence TimeIntervalConfidence   OPTIONAL  
                                            //  nextTime   TimeMark                 OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_37 = (char*) buffer++;
                                        *_tmp_37 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000036") << "| Optional field start_time = " << *_tmp_37;
                                        char* _tmp_38 = (char*) buffer++;
                                        *_tmp_38 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000037") << "| Optional field max_end_time = " << *_tmp_38;
                                        char* _tmp_39 = (char*) buffer++;
                                        *_tmp_39 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000038") << "| Optional field likely_time = " << *_tmp_39;
                                        char* _tmp_40 = (char*) buffer++;
                                        *_tmp_40 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000039") << "| Optional field confidence = " << *_tmp_40;
                                        char* _tmp_41 = (char*) buffer++;
                                        *_tmp_41 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000040") << "| Optional field next_time = " << *_tmp_41;
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time.size() == 1) {
                                            // Field:  type(TimeMark) name(start_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000041") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_42 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_42 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                        else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time.size() > 1) {
                                            logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].start_time', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(TimeMark) name(min_end_time) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                        if(debug) {
                                            logger->print() << "|" << tools::brown("000042") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value) << 
                                                         " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value;
                                        }
                                        
                                        uint16_t* _tmp_43 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_43 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value; 
                                        __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].min_end_time.value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time.size() == 1) {
                                            // Field:  type(TimeMark) name(max_end_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000043") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_44 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_44 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                        else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time.size() > 1) {
                                            logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].max_end_time', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time.size() == 1) {
                                            // Field:  type(TimeMark) name(likely_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000044") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_45 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_45 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                        else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time.size() > 1) {
                                            logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].likely_time', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence.size() == 1) {
                                            // Field:  type(TimeIntervalConfidence) name(confidence) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000045") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value);
                                            }
                                            
                                            uint8_t* _tmp_46 = (uint8_t*) buffer++;
                                            *_tmp_46 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence.size() > 1) {
                                            logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].confidence', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time.size() == 1) {
                                            // Field:  type(TimeMark) name(next_time) extGroup(0)
                                            // Integer
                                            
                                            // UINT16  min(0) max(36001) span(36002) dataType(UInt16)
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000046") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value;
                                            }
                                            
                                            uint16_t* _tmp_47 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_47 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value; 
                                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 36001) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time[0].value' (" << __aux64__ << ") exceeds max allowable (36001); message dropped.";
                                                return -1;
                                            }
                                        }
                                        else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time.size() > 1) {
                                            logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing[0].next_time', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                            return -1;
                                        }
                                }
                                else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing.size() > 1) {
                                    logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].timing', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds.size() == 1) {
                                    // Field:  type(AdvisorySpeedList) name(speeds) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                                    __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_48 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_48 = __aux64__ - 1;
                                    
                                    int __ifi = __aux64__;
                                    for(int i = 0; i < __ifi; i++) { 
                                        
                                            // AdvisorySpeed  SEQUENCE
                                                //  type       AdvisorySpeedType          
                                                //  speed      SpeedAdvice              OPTIONAL  
                                                //  confidence SpeedConfidenceDSRC      OPTIONAL  
                                                //  distance   ZoneLength               OPTIONAL  
                                                //  klass      RestrictionClassID       OPTIONAL  
                                                //  regional   AdvisorySpeed_regional   OPTIONAL  
                                                //  ...
                                            uint8_t* _ext_flag_23 = (uint8_t*) buffer++;  // Write extension flag for AdvisorySpeed
                                            *_ext_flag_23 = 0;  
                                            
                                            // Optional fields bytemap
                                            char* _tmp_49 = (char*) buffer++;
                                            *_tmp_49 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000048") << "| Optional field speed = " << *_tmp_49;
                                            char* _tmp_50 = (char*) buffer++;
                                            *_tmp_50 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000049") << "| Optional field confidence = " << *_tmp_50;
                                            char* _tmp_51 = (char*) buffer++;
                                            *_tmp_51 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000050") << "| Optional field distance = " << *_tmp_51;
                                            char* _tmp_52 = (char*) buffer++;
                                            *_tmp_52 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000051") << "| Optional field klass = " << *_tmp_52;
                                            char* _tmp_53 = (char*) buffer++;
                                            *_tmp_53 = (ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].regional.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->print() << "|" << tools::brown("000052") << "| Optional field regional = " << *_tmp_53;
                                            
                                            // Field:  type(AdvisorySpeedType) name(type) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(3) span(4) dataType(Int32)
                                            uint8_t* _ext_flag_24 = (uint8_t*) buffer++; // Write extension flag for ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.
                                            if(debug) {
                                                logger->print() << "|" << tools::brown("000053") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value) << 
                                                             " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value);
                                            }
                                            
                                            uint8_t* _tmp_54 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_54 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value; 
                                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                                logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].type.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed.size() == 1) {
                                                // Field:  type(SpeedAdvice) name(speed) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(500) span(501) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000054") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value) << 
                                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value;
                                                }
                                                
                                                float _tmp_56 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value;
                                                _tmp_56 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_56);
                                                uint16_t* _tmp_55 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_55 = static_cast<uint16_t>(_tmp_56);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 500) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed[0].value' (" << __aux64__ << ") exceeds max allowable (500); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed.size() > 1) {
                                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].speed', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence.size() == 1) {
                                                // Field:  type(SpeedConfidenceDSRC) name(confidence) extGroup(0)
                                                // Enumerated
                                                // INT32  min(0) max(7) span(8) dataType(Int32)
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000055") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value) << 
                                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value);
                                                }
                                                
                                                uint8_t* _tmp_57 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_57 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value; 
                                                __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence.size() > 1) {
                                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].confidence', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance.size() == 1) {
                                                // Field:  type(ZoneLength) name(distance) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000056") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value) << 
                                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value: " << ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value;
                                                }
                                                
                                                uint16_t* _tmp_58 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_58 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value; 
                                                __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance.size() > 1) {
                                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].distance', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass.size() == 1) {
                                                // Field:  type(RestrictionClassID) name(klass) extGroup(0)
                                                // Integer
                                                
                                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                if(debug) {
                                                    logger->print() << "|" << tools::brown("000057") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value) << 
                                                                 " spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value);
                                                }
                                                
                                                uint8_t* _tmp_59 = (uint8_t*) buffer++;
                                                *_tmp_59 = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value; 
                                                __aux64__ = ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass.size() > 1) {
                                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds[0].elements[i].klass', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field name: regional  // avoided
                                            if(*_ext_flag_23) {
                                            }
                                    }
                                }
                                else if(ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds.size() > 1) {
                                    logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].state_time_speed.elements[h].speeds', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                // Field name: regional  // avoided
                                if(*_ext_flag_15) {
                                }
                        }
                        
                        if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list.size() == 1) {
                            // Field:  type(ManeuverAssistList) name(maneuver_assist_list) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                            __aux64__ = ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements.size();
                            if(__aux64__ > 16) __aux64__ = 16;
                            uint16_t* _tmp_62 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_62 = __aux64__ - 1;
                            
                            int __ifj = __aux64__;
                            for(int j = 0; j < __ifj; j++) { 
                                
                                    // ConnectionManeuverAssist  SEQUENCE
                                        //  connectionID           LaneConnectionID                      
                                        //  queueLength            ZoneLength                          OPTIONAL  
                                        //  availableStorageLength ZoneLength                          OPTIONAL  
                                        //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                        //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                        //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_29 = (uint8_t*) buffer++;  // Write extension flag for ConnectionManeuverAssist
                                    *_ext_flag_29 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_63 = (char*) buffer++;
                                    *_tmp_63 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000059") << "| Optional field queue_length = " << *_tmp_63;
                                    char* _tmp_64 = (char*) buffer++;
                                    *_tmp_64 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000060") << "| Optional field available_storage_length = " << *_tmp_64;
                                    char* _tmp_65 = (char*) buffer++;
                                    *_tmp_65 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000061") << "| Optional field wait_on_stop = " << *_tmp_65;
                                    char* _tmp_66 = (char*) buffer++;
                                    *_tmp_66 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000062") << "| Optional field ped_bicycle_detect = " << *_tmp_66;
                                    char* _tmp_67 = (char*) buffer++;
                                    *_tmp_67 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].regional.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000063") << "| Optional field regional = " << *_tmp_67;
                                    
                                    // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000064") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value) << 
                                                     " spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value);
                                    }
                                    
                                    uint8_t* _tmp_68 = (uint8_t*) buffer++;
                                    *_tmp_68 = ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value; 
                                    __aux64__ = ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].connection_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length.size() == 1) {
                                        // Field:  type(ZoneLength) name(queue_length) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                        if(debug) {
                                            logger->print() << "|" << tools::brown("000065") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value) << 
                                                         " spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value: " << ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value;
                                        }
                                        
                                        uint16_t* _tmp_69 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_69 = ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value; 
                                        __aux64__ = ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                            return -1;
                                        }
                                    }
                                    else if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length.size() > 1) {
                                        logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].queue_length', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length.size() == 1) {
                                        // Field:  type(ZoneLength) name(available_storage_length) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                        if(debug) {
                                            logger->print() << "|" << tools::brown("000066") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value) << 
                                                         " spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value: " << ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value;
                                        }
                                        
                                        uint16_t* _tmp_70 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_70 = ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value; 
                                        __aux64__ = ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                            logger->error() << "Error: Value in 'spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                            return -1;
                                        }
                                    }
                                    else if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length.size() > 1) {
                                        logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].available_storage_length', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop.size() == 1) {
                                        // Field:  type(WaitOnStopline) name(wait_on_stop) extGroup(0)
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_71 = (uint8_t*)buffer++;
                                        *_tmp_71 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop[0].value ? 1 : 0);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000067") << "| spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop[0]: " << (*_tmp_71);
                                    }
                                    else if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop.size() > 1) {
                                        logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].wait_on_stop', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect.size() == 1) {
                                        // Field:  type(PedestrianBicycleDetect) name(ped_bicycle_detect) extGroup(0)
                                        // Value
                                        // Boolean
                                        uint8_t* _tmp_72 = (uint8_t*)buffer++;
                                        *_tmp_72 = (ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect[0].value ? 1 : 0);
                                        if(debug)
                                            logger->print() << "|" << tools::brown("000068") << "| spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect[0]: " << (*_tmp_72);
                                    }
                                    else if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect.size() > 1) {
                                        logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list[0].elements[j].ped_bicycle_detect', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_29) {
                                    }
                            }
                        }
                        else if(ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list.size() > 1) {
                            logger->error() << "Error: In 'ros->spat.intersections.elements[b].states.elements[f].maneuver_assist_list', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_13) {
                        }
                }
                
                if(ros->spat.intersections.elements[b].maneuver_assist_list.size() == 1) {
                    // Field:  type(ManeuverAssistList) name(maneuver_assist_list) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                    __aux64__ = ros->spat.intersections.elements[b].maneuver_assist_list[0].elements.size();
                    if(__aux64__ > 16) __aux64__ = 16;
                    uint16_t* _tmp_75 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_75 = __aux64__ - 1;
                    
                    int __ifk = __aux64__;
                    for(int k = 0; k < __ifk; k++) { 
                        
                            // ConnectionManeuverAssist  SEQUENCE
                                //  connectionID           LaneConnectionID                      
                                //  queueLength            ZoneLength                          OPTIONAL  
                                //  availableStorageLength ZoneLength                          OPTIONAL  
                                //  waitOnStop             WaitOnStopline                      OPTIONAL  
                                //  pedBicycleDetect       PedestrianBicycleDetect             OPTIONAL  
                                //  regional               ConnectionManeuverAssist_regional   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_33 = (uint8_t*) buffer++;  // Write extension flag for ConnectionManeuverAssist
                            *_ext_flag_33 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_76 = (char*) buffer++;
                            *_tmp_76 = (ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->print() << "|" << tools::brown("000070") << "| Optional field queue_length = " << *_tmp_76;
                            char* _tmp_77 = (char*) buffer++;
                            *_tmp_77 = (ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->print() << "|" << tools::brown("000071") << "| Optional field available_storage_length = " << *_tmp_77;
                            char* _tmp_78 = (char*) buffer++;
                            *_tmp_78 = (ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->print() << "|" << tools::brown("000072") << "| Optional field wait_on_stop = " << *_tmp_78;
                            char* _tmp_79 = (char*) buffer++;
                            *_tmp_79 = (ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->print() << "|" << tools::brown("000073") << "| Optional field ped_bicycle_detect = " << *_tmp_79;
                            char* _tmp_80 = (char*) buffer++;
                            *_tmp_80 = (ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].regional.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->print() << "|" << tools::brown("000074") << "| Optional field regional = " << *_tmp_80;
                            
                            // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000075") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value) << 
                                             " spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value: " << static_cast<int>(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value);
                            }
                            
                            uint8_t* _tmp_81 = (uint8_t*) buffer++;
                            *_tmp_81 = ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value; 
                            __aux64__ = ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].connection_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length.size() == 1) {
                                // Field:  type(ZoneLength) name(queue_length) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000076") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value) << 
                                                 " spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value: " << ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value;
                                }
                                
                                uint16_t* _tmp_82 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_82 = ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value; 
                                __aux64__ = ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                    return -1;
                                }
                            }
                            else if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length.size() > 1) {
                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].queue_length', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                return -1;
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length.size() == 1) {
                                // Field:  type(ZoneLength) name(available_storage_length) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(10000) span(10001) dataType(UInt16)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000077") << "| " << tools::getTypeName(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value) << 
                                                 " spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value: " << ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value;
                                }
                                
                                uint16_t* _tmp_83 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_83 = ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value; 
                                __aux64__ = ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 10000) {
                                    logger->error() << "Error: Value in 'spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length[0].value' (" << __aux64__ << ") exceeds max allowable (10000); message dropped.";
                                    return -1;
                                }
                            }
                            else if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length.size() > 1) {
                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].available_storage_length', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                return -1;
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop.size() == 1) {
                                // Field:  type(WaitOnStopline) name(wait_on_stop) extGroup(0)
                                // Value
                                // Boolean
                                uint8_t* _tmp_84 = (uint8_t*)buffer++;
                                *_tmp_84 = (ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop[0].value ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000078") << "| spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop[0]: " << (*_tmp_84);
                            }
                            else if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop.size() > 1) {
                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].wait_on_stop', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                return -1;
                            }
                            
                            if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect.size() == 1) {
                                // Field:  type(PedestrianBicycleDetect) name(ped_bicycle_detect) extGroup(0)
                                // Value
                                // Boolean
                                uint8_t* _tmp_85 = (uint8_t*)buffer++;
                                *_tmp_85 = (ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect[0].value ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000079") << "| spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect[0]: " << (*_tmp_85);
                            }
                            else if(ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect.size() > 1) {
                                logger->error() << "Error: In 'ros->spat.intersections.elements[b].maneuver_assist_list[0].elements[k].ped_bicycle_detect', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                return -1;
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_33) {
                            }
                    }
                }
                else if(ros->spat.intersections.elements[b].maneuver_assist_list.size() > 1) {
                    logger->error() << "Error: In 'ros->spat.intersections.elements[b].maneuver_assist_list', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                    return -1;
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_6) {
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_4) {
        }
    
	
            return buffer - start;
        }
    } 
}