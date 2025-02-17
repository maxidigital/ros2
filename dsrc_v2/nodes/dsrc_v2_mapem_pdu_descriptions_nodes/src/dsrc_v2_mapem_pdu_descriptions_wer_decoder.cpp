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
#include <dsrc_v2_mapem_pdu_descriptions_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_dsrc_v2_mapem_pdu_descriptions
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(dsrc_v2_mapem_pdu_descriptions_msgs::MAPEM* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(dsrc_v2_mapem_pdu_descriptions_msgs::msg::MAPEM* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // MAPEM  SEQUENCE
        //  header     ItsPduHeader     
        //  map        MapData          
    
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
            logger->debug() << "|\033[38;5;94m000000\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
        uint8_t* _tmp_2 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_2;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m000001\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
        uint32_t* _tmp_3 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_3;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m000002\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
    
    // Field name: map
        // MapData  SEQUENCE
            //  timeStamp        MinuteOfTheYear            OPTIONAL  
            //  msgIssueRevision MsgCount                     
            //  layerType        LayerType                  OPTIONAL  
            //  layerID          LayerID                    OPTIONAL  
            //  intersections    IntersectionGeometryList   OPTIONAL  
            //  roadSegments     RoadSegmentList            OPTIONAL  
            //  dataParameters   DataParameters             OPTIONAL  
            //  restrictionList  RestrictionClassList       OPTIONAL  
            //  regional         MapData_regional           OPTIONAL  
            //  ...
        uint8_t* _ext_flag_1 = (uint8_t*) buffer++;  // Read ext flag from ros->map.
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m000003\033[0m| Reading ext flag from ros->map.: " << int(*_ext_flag_1);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_4;
            ros->map.time_stamp.push_back(_tmp_4);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000004\033[0m| ros->map.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::LayerType _tmp_5;
            ros->map.layer_type.push_back(_tmp_5);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000005\033[0m| ros->map.layer_type " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::LayerID _tmp_6;
            ros->map.layer_id.push_back(_tmp_6);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000006\033[0m| ros->map.layer_id " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::IntersectionGeometryList _tmp_7;
            ros->map.intersections.push_back(_tmp_7);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000007\033[0m| ros->map.intersections " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::RoadSegmentList _tmp_8;
            ros->map.road_segments.push_back(_tmp_8);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000008\033[0m| ros->map.road_segments " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::DataParameters _tmp_9;
            ros->map.data_parameters.push_back(_tmp_9);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000009\033[0m| ros->map.data_parameters " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::RestrictionClassList _tmp_10;
            ros->map.restriction_list.push_back(_tmp_10);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000010\033[0m| ros->map.restriction_list " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MapDataRegional _tmp_11;
            ros->map.regional.push_back(_tmp_11);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m000011\033[0m| ros->map.regional " << tools::green("present");
        }
        
        if(ros->map.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_12 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_12;
            ros->map.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m000012\033[0m| " << tools::getTypeName(ros->map.time_stamp[0].value) << 
                             " map.time_stamp[0].value: " << ros->map.time_stamp[0].value;
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'map.time_stamp[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'map.time_stamp[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                return false;
            }
        }
        
        // Field name: msg_issue_revision
        // Integer
        // UINT8  min(0) max(127) span(128) datatype(UInt8)
        uint8_t* _tmp_13 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_13;
        ros->map.msg_issue_revision.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m000013\033[0m| " << tools::getTypeName(ros->map.msg_issue_revision.value) << 
                         " map.msg_issue_revision.value: " << static_cast<int>(ros->map.msg_issue_revision.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'map.msg_issue_revision.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 127) {
            logger->warning() << "Error: Value in 'map.msg_issue_revision.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
            return false;
        }
        
        if(ros->map.layer_type.size() != 0) {
            // Field name: layer_type
            // Enumerated
            // INT32  min(0) max(7) span(8) datatype(Int32)
            uint8_t* _ext_flag_2 = (uint8_t*) buffer++;  // Read ext flag from ros->map.layer_type[0].
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m000014\033[0m| Reading ext flag from ros->map.layer_type[0].: " << int(*_ext_flag_2);
            }
            
            uint8_t* _tmp_14 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_14;
            __aux64__ += 0;
            ros->map.layer_type[0].value = __aux64__;
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'map.layer_type[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                logger->warning() << "Error: Value in 'map.layer_type[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                return false;
            }
            
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m000015\033[0m| " << tools::getTypeName(ros->map.layer_type[0].value) << 
                             " map.layer_type[0].value: " << static_cast<int>(ros->map.layer_type[0].value);
            }
        }
        
        if(ros->map.layer_id.size() != 0) {
            // Field name: layer_id
            // Integer
            // UINT8  min(0) max(100) span(101) datatype(UInt8)
            uint8_t* _tmp_15 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_15;
            ros->map.layer_id[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m000016\033[0m| " << tools::getTypeName(ros->map.layer_id[0].value) << 
                             " map.layer_id[0].value: " << static_cast<int>(ros->map.layer_id[0].value);
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'map.layer_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 100) {
                logger->warning() << "Error: Value in 'map.layer_id[0].value' " << (__aux64__) << " exceeds max allowable (100); message dropped.";
                return false;
            }
        }
        
        if(ros->map.intersections.size() != 0) {
            // Field name: intersections
            // SequenceOf
            // Data Type UInt8
            // SEQUENCE_OF  min(1) max(32) span(32)
            int16_t* _tmp_16 = (int16_t*)buffer;
            buffer += 2;
            __aux64__ = *_tmp_16;
            __aux64__ += 1;     // +min
            
            int _if__tmp_16 = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m000017\033[0m| SequenceOf ros->map.intersections[0]. size: " << int(*_tmp_16);
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                logger->warning() << "Error: Value in 'map.intersections[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 32) {
                logger->warning() << "Error: Value in 'map.intersections[0].value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
                return false;
            }
            
            
            for(int a = 0; a < _if__tmp_16; a++) {
                dsrc_v2_dsrc_msgs::msg::IntersectionGeometry seqof_a;  // SEQUENCE
                ros->map.intersections[0].elements.push_back(seqof_a);
            
                    // IntersectionGeometry  SEQUENCE
                        //  name                DescriptiveName                 OPTIONAL  
                        //  id                  IntersectionReferenceID           
                        //  revision            MsgCount                          
                        //  refPoint            Position3D                        
                        //  laneWidth           LaneWidth                       OPTIONAL  
                        //  speedLimits         SpeedLimitList                  OPTIONAL  
                        //  laneSet             LaneList                          
                        //  preemptPriorityData PreemptPriorityList             OPTIONAL  
                        //  regional            IntersectionGeometry_regional   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_3 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000018\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].: " << int(*_ext_flag_3);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_17;
                        ros->map.intersections[0].elements[a].name.push_back(_tmp_17);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000019\033[0m| ros->map.intersections[0].elements[a].name " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::LaneWidth _tmp_18;
                        ros->map.intersections[0].elements[a].lane_width.push_back(_tmp_18);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000020\033[0m| ros->map.intersections[0].elements[a].lane_width " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_19;
                        ros->map.intersections[0].elements[a].speed_limits.push_back(_tmp_19);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000021\033[0m| ros->map.intersections[0].elements[a].speed_limits " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::PreemptPriorityList _tmp_20;
                        ros->map.intersections[0].elements[a].preempt_priority_data.push_back(_tmp_20);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000022\033[0m| ros->map.intersections[0].elements[a].preempt_priority_data " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::IntersectionGeometryRegional _tmp_21;
                        ros->map.intersections[0].elements[a].regional.push_back(_tmp_21);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000023\033[0m| ros->map.intersections[0].elements[a].regional " << tools::green("present");
                    }
                    
                    if(ros->map.intersections[0].elements[a].name.size() != 0) {
                        // Field name: name
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_22 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_22 + 1;
                        buffer += 1;
                        
                        int _if__tmp_22 = __aux64__;
                        for(int b = 0; b < _if__tmp_22; b++) {  // DescriptiveName
                            char* __tmp__ = (char*)buffer++;
                            ros->map.intersections[0].elements[a].name[0].value += *__tmp__;
                        }
                    }
                    
                    // Field name: id
                        // IntersectionReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         IntersectionID      
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_23;
                            ros->map.intersections[0].elements[a].id.region.push_back(_tmp_23);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000024\033[0m| ros->map.intersections[0].elements[a].id.region " << tools::green("present");
                        }
                        
                        if(ros->map.intersections[0].elements[a].id.region.size() != 0) {
                            // Field name: region
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_24 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_24;
                            ros->map.intersections[0].elements[a].id.region[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000025\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].id.region[0].value) << 
                                             " map.intersections[0].elements[a].id.region[0].value: " << ros->map.intersections[0].elements[a].id.region[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: id
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_25 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_25;
                        ros->map.intersections[0].elements[a].id.id.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000026\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].id.id.value) << 
                                         " map.intersections[0].elements[a].id.id.value: " << ros->map.intersections[0].elements[a].id.id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    
                    // Field name: revision
                    // Integer
                    // UINT8  min(0) max(127) span(128) datatype(UInt8)
                    uint8_t* _tmp_26 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_26;
                    ros->map.intersections[0].elements[a].revision.value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000027\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].revision.value) << 
                                     " map.intersections[0].elements[a].revision.value: " << static_cast<int>(ros->map.intersections[0].elements[a].revision.value);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].revision.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].revision.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                        return false;
                    }
                    
                    // Field name: ref_point
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].ref_point.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000028\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].ref_point.: " << int(*_ext_flag_4);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Elevation _tmp_27;
                            ros->map.intersections[0].elements[a].ref_point.elevation.push_back(_tmp_27);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000029\033[0m| ros->map.intersections[0].elements[a].ref_point.elevation " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Position3DRegional _tmp_28;
                            ros->map.intersections[0].elements[a].ref_point.regional.push_back(_tmp_28);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000030\033[0m| ros->map.intersections[0].elements[a].ref_point.regional " << tools::green("present");
                        }
                        
                        // Field name: lat
                        // Real
                        // Double
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_29 = (uint32_t*) buffer; buffer += 4;
                        ros->map.intersections[0].elements[a].ref_point.lat.value = *_tmp_29;
                        ros->map.intersections[0].elements[a].ref_point.lat.value += -900000000;
                        __aux64__ = ros->map.intersections[0].elements[a].ref_point.lat.value;
                        ros->map.intersections[0].elements[a].ref_point.lat.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000031\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].ref_point.lat.value) << " map.intersections[0].elements[a].ref_point.lat: " <<
                                         ros->map.intersections[0].elements[a].ref_point.lat.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longint
                        // Real
                        // Double
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_30 = (uint32_t*) buffer; buffer += 4;
                        ros->map.intersections[0].elements[a].ref_point.longint.value = *_tmp_30;
                        ros->map.intersections[0].elements[a].ref_point.longint.value += -1800000000;
                        __aux64__ = ros->map.intersections[0].elements[a].ref_point.longint.value;
                        ros->map.intersections[0].elements[a].ref_point.longint.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.longint.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.longint.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000032\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].ref_point.longint.value) << " map.intersections[0].elements[a].ref_point.longint: " <<
                                         ros->map.intersections[0].elements[a].ref_point.longint.value << " (" << __aux64__ << ")";
                        }
                        
                        if(ros->map.intersections[0].elements[a].ref_point.elevation.size() != 0) {
                            // Field name: elevation
                            // Real
                            // Float
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_31 = (uint16_t*) buffer; buffer += 2;
                            ros->map.intersections[0].elements[a].ref_point.elevation[0].value = *_tmp_31;
                            ros->map.intersections[0].elements[a].ref_point.elevation[0].value += -4096;
                            __aux64__ = ros->map.intersections[0].elements[a].ref_point.elevation[0].value;
                            ros->map.intersections[0].elements[a].ref_point.elevation[0].value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.elevation[0].value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.elevation[0].value' " << (__aux64__) << " exceeds max allowable (61439); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000033\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].ref_point.elevation[0].value) << " map.intersections[0].elements[a].ref_point.elevation[0]: " <<
                                             ros->map.intersections[0].elements[a].ref_point.elevation[0].value << " (" << __aux64__ << ")";
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_4) { // from ros->map.intersections[0].elements[a].ref_point. 
                            uint8_t* _tmp_32 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_1[*_tmp_32];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000034\033[0m| Reading number of exts from ros->map.intersections[0].elements[a].ref_point.: " << static_cast<unsigned int>(*_tmp_32);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_32; i++)
                                _array_1[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_32; i++) {
                                uint16_t* _tmp_33 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_33; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->map.intersections[0].elements[a].lane_width.size() != 0) {
                        // Field name: lane_width
                        // Integer
                        // UINT16  min(0) max(32767) span(32768) datatype(UInt16)
                        uint16_t* _tmp_34 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_34;
                        ros->map.intersections[0].elements[a].lane_width[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000035\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_width[0].value) << 
                                         " map.intersections[0].elements[a].lane_width[0].value: " << ros->map.intersections[0].elements[a].lane_width[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_width[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_width[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->map.intersections[0].elements[a].speed_limits.size() != 0) {
                        // Field name: speed_limits
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9)
                        int16_t* _tmp_35 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_35;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_35 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000036\033[0m| SequenceOf ros->map.intersections[0].elements[a].speed_limits[0]. size: " << int(*_tmp_35);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 9) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                            return false;
                        }
                        
                        
                        for(int c = 0; c < _if__tmp_35; c++) {
                            dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_c;  // SEQUENCE
                            ros->map.intersections[0].elements[a].speed_limits[0].elements.push_back(seqof_c);
                        
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                
                                // Field name: type
                                // Enumerated
                                // INT32  min(0) max(12) span(13) datatype(Int32)
                                uint8_t* _ext_flag_8 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000037\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.: " << int(*_ext_flag_8);
                                }
                                
                                uint8_t* _tmp_36 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_36;
                                __aux64__ += 0;
                                ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000038\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.value) << 
                                                 " map.intersections[0].elements[a].speed_limits[0].elements[c].type.value: " << static_cast<int>(ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.value);
                                }
                                
                                // Field name: speed
                                // Integer
                                // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                uint16_t* _tmp_37 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_37;
                                ros->map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000039\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value) << 
                                                 " map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value: " << ros->map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                    return false;
                                }
                        }
                    }
                    
                    // Field name: lane_set
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255)
                    int16_t* _tmp_38 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_38;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_38 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000040\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set. size: " << int(*_tmp_38);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                        return false;
                    }
                    
                    
                    for(int d = 0; d < _if__tmp_38; d++) {
                        dsrc_v2_dsrc_msgs::msg::GenericLane seqof_d;  // SEQUENCE
                        ros->map.intersections[0].elements[a].lane_set.elements.push_back(seqof_d);
                    
                            // GenericLane  SEQUENCE
                                //  laneID          LaneID                   
                                //  name            DescriptiveName        OPTIONAL  
                                //  ingressApproach ApproachID             OPTIONAL  
                                //  egressApproach  ApproachID             OPTIONAL  
                                //  laneAttributes  LaneAttributes           
                                //  maneuvers       AllowedManeuvers       OPTIONAL  
                                //  nodeList        NodeListXY               
                                //  connectsTo      ConnectsToList         OPTIONAL  
                                //  overlays        OverlayLaneList        OPTIONAL  
                                //  regional        GenericLane_regional   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_9 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000041\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].: " << int(*_ext_flag_9);
                            }
                            
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_39;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].name.push_back(_tmp_39);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000042\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].name " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_40;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach.push_back(_tmp_40);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000043\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_41;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach.push_back(_tmp_41);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000044\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_42;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers.push_back(_tmp_42);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000045\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ConnectsToList _tmp_43;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to.push_back(_tmp_43);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000046\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::OverlayLaneList _tmp_44;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].overlays.push_back(_tmp_44);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000047\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].overlays " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::GenericLaneRegional _tmp_45;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].regional.push_back(_tmp_45);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000048\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].regional " << tools::green("present");
                            }
                            
                            // Field name: lane_id
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_46 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_46;
                            ros->map.intersections[0].elements[a].lane_set.elements[d].lane_id.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000049\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_id.value) << 
                                             " map.intersections[0].elements[a].lane_set.elements[d].lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_id.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].name.size() != 0) {
                                // Field name: name
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_47 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_47 + 1;
                                buffer += 1;
                                
                                int _if__tmp_47 = __aux64__;
                                for(int e = 0; e < _if__tmp_47; e++) {  // DescriptiveName
                                    char* __tmp__ = (char*)buffer++;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value += *__tmp__;
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach.size() != 0) {
                                // Field name: ingress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_48 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_48;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000050\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value) << 
                                                 " map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach.size() != 0) {
                                // Field name: egress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_49 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_49;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000051\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value) << 
                                                 " map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: lane_attributes
                                // LaneAttributes  SEQUENCE
                                    //  directionalUse LaneDirection          
                                    //  sharedWith     LaneSharing            
                                    //  laneType       LaneTypeAttributes     
                                    //  regional       RegionalExtension    OPTIONAL  
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_50;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.regional.push_back(_tmp_50);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000052\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.regional " << tools::green("present");
                                }
                                
                                // Field name: directional_use
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                uint8_t* _tmp_51 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_51 + 2;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000053\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.value: " << __aux64__;
                                
                                int _if__tmp_51 = __aux64__;
                                for(int f = 0; f < _if__tmp_51; f++) {
                                    uint8_t __c__;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values[f] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                    return false;
                                }
                                
                                // Field name: shared_with
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                uint8_t* _tmp_52 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_52 + 10;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000054\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.value: " << __aux64__;
                                
                                int _if__tmp_52 = __aux64__;
                                for(int g = 0; g < _if__tmp_52; g++) {
                                    uint8_t __c__;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values[g] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 10) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.value' " << (__aux64__) << " is less than allowable (10); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.value' " << (__aux64__) << " exceeds max allowable (10); message dropped.";
                                    return false;
                                }
                                
                                // Field name: lane_type
                                // Choice
                                uint8_t* _ext_flag_10 = (uint8_t*)buffer++; // ext flag
                                
                                   // #0  vehicle   LaneAttributes_Vehicle   
                                   // #1  crosswalk   LaneAttributes_Crosswalk   
                                   // #2  bikeLane   LaneAttributes_Bike   
                                   // #3  sidewalk   LaneAttributes_Sidewalk   
                                   // #4  median   LaneAttributes_Barrier   
                                   // #5  striping   LaneAttributes_Striping   
                                   // #6  trackedVehicle   LaneAttributes_TrackedVehicle   
                                   // #7  parking   LaneAttributes_Parking   
                                uint8_t _choice_1 = *(buffer++);
                                
                                if(*_ext_flag_10)
                                    _choice_1 += 7 + 1; // Ext addition
                                
                                if(_choice_1 == 0) {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesVehicle _tmp_53;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle.push_back(_tmp_53);
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    uint8_t* _ext_flag_11 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000055\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].: " << int(*_ext_flag_11);
                                    }
                                    
                                    uint8_t* _tmp_54 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_54 + 8;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000056\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_54 = __aux64__;
                                    for(int h = 0; h < _if__tmp_54; h++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values[h] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_1 == 1)  // CHOICE LaneTypeAttributes  fieldName(crosswalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesCrosswalk _tmp_55;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk.push_back(_tmp_55);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_56 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_56 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000057\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_56 = __aux64__;
                                    for(int i = 0; i < _if__tmp_56; i++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values[i] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_1 == 2)  // CHOICE LaneTypeAttributes  fieldName(bike_lane)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBike _tmp_57;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane.push_back(_tmp_57);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_58 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_58 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000058\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].value: " << __aux64__;
                                    
                                    int _if__tmp_58 = __aux64__;
                                    for(int j = 0; j < _if__tmp_58; j++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values[j] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_1 == 3)  // CHOICE LaneTypeAttributes  fieldName(sidewalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesSidewalk _tmp_59;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk.push_back(_tmp_59);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_60 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_60 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000059\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_60 = __aux64__;
                                    for(int k = 0; k < _if__tmp_60; k++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values[k] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_1 == 4)  // CHOICE LaneTypeAttributes  fieldName(median)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBarrier _tmp_61;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median.push_back(_tmp_61);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_62 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_62 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000060\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].value: " << __aux64__;
                                    
                                    int _if__tmp_62 = __aux64__;
                                    for(int l = 0; l < _if__tmp_62; l++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values[l] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_1 == 5)  // CHOICE LaneTypeAttributes  fieldName(striping)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesStriping _tmp_63;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping.push_back(_tmp_63);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_64 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_64 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000061\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].value: " << __aux64__;
                                    
                                    int _if__tmp_64 = __aux64__;
                                    for(int m = 0; m < _if__tmp_64; m++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values[m] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_1 == 6)  // CHOICE LaneTypeAttributes  fieldName(tracked_vehicle)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesTrackedVehicle _tmp_65;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle.push_back(_tmp_65);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_66 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_66 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000062\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_66 = __aux64__;
                                    for(int n = 0; n < _if__tmp_66; n++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values[n] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_1 == 7)  // CHOICE LaneTypeAttributes  fieldName(parking)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesParking _tmp_67;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking.push_back(_tmp_67);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_68 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_68 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000063\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].value: " << __aux64__;
                                    
                                    int _if__tmp_68 = __aux64__;
                                    for(int o = 0; o < _if__tmp_68; o++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values[o] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else
                                {
                                    uint16_t* _tmp_69 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2 + int(*_tmp_69);            // Ignoring opentype data
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers.size() != 0) {
                                // Field name: maneuvers
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                uint8_t* _tmp_70 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_70 + 12;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000064\033[0m| map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].value: " << __aux64__;
                                
                                int _if__tmp_70 = __aux64__;
                                for(int p = 0; p < _if__tmp_70; p++) {
                                    uint8_t __c__;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values[p] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: node_list
                            // Choice
                            uint8_t* _ext_flag_12 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  nodes   NodeSetXY   
                               // #1  computed   ComputedLane   
                            uint8_t _choice_2 = *(buffer++);
                            
                            if(*_ext_flag_12)
                                _choice_2 += 1 + 1; // Ext addition
                            
                            if(_choice_2 == 0) {
                                dsrc_v2_dsrc_msgs::msg::NodeSetXY _tmp_71;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes.push_back(_tmp_71);
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62)
                                int16_t* _tmp_72 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_72;
                                __aux64__ += 2;     // +min
                                
                                int _if__tmp_72 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000065\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0]. size: " << int(*_tmp_72);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 63) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].value' " << (__aux64__) << " exceeds max allowable (63); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int q = 0; q < _if__tmp_72; q++) {
                                    dsrc_v2_dsrc_msgs::msg::NodeXY seqof_q;  // SEQUENCE
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements.push_back(seqof_q);
                                
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_13 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000066\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].: " << int(*_ext_flag_13);
                                        }
                                        
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXY _tmp_73;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes.push_back(_tmp_73);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000067\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes " << tools::green("present");
                                        }
                                        
                                        // Field name: delta
                                        // Choice
                                           // #0  node_XY1   Node_XY_20b   
                                           // #1  node_XY2   Node_XY_22b   
                                           // #2  node_XY3   Node_XY_24b   
                                           // #3  node_XY4   Node_XY_26b   
                                           // #4  node_XY5   Node_XY_28b   
                                           // #5  node_XY6   Node_XY_32b   
                                           // #6  node_LatLon   Node_LLmD_64b   
                                           // #7  regional   RegionalExtension   
                                        uint8_t _choice_3 = *(buffer++);
                                        
                                        if(_choice_3 == 0) {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY20b _tmp_74;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1.push_back(_tmp_74);
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_75 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value = *_tmp_75;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value += -512;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000068\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_76 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value = *_tmp_76;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value += -512;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000069\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_3 == 1)  // CHOICE NodeOffsetPointXY  fieldName(node_xy2)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY22b _tmp_77;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2.push_back(_tmp_77);
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_78 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value = *_tmp_78;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value += -1024;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000070\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_79 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value = *_tmp_79;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value += -1024;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000071\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_3 == 2)  // CHOICE NodeOffsetPointXY  fieldName(node_xy3)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY24b _tmp_80;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3.push_back(_tmp_80);
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_81 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value = *_tmp_81;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value += -2048;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000072\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_82 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value = *_tmp_82;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value += -2048;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000073\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_3 == 3)  // CHOICE NodeOffsetPointXY  fieldName(node_xy4)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY26b _tmp_83;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4.push_back(_tmp_83);
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_84 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value = *_tmp_84;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value += -4096;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000074\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_85 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value = *_tmp_85;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value += -4096;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000075\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_3 == 4)  // CHOICE NodeOffsetPointXY  fieldName(node_xy5)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY28b _tmp_86;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5.push_back(_tmp_86);
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_87 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value = *_tmp_87;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value += -8192;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000076\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_88 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value = *_tmp_88;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value += -8192;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000077\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_3 == 5)  // CHOICE NodeOffsetPointXY  fieldName(node_xy6)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY32b _tmp_89;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6.push_back(_tmp_89);
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_90 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value = *_tmp_90;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value += -32768;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000078\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_91 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value = *_tmp_91;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value += -32768;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000079\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_3 == 6)  // CHOICE NodeOffsetPointXY  fieldName(node_lat_lon)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeLLmD64b _tmp_92;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon.push_back(_tmp_92);
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                
                                                // Field name: lon
                                                // Real
                                                // Double
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_93 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value = *_tmp_93;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value += -1800000000;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000080\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: lat
                                                // Real
                                                // Double
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_94 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value = *_tmp_94;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value += -900000000;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000081\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat: " <<
                                                                 ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(_choice_3) << ") selected in CHOICE NodeOffsetPointXY in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta'; message dropped.";
                                            return false;
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes.size() != 0) {
                                            // Field name: attributes
                                                // NodeAttributeSetXY  SEQUENCE
                                                    //  localNode  NodeAttributeXYList           OPTIONAL  
                                                    //  disabled   SegmentAttributeXYList        OPTIONAL  
                                                    //  enabled    SegmentAttributeXYList        OPTIONAL  
                                                    //  data       LaneDataAttributeList         OPTIONAL  
                                                    //  dWidth     Offset_B10                    OPTIONAL  
                                                    //  dElevation Offset_B10                    OPTIONAL  
                                                    //  regional   NodeAttributeSetXY_regional   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_29 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000082\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].: " << int(*_ext_flag_29);
                                                }
                                                
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeXYList _tmp_95;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node.push_back(_tmp_95);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000083\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_96;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled.push_back(_tmp_96);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000084\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_97;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled.push_back(_tmp_97);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000085\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::LaneDataAttributeList _tmp_98;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data.push_back(_tmp_98);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000086\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_99;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width.push_back(_tmp_99);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000087\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_100;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation.push_back(_tmp_100);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000088\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXYRegional _tmp_101;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].regional.push_back(_tmp_101);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000089\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].regional " << tools::green("present");
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node.size() != 0) {
                                                    // Field name: local_node
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_102 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_102;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_102 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000090\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0]. size: " << int(*_tmp_102);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int r = 0; r < _if__tmp_102; r++) {
                                                        dsrc_v2_dsrc_msgs::msg::NodeAttributeXY seqof_r;  // ENUMERATED
                                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements.push_back(seqof_r);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) datatype(Int32)
                                                        uint8_t* _ext_flag_30 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000091\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].: " << int(*_ext_flag_30);
                                                        }
                                                        
                                                        uint8_t* _tmp_103 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_103;
                                                        __aux64__ += 0;
                                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value' " << (__aux64__) << " exceeds max allowable (11); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000092\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value) << 
                                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled.size() != 0) {
                                                    // Field name: disabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_104 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_104;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_104 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000093\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0]. size: " << int(*_tmp_104);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int s = 0; s < _if__tmp_104; s++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_s;  // ENUMERATED
                                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements.push_back(seqof_s);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_31 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000094\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].: " << int(*_ext_flag_31);
                                                        }
                                                        
                                                        uint8_t* _tmp_105 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_105;
                                                        __aux64__ += 0;
                                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000095\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value) << 
                                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled.size() != 0) {
                                                    // Field name: enabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_106 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_106;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_106 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000096\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0]. size: " << int(*_tmp_106);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int t = 0; t < _if__tmp_106; t++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_t;  // ENUMERATED
                                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements.push_back(seqof_t);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_32 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000097\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].: " << int(*_ext_flag_32);
                                                        }
                                                        
                                                        uint8_t* _tmp_107 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_107;
                                                        __aux64__ += 0;
                                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000098\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value) << 
                                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data.size() != 0) {
                                                    // Field name: data
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_108 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_108;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_108 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000099\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0]. size: " << int(*_tmp_108);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int u = 0; u < _if__tmp_108; u++) {
                                                        dsrc_v2_dsrc_msgs::msg::LaneDataAttribute seqof_u;  // CHOICE
                                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements.push_back(seqof_u);
                                                    
                                                        // Choice
                                                        uint8_t* _ext_flag_33 = (uint8_t*)buffer++; // ext flag
                                                        
                                                           // #0  pathEndPointAngle   DeltaAngle   
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle   
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle   
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle   
                                                           // #4  laneAngle   MergeDivergeNodeAngle   
                                                           // #5  speedLimits   SpeedLimitList   
                                                           // #6  regional   LaneDataAttribute_regional   
                                                        uint8_t _choice_4 = *(buffer++);
                                                        
                                                        if(*_ext_flag_33)
                                                            _choice_4 += 6 + 1; // Ext addition
                                                        
                                                        if(_choice_4 == 0) {
                                                            dsrc_v2_dsrc_msgs::msg::DeltaAngle _tmp_109;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle.push_back(_tmp_109);
                                                        
                                                            // Integer
                                                            // INT16  min(-150) max(150) span(301) datatype(Int16)
                                                            uint16_t* _tmp_110 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_110;
                                                            __aux64__ += -150;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000100\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value' " << (__aux64__) << " is less than allowable (-150); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value' " << (__aux64__) << " exceeds max allowable (150); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_4 == 1)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_center)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_111;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center.push_back(_tmp_111);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_112 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_112;
                                                            __aux64__ += -128;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000101\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_4 == 2)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_left)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_113;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left.push_back(_tmp_113);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_114 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_114;
                                                            __aux64__ += -128;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000102\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_4 == 3)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_right)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_115;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right.push_back(_tmp_115);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_116 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_116;
                                                            __aux64__ += -128;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000103\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_4 == 4)  // CHOICE LaneDataAttribute  fieldName(lane_angle)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::MergeDivergeNodeAngle _tmp_117;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle.push_back(_tmp_117);
                                                        
                                                            // Integer
                                                            // INT16  min(-180) max(180) span(361) datatype(Int16)
                                                            uint16_t* _tmp_118 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_118;
                                                            __aux64__ += -180;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000104\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value' " << (__aux64__) << " is less than allowable (-180); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value' " << (__aux64__) << " exceeds max allowable (180); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_4 == 5)  // CHOICE LaneDataAttribute  fieldName(speed_limits)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_119;
                                                            ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits.push_back(_tmp_119);
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9)
                                                            int16_t* _tmp_120 = (int16_t*)buffer;
                                                            buffer += 2;
                                                            __aux64__ = *_tmp_120;
                                                            __aux64__ += 1;     // +min
                                                            
                                                            int _if__tmp_120 = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000105\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0]. size: " << int(*_tmp_120);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 9) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                                                                return false;
                                                            }
                                                            
                                                            
                                                            for(int v = 0; v < _if__tmp_120; v++) {
                                                                dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_v;  // SEQUENCE
                                                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements.push_back(seqof_v);
                                                            
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    
                                                                    // Field name: type
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) datatype(Int32)
                                                                    uint8_t* _ext_flag_34 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000106\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.: " << int(*_ext_flag_34);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_121 = (uint8_t*) buffer++;
                                                                    __aux64__ = *_tmp_121;
                                                                    __aux64__ += 0;
                                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value = __aux64__;
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                                        return false;
                                                                    }
                                                                    
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000107\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value) << 
                                                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value);
                                                                    }
                                                                    
                                                                    // Field name: speed
                                                                    // Integer
                                                                    // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                                                    uint16_t* _tmp_122 = (uint16_t*) buffer; buffer += 2;
                                                                    __aux64__ = *_tmp_122;
                                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value = __aux64__;
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000108\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value) << 
                                                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value;
                                                                    }
                                                                    
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                                        return false;
                                                                    }
                                                            }
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            uint16_t* _tmp_123 = (uint16_t*)buffer;  // OpenType length
                                                            buffer += 2 + int(*_tmp_123);            // Ignoring opentype data
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width.size() != 0) {
                                                    // Field name: d_width
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_124 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value = *_tmp_124;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value += -512;
                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000109\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0]: " <<
                                                                     ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation.size() != 0) {
                                                    // Field name: d_elevation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_125 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value = *_tmp_125;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value += -512;
                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000110\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value) << " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0]: " <<
                                                                     ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_29) { // from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0]. 
                                                    uint8_t* _tmp_126 = (uint8_t*) buffer++;  // number of extensions
                                                    bool _array_2[*_tmp_126];
                                                    
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000111\033[0m| Reading number of exts from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].: " << static_cast<unsigned int>(*_tmp_126);
                                                    
                                                    // Extensions bytemap
                                                    for(int i = 0; i < *_tmp_126; i++)
                                                        _array_2[i] = (*buffer++) != 0;
                                                    
                                                    // Discarding unknown OpenType containers
                                                    for(int i = 0; i < *_tmp_126; i++) {
                                                        uint16_t* _tmp_127 = (uint16_t*)buffer;  // OpenType length
                                                        buffer += 2;
                                                    
                                                        if(debug) {
                                                        }
                                                    
                                                        for(int i = 0; i < *_tmp_127; i++)
                                                            buffer++;
                                                    }
                                                    
                                                }
                                        }
                                        if(*_ext_flag_13) { // from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q]. 
                                            uint8_t* _tmp_128 = (uint8_t*) buffer++;  // number of extensions
                                            bool _array_3[*_tmp_128];
                                            
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000112\033[0m| Reading number of exts from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].: " << static_cast<unsigned int>(*_tmp_128);
                                            
                                            // Extensions bytemap
                                            for(int i = 0; i < *_tmp_128; i++)
                                                _array_3[i] = (*buffer++) != 0;
                                            
                                            // Discarding unknown OpenType containers
                                            for(int i = 0; i < *_tmp_128; i++) {
                                                uint16_t* _tmp_129 = (uint16_t*)buffer;  // OpenType length
                                                buffer += 2;
                                            
                                                if(debug) {
                                                }
                                            
                                                for(int i = 0; i < *_tmp_129; i++)
                                                    buffer++;
                                            }
                                            
                                        }
                                }
                            }
                            else if(_choice_2 == 1)  // CHOICE NodeListXY  fieldName(computed)
                            {
                                dsrc_v2_dsrc_msgs::msg::ComputedLane _tmp_130;
                                ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed.push_back(_tmp_130);
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_37 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000113\033[0m| Reading ext flag from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].: " << int(*_ext_flag_37);
                                    }
                                    
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::Angle _tmp_131;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy.push_back(_tmp_131);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000114\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_132;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis.push_back(_tmp_132);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000115\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_133;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis.push_back(_tmp_133);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000116\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ComputedLaneRegional _tmp_134;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].regional.push_back(_tmp_134);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000117\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].regional " << tools::green("present");
                                    }
                                    
                                    // Field name: reference_lane_id
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_135 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_135;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000118\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_xaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_5 = *(buffer++);
                                    
                                    if(_choice_5 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_136;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small.push_back(_tmp_136);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_137 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_137;
                                        __aux64__ += -2047;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000119\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_5 == 1)  // CHOICE ComputedLane_offsetXaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_138;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large.push_back(_tmp_138);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_139 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_139;
                                        __aux64__ += -32767;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000120\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_5) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_yaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_6 = *(buffer++);
                                    
                                    if(_choice_6 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_140;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small.push_back(_tmp_140);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_141 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_141;
                                        __aux64__ += -2047;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000121\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_6 == 1)  // CHOICE ComputedLane_offsetYaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_142;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large.push_back(_tmp_142);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_143 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_143;
                                        __aux64__ += -32767;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000122\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_6) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field name: rotate_xy
                                        // Integer
                                        // UINT16  min(0) max(28800) span(28801) datatype(UInt16)
                                        uint16_t* _tmp_144 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_144;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000123\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " exceeds max allowable (28800); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field name: scale_xaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_145 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_145;
                                        __aux64__ += -2048;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000124\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field name: scale_yaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_146 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_146;
                                        __aux64__ += -2048;
                                        ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000125\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_37) { // from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0]. 
                                        uint8_t* _tmp_147 = (uint8_t*) buffer++;  // number of extensions
                                        bool _array_4[*_tmp_147];
                                        
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000126\033[0m| Reading number of exts from ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].: " << static_cast<unsigned int>(*_tmp_147);
                                        
                                        // Extensions bytemap
                                        for(int i = 0; i < *_tmp_147; i++)
                                            _array_4[i] = (*buffer++) != 0;
                                        
                                        // Discarding unknown OpenType containers
                                        for(int i = 0; i < *_tmp_147; i++) {
                                            uint16_t* _tmp_148 = (uint16_t*)buffer;  // OpenType length
                                            buffer += 2;
                                        
                                            if(debug) {
                                            }
                                        
                                            for(int i = 0; i < *_tmp_148; i++)
                                                buffer++;
                                        }
                                        
                                    }
                            }
                            else
                            {
                                uint16_t* _tmp_149 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_149);            // Ignoring opentype data
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to.size() != 0) {
                                // Field name: connects_to
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                int16_t* _tmp_150 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_150;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_150 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000127\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0]. size: " << int(*_tmp_150);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int w = 0; w < _if__tmp_150; w++) {
                                    dsrc_v2_dsrc_msgs::msg::Connection seqof_w;  // SEQUENCE
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements.push_back(seqof_w);
                                
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::IntersectionReferenceID _tmp_151;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection.push_back(_tmp_151);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000128\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::SignalGroupID _tmp_152;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group.push_back(_tmp_152);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000129\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RestrictionClassID _tmp_153;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class.push_back(_tmp_153);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000130\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_154;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id.push_back(_tmp_154);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000131\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id " << tools::green("present");
                                        }
                                        
                                        // Field name: connecting_lane
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_155;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver.push_back(_tmp_155);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000132\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver " << tools::green("present");
                                            }
                                            
                                            // Field name: lane
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_156 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_156;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000133\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                            
                                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver.size() != 0) {
                                                // Field name: maneuver
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                uint8_t* _tmp_157 = (uint8_t*)buffer;
                                                __aux64__ = *_tmp_157 + 12;
                                                buffer += 1;
                                                
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000134\033[0m| map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].value: " << __aux64__;
                                                
                                                int _if__tmp_157 = __aux64__;
                                                for(int x = 0; x < _if__tmp_157; x++) {
                                                    uint8_t __c__;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values.push_back(__c__);
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values[x] = (*__b__ == 1);
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                    return false;
                                                }
                                            }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection.size() != 0) {
                                            // Field name: remote_intersection
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_158;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region.push_back(_tmp_158);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000135\033[0m| ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region " << tools::green("present");
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region.size() != 0) {
                                                    // Field name: region
                                                    // Integer
                                                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                    uint16_t* _tmp_159 = (uint16_t*) buffer; buffer += 2;
                                                    __aux64__ = *_tmp_159;
                                                    ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000136\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value) << 
                                                                     " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                        return false;
                                                    }
                                                }
                                                
                                                // Field name: id
                                                // Integer
                                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                uint16_t* _tmp_160 = (uint16_t*) buffer; buffer += 2;
                                                __aux64__ = *_tmp_160;
                                                ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000137\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value;
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                    return false;
                                                }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group.size() != 0) {
                                            // Field name: signal_group
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_161 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_161;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000138\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class.size() != 0) {
                                            // Field name: user_class
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_162 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_162;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000139\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id.size() != 0) {
                                            // Field name: connection_id
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_163 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_163;
                                            ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000140\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].overlays.size() != 0) {
                                // Field name: overlays
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5)
                                int16_t* _tmp_164 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_164;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_164 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000141\033[0m| SequenceOf ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0]. size: " << int(*_tmp_164);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].overlays[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 5) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].overlays[0].value' " << (__aux64__) << " exceeds max allowable (5); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int y = 0; y < _if__tmp_164; y++) {
                                    dsrc_v2_dsrc_msgs::msg::LaneID seqof_y;  // INTEGER
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements.push_back(seqof_y);
                                
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_165 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_165;
                                    ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000142\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value) << 
                                                     " map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_9) { // from ros->map.intersections[0].elements[a].lane_set.elements[d]. 
                                uint8_t* _tmp_166 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_5[*_tmp_166];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000143\033[0m| Reading number of exts from ros->map.intersections[0].elements[a].lane_set.elements[d].: " << static_cast<unsigned int>(*_tmp_166);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_166; i++)
                                    _array_5[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_166; i++) {
                                    uint16_t* _tmp_167 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_167; i++)
                                        buffer++;
                                }
                                
                            }
                    }
                    
                    // Field name: preempt_priority_data  // avoided
                    // Field name: regional  // avoided
                    if(*_ext_flag_3) { // from ros->map.intersections[0].elements[a]. 
                        uint8_t* _tmp_168 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_6[*_tmp_168];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000144\033[0m| Reading number of exts from ros->map.intersections[0].elements[a].: " << static_cast<unsigned int>(*_tmp_168);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_168; i++)
                            _array_6[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_168; i++) {
                            uint16_t* _tmp_169 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_169; i++)
                                buffer++;
                        }
                        
                    }
            }
        }
        
        if(ros->map.road_segments.size() != 0) {
            // Field name: road_segments
            // SequenceOf
            // Data Type UInt8
            // SEQUENCE_OF  min(1) max(32) span(32)
            int16_t* _tmp_170 = (int16_t*)buffer;
            buffer += 2;
            __aux64__ = *_tmp_170;
            __aux64__ += 1;     // +min
            
            int _if__tmp_170 = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m000145\033[0m| SequenceOf ros->map.road_segments[0]. size: " << int(*_tmp_170);
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                logger->warning() << "Error: Value in 'map.road_segments[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 32) {
                logger->warning() << "Error: Value in 'map.road_segments[0].value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
                return false;
            }
            
            
            for(int z = 0; z < _if__tmp_170; z++) {
                dsrc_v2_dsrc_msgs::msg::RoadSegment seqof_z;  // SEQUENCE
                ros->map.road_segments[0].elements.push_back(seqof_z);
            
                    // RoadSegment  SEQUENCE
                        //  name        DescriptiveName          OPTIONAL  
                        //  id          RoadSegmentReferenceID     
                        //  revision    MsgCount                   
                        //  refPoint    Position3D                 
                        //  laneWidth   LaneWidth                OPTIONAL  
                        //  speedLimits SpeedLimitList           OPTIONAL  
                        //  roadLaneSet RoadLaneSetList            
                        //  regional    RoadSegment_regional     OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_40 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000146\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].: " << int(*_ext_flag_40);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_171;
                        ros->map.road_segments[0].elements[z].name.push_back(_tmp_171);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000147\033[0m| ros->map.road_segments[0].elements[z].name " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::LaneWidth _tmp_172;
                        ros->map.road_segments[0].elements[z].lane_width.push_back(_tmp_172);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000148\033[0m| ros->map.road_segments[0].elements[z].lane_width " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_173;
                        ros->map.road_segments[0].elements[z].speed_limits.push_back(_tmp_173);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000149\033[0m| ros->map.road_segments[0].elements[z].speed_limits " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RoadSegmentRegional _tmp_174;
                        ros->map.road_segments[0].elements[z].regional.push_back(_tmp_174);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000150\033[0m| ros->map.road_segments[0].elements[z].regional " << tools::green("present");
                    }
                    
                    if(ros->map.road_segments[0].elements[z].name.size() != 0) {
                        // Field name: name
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_175 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_175 + 1;
                        buffer += 1;
                        
                        int _if__tmp_175 = __aux64__;
                        for(int a = 0; a < _if__tmp_175; a++) {  // DescriptiveName
                            char* __tmp__ = (char*)buffer++;
                            ros->map.road_segments[0].elements[z].name[0].value += *__tmp__;
                        }
                    }
                    
                    // Field name: id
                        // RoadSegmentReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         RoadSegmentID       
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_176;
                            ros->map.road_segments[0].elements[z].id.region.push_back(_tmp_176);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000151\033[0m| ros->map.road_segments[0].elements[z].id.region " << tools::green("present");
                        }
                        
                        if(ros->map.road_segments[0].elements[z].id.region.size() != 0) {
                            // Field name: region
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_177 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_177;
                            ros->map.road_segments[0].elements[z].id.region[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000152\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].id.region[0].value) << 
                                             " map.road_segments[0].elements[z].id.region[0].value: " << ros->map.road_segments[0].elements[z].id.region[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: id
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_178 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_178;
                        ros->map.road_segments[0].elements[z].id.id.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000153\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].id.id.value) << 
                                         " map.road_segments[0].elements[z].id.id.value: " << ros->map.road_segments[0].elements[z].id.id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    
                    // Field name: revision
                    // Integer
                    // UINT8  min(0) max(127) span(128) datatype(UInt8)
                    uint8_t* _tmp_179 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_179;
                    ros->map.road_segments[0].elements[z].revision.value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000154\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].revision.value) << 
                                     " map.road_segments[0].elements[z].revision.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].revision.value);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].revision.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].revision.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                        return false;
                    }
                    
                    // Field name: ref_point
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_41 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].ref_point.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000155\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].ref_point.: " << int(*_ext_flag_41);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Elevation _tmp_180;
                            ros->map.road_segments[0].elements[z].ref_point.elevation.push_back(_tmp_180);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000156\033[0m| ros->map.road_segments[0].elements[z].ref_point.elevation " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Position3DRegional _tmp_181;
                            ros->map.road_segments[0].elements[z].ref_point.regional.push_back(_tmp_181);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000157\033[0m| ros->map.road_segments[0].elements[z].ref_point.regional " << tools::green("present");
                        }
                        
                        // Field name: lat
                        // Real
                        // Double
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_182 = (uint32_t*) buffer; buffer += 4;
                        ros->map.road_segments[0].elements[z].ref_point.lat.value = *_tmp_182;
                        ros->map.road_segments[0].elements[z].ref_point.lat.value += -900000000;
                        __aux64__ = ros->map.road_segments[0].elements[z].ref_point.lat.value;
                        ros->map.road_segments[0].elements[z].ref_point.lat.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000158\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].ref_point.lat.value) << " map.road_segments[0].elements[z].ref_point.lat: " <<
                                         ros->map.road_segments[0].elements[z].ref_point.lat.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longint
                        // Real
                        // Double
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_183 = (uint32_t*) buffer; buffer += 4;
                        ros->map.road_segments[0].elements[z].ref_point.longint.value = *_tmp_183;
                        ros->map.road_segments[0].elements[z].ref_point.longint.value += -1800000000;
                        __aux64__ = ros->map.road_segments[0].elements[z].ref_point.longint.value;
                        ros->map.road_segments[0].elements[z].ref_point.longint.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.longint.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.longint.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000159\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].ref_point.longint.value) << " map.road_segments[0].elements[z].ref_point.longint: " <<
                                         ros->map.road_segments[0].elements[z].ref_point.longint.value << " (" << __aux64__ << ")";
                        }
                        
                        if(ros->map.road_segments[0].elements[z].ref_point.elevation.size() != 0) {
                            // Field name: elevation
                            // Real
                            // Float
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_184 = (uint16_t*) buffer; buffer += 2;
                            ros->map.road_segments[0].elements[z].ref_point.elevation[0].value = *_tmp_184;
                            ros->map.road_segments[0].elements[z].ref_point.elevation[0].value += -4096;
                            __aux64__ = ros->map.road_segments[0].elements[z].ref_point.elevation[0].value;
                            ros->map.road_segments[0].elements[z].ref_point.elevation[0].value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.elevation[0].value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.elevation[0].value' " << (__aux64__) << " exceeds max allowable (61439); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000160\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].ref_point.elevation[0].value) << " map.road_segments[0].elements[z].ref_point.elevation[0]: " <<
                                             ros->map.road_segments[0].elements[z].ref_point.elevation[0].value << " (" << __aux64__ << ")";
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_41) { // from ros->map.road_segments[0].elements[z].ref_point. 
                            uint8_t* _tmp_185 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_7[*_tmp_185];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000161\033[0m| Reading number of exts from ros->map.road_segments[0].elements[z].ref_point.: " << static_cast<unsigned int>(*_tmp_185);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_185; i++)
                                _array_7[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_185; i++) {
                                uint16_t* _tmp_186 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_186; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->map.road_segments[0].elements[z].lane_width.size() != 0) {
                        // Field name: lane_width
                        // Integer
                        // UINT16  min(0) max(32767) span(32768) datatype(UInt16)
                        uint16_t* _tmp_187 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_187;
                        ros->map.road_segments[0].elements[z].lane_width[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000162\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].lane_width[0].value) << 
                                         " map.road_segments[0].elements[z].lane_width[0].value: " << ros->map.road_segments[0].elements[z].lane_width[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].lane_width[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].lane_width[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->map.road_segments[0].elements[z].speed_limits.size() != 0) {
                        // Field name: speed_limits
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9)
                        int16_t* _tmp_188 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_188;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_188 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000163\033[0m| SequenceOf ros->map.road_segments[0].elements[z].speed_limits[0]. size: " << int(*_tmp_188);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 9) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                            return false;
                        }
                        
                        
                        for(int b = 0; b < _if__tmp_188; b++) {
                            dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_b;  // SEQUENCE
                            ros->map.road_segments[0].elements[z].speed_limits[0].elements.push_back(seqof_b);
                        
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                
                                // Field name: type
                                // Enumerated
                                // INT32  min(0) max(12) span(13) datatype(Int32)
                                uint8_t* _ext_flag_45 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000164\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.: " << int(*_ext_flag_45);
                                }
                                
                                uint8_t* _tmp_189 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_189;
                                __aux64__ += 0;
                                ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000165\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value) << 
                                                 " map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value);
                                }
                                
                                // Field name: speed
                                // Integer
                                // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                uint16_t* _tmp_190 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_190;
                                ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000166\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value) << 
                                                 " map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value: " << ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                    return false;
                                }
                        }
                    }
                    
                    // Field name: road_lane_set
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255)
                    int16_t* _tmp_191 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_191;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_191 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000167\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set. size: " << int(*_tmp_191);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                        return false;
                    }
                    
                    
                    for(int c = 0; c < _if__tmp_191; c++) {
                        dsrc_v2_dsrc_msgs::msg::GenericLane seqof_c;  // SEQUENCE
                        ros->map.road_segments[0].elements[z].road_lane_set.elements.push_back(seqof_c);
                    
                            // GenericLane  SEQUENCE
                                //  laneID          LaneID                   
                                //  name            DescriptiveName        OPTIONAL  
                                //  ingressApproach ApproachID             OPTIONAL  
                                //  egressApproach  ApproachID             OPTIONAL  
                                //  laneAttributes  LaneAttributes           
                                //  maneuvers       AllowedManeuvers       OPTIONAL  
                                //  nodeList        NodeListXY               
                                //  connectsTo      ConnectsToList         OPTIONAL  
                                //  overlays        OverlayLaneList        OPTIONAL  
                                //  regional        GenericLane_regional   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_46 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000168\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].: " << int(*_ext_flag_46);
                            }
                            
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_192;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name.push_back(_tmp_192);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000169\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_193;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach.push_back(_tmp_193);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000170\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_194;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach.push_back(_tmp_194);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000171\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_195;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers.push_back(_tmp_195);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000172\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ConnectsToList _tmp_196;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to.push_back(_tmp_196);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000173\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::OverlayLaneList _tmp_197;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays.push_back(_tmp_197);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000174\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::GenericLaneRegional _tmp_198;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].regional.push_back(_tmp_198);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000175\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].regional " << tools::green("present");
                            }
                            
                            // Field name: lane_id
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_199 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_199;
                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000176\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value) << 
                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name.size() != 0) {
                                // Field name: name
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_200 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_200 + 1;
                                buffer += 1;
                                
                                int _if__tmp_200 = __aux64__;
                                for(int d = 0; d < _if__tmp_200; d++) {  // DescriptiveName
                                    char* __tmp__ = (char*)buffer++;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value += *__tmp__;
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach.size() != 0) {
                                // Field name: ingress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_201 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_201;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000177\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value) << 
                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach.size() != 0) {
                                // Field name: egress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_202 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_202;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000178\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value) << 
                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: lane_attributes
                                // LaneAttributes  SEQUENCE
                                    //  directionalUse LaneDirection          
                                    //  sharedWith     LaneSharing            
                                    //  laneType       LaneTypeAttributes     
                                    //  regional       RegionalExtension    OPTIONAL  
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_203;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.regional.push_back(_tmp_203);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000179\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.regional " << tools::green("present");
                                }
                                
                                // Field name: directional_use
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                uint8_t* _tmp_204 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_204 + 2;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000180\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.value: " << __aux64__;
                                
                                int _if__tmp_204 = __aux64__;
                                for(int e = 0; e < _if__tmp_204; e++) {
                                    uint8_t __c__;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values[e] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                    return false;
                                }
                                
                                // Field name: shared_with
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                uint8_t* _tmp_205 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_205 + 10;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000181\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.value: " << __aux64__;
                                
                                int _if__tmp_205 = __aux64__;
                                for(int f = 0; f < _if__tmp_205; f++) {
                                    uint8_t __c__;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values[f] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 10) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.value' " << (__aux64__) << " is less than allowable (10); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.value' " << (__aux64__) << " exceeds max allowable (10); message dropped.";
                                    return false;
                                }
                                
                                // Field name: lane_type
                                // Choice
                                uint8_t* _ext_flag_47 = (uint8_t*)buffer++; // ext flag
                                
                                   // #0  vehicle   LaneAttributes_Vehicle   
                                   // #1  crosswalk   LaneAttributes_Crosswalk   
                                   // #2  bikeLane   LaneAttributes_Bike   
                                   // #3  sidewalk   LaneAttributes_Sidewalk   
                                   // #4  median   LaneAttributes_Barrier   
                                   // #5  striping   LaneAttributes_Striping   
                                   // #6  trackedVehicle   LaneAttributes_TrackedVehicle   
                                   // #7  parking   LaneAttributes_Parking   
                                uint8_t _choice_7 = *(buffer++);
                                
                                if(*_ext_flag_47)
                                    _choice_7 += 7 + 1; // Ext addition
                                
                                if(_choice_7 == 0) {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesVehicle _tmp_206;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle.push_back(_tmp_206);
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    uint8_t* _ext_flag_48 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000182\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].: " << int(*_ext_flag_48);
                                    }
                                    
                                    uint8_t* _tmp_207 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_207 + 8;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000183\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_207 = __aux64__;
                                    for(int g = 0; g < _if__tmp_207; g++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values[g] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_7 == 1)  // CHOICE LaneTypeAttributes  fieldName(crosswalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesCrosswalk _tmp_208;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk.push_back(_tmp_208);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_209 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_209 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000184\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_209 = __aux64__;
                                    for(int h = 0; h < _if__tmp_209; h++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values[h] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_7 == 2)  // CHOICE LaneTypeAttributes  fieldName(bike_lane)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBike _tmp_210;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane.push_back(_tmp_210);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_211 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_211 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000185\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].value: " << __aux64__;
                                    
                                    int _if__tmp_211 = __aux64__;
                                    for(int i = 0; i < _if__tmp_211; i++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values[i] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_7 == 3)  // CHOICE LaneTypeAttributes  fieldName(sidewalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesSidewalk _tmp_212;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk.push_back(_tmp_212);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_213 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_213 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000186\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_213 = __aux64__;
                                    for(int j = 0; j < _if__tmp_213; j++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values[j] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_7 == 4)  // CHOICE LaneTypeAttributes  fieldName(median)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBarrier _tmp_214;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median.push_back(_tmp_214);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_215 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_215 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000187\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].value: " << __aux64__;
                                    
                                    int _if__tmp_215 = __aux64__;
                                    for(int k = 0; k < _if__tmp_215; k++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values[k] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_7 == 5)  // CHOICE LaneTypeAttributes  fieldName(striping)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesStriping _tmp_216;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping.push_back(_tmp_216);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_217 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_217 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000188\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].value: " << __aux64__;
                                    
                                    int _if__tmp_217 = __aux64__;
                                    for(int l = 0; l < _if__tmp_217; l++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values[l] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_7 == 6)  // CHOICE LaneTypeAttributes  fieldName(tracked_vehicle)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesTrackedVehicle _tmp_218;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle.push_back(_tmp_218);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_219 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_219 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000189\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_219 = __aux64__;
                                    for(int m = 0; m < _if__tmp_219; m++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values[m] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_7 == 7)  // CHOICE LaneTypeAttributes  fieldName(parking)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesParking _tmp_220;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking.push_back(_tmp_220);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_221 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_221 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000190\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].value: " << __aux64__;
                                    
                                    int _if__tmp_221 = __aux64__;
                                    for(int n = 0; n < _if__tmp_221; n++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values[n] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else
                                {
                                    uint16_t* _tmp_222 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2 + int(*_tmp_222);            // Ignoring opentype data
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers.size() != 0) {
                                // Field name: maneuvers
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                uint8_t* _tmp_223 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_223 + 12;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000191\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].value: " << __aux64__;
                                
                                int _if__tmp_223 = __aux64__;
                                for(int o = 0; o < _if__tmp_223; o++) {
                                    uint8_t __c__;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values[o] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: node_list
                            // Choice
                            uint8_t* _ext_flag_49 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  nodes   NodeSetXY   
                               // #1  computed   ComputedLane   
                            uint8_t _choice_8 = *(buffer++);
                            
                            if(*_ext_flag_49)
                                _choice_8 += 1 + 1; // Ext addition
                            
                            if(_choice_8 == 0) {
                                dsrc_v2_dsrc_msgs::msg::NodeSetXY _tmp_224;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes.push_back(_tmp_224);
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62)
                                int16_t* _tmp_225 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_225;
                                __aux64__ += 2;     // +min
                                
                                int _if__tmp_225 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000192\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0]. size: " << int(*_tmp_225);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 63) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].value' " << (__aux64__) << " exceeds max allowable (63); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int p = 0; p < _if__tmp_225; p++) {
                                    dsrc_v2_dsrc_msgs::msg::NodeXY seqof_p;  // SEQUENCE
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements.push_back(seqof_p);
                                
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_50 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000193\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].: " << int(*_ext_flag_50);
                                        }
                                        
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXY _tmp_226;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes.push_back(_tmp_226);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000194\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes " << tools::green("present");
                                        }
                                        
                                        // Field name: delta
                                        // Choice
                                           // #0  node_XY1   Node_XY_20b   
                                           // #1  node_XY2   Node_XY_22b   
                                           // #2  node_XY3   Node_XY_24b   
                                           // #3  node_XY4   Node_XY_26b   
                                           // #4  node_XY5   Node_XY_28b   
                                           // #5  node_XY6   Node_XY_32b   
                                           // #6  node_LatLon   Node_LLmD_64b   
                                           // #7  regional   RegionalExtension   
                                        uint8_t _choice_9 = *(buffer++);
                                        
                                        if(_choice_9 == 0) {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY20b _tmp_227;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1.push_back(_tmp_227);
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_228 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value = *_tmp_228;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value += -512;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000195\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_229 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value = *_tmp_229;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value += -512;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000196\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_9 == 1)  // CHOICE NodeOffsetPointXY  fieldName(node_xy2)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY22b _tmp_230;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2.push_back(_tmp_230);
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_231 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value = *_tmp_231;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value += -1024;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000197\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_232 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value = *_tmp_232;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value += -1024;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000198\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_9 == 2)  // CHOICE NodeOffsetPointXY  fieldName(node_xy3)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY24b _tmp_233;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3.push_back(_tmp_233);
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_234 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value = *_tmp_234;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value += -2048;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000199\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_235 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value = *_tmp_235;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value += -2048;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000200\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_9 == 3)  // CHOICE NodeOffsetPointXY  fieldName(node_xy4)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY26b _tmp_236;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4.push_back(_tmp_236);
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_237 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value = *_tmp_237;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value += -4096;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000201\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_238 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value = *_tmp_238;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value += -4096;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000202\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_9 == 4)  // CHOICE NodeOffsetPointXY  fieldName(node_xy5)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY28b _tmp_239;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5.push_back(_tmp_239);
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_240 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value = *_tmp_240;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value += -8192;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000203\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_241 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value = *_tmp_241;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value += -8192;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000204\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_9 == 5)  // CHOICE NodeOffsetPointXY  fieldName(node_xy6)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY32b _tmp_242;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6.push_back(_tmp_242);
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_243 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value = *_tmp_243;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value += -32768;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000205\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_244 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value = *_tmp_244;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value += -32768;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000206\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_9 == 6)  // CHOICE NodeOffsetPointXY  fieldName(node_lat_lon)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeLLmD64b _tmp_245;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon.push_back(_tmp_245);
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                
                                                // Field name: lon
                                                // Real
                                                // Double
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_246 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value = *_tmp_246;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value += -1800000000;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000207\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: lat
                                                // Real
                                                // Double
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_247 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value = *_tmp_247;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value += -900000000;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000208\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat: " <<
                                                                 ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(_choice_9) << ") selected in CHOICE NodeOffsetPointXY in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta'; message dropped.";
                                            return false;
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes.size() != 0) {
                                            // Field name: attributes
                                                // NodeAttributeSetXY  SEQUENCE
                                                    //  localNode  NodeAttributeXYList           OPTIONAL  
                                                    //  disabled   SegmentAttributeXYList        OPTIONAL  
                                                    //  enabled    SegmentAttributeXYList        OPTIONAL  
                                                    //  data       LaneDataAttributeList         OPTIONAL  
                                                    //  dWidth     Offset_B10                    OPTIONAL  
                                                    //  dElevation Offset_B10                    OPTIONAL  
                                                    //  regional   NodeAttributeSetXY_regional   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_66 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000209\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].: " << int(*_ext_flag_66);
                                                }
                                                
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeXYList _tmp_248;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node.push_back(_tmp_248);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000210\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_249;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled.push_back(_tmp_249);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000211\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_250;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled.push_back(_tmp_250);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000212\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::LaneDataAttributeList _tmp_251;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data.push_back(_tmp_251);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000213\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_252;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width.push_back(_tmp_252);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000214\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_253;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation.push_back(_tmp_253);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000215\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXYRegional _tmp_254;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].regional.push_back(_tmp_254);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000216\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].regional " << tools::green("present");
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node.size() != 0) {
                                                    // Field name: local_node
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_255 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_255;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_255 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000217\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0]. size: " << int(*_tmp_255);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int q = 0; q < _if__tmp_255; q++) {
                                                        dsrc_v2_dsrc_msgs::msg::NodeAttributeXY seqof_q;  // ENUMERATED
                                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements.push_back(seqof_q);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) datatype(Int32)
                                                        uint8_t* _ext_flag_67 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000218\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].: " << int(*_ext_flag_67);
                                                        }
                                                        
                                                        uint8_t* _tmp_256 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_256;
                                                        __aux64__ += 0;
                                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value' " << (__aux64__) << " exceeds max allowable (11); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000219\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value) << 
                                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled.size() != 0) {
                                                    // Field name: disabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_257 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_257;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_257 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000220\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0]. size: " << int(*_tmp_257);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int r = 0; r < _if__tmp_257; r++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_r;  // ENUMERATED
                                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements.push_back(seqof_r);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_68 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000221\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].: " << int(*_ext_flag_68);
                                                        }
                                                        
                                                        uint8_t* _tmp_258 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_258;
                                                        __aux64__ += 0;
                                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000222\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value) << 
                                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled.size() != 0) {
                                                    // Field name: enabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_259 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_259;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_259 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000223\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0]. size: " << int(*_tmp_259);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int s = 0; s < _if__tmp_259; s++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_s;  // ENUMERATED
                                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements.push_back(seqof_s);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_69 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000224\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].: " << int(*_ext_flag_69);
                                                        }
                                                        
                                                        uint8_t* _tmp_260 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_260;
                                                        __aux64__ += 0;
                                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000225\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value) << 
                                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data.size() != 0) {
                                                    // Field name: data
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_261 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_261;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_261 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000226\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0]. size: " << int(*_tmp_261);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int t = 0; t < _if__tmp_261; t++) {
                                                        dsrc_v2_dsrc_msgs::msg::LaneDataAttribute seqof_t;  // CHOICE
                                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements.push_back(seqof_t);
                                                    
                                                        // Choice
                                                        uint8_t* _ext_flag_70 = (uint8_t*)buffer++; // ext flag
                                                        
                                                           // #0  pathEndPointAngle   DeltaAngle   
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle   
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle   
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle   
                                                           // #4  laneAngle   MergeDivergeNodeAngle   
                                                           // #5  speedLimits   SpeedLimitList   
                                                           // #6  regional   LaneDataAttribute_regional   
                                                        uint8_t _choice_10 = *(buffer++);
                                                        
                                                        if(*_ext_flag_70)
                                                            _choice_10 += 6 + 1; // Ext addition
                                                        
                                                        if(_choice_10 == 0) {
                                                            dsrc_v2_dsrc_msgs::msg::DeltaAngle _tmp_262;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle.push_back(_tmp_262);
                                                        
                                                            // Integer
                                                            // INT16  min(-150) max(150) span(301) datatype(Int16)
                                                            uint16_t* _tmp_263 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_263;
                                                            __aux64__ += -150;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000227\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value' " << (__aux64__) << " is less than allowable (-150); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value' " << (__aux64__) << " exceeds max allowable (150); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_10 == 1)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_center)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_264;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center.push_back(_tmp_264);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_265 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_265;
                                                            __aux64__ += -128;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000228\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_10 == 2)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_left)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_266;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left.push_back(_tmp_266);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_267 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_267;
                                                            __aux64__ += -128;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000229\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_10 == 3)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_right)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_268;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right.push_back(_tmp_268);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_269 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_269;
                                                            __aux64__ += -128;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000230\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_10 == 4)  // CHOICE LaneDataAttribute  fieldName(lane_angle)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::MergeDivergeNodeAngle _tmp_270;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle.push_back(_tmp_270);
                                                        
                                                            // Integer
                                                            // INT16  min(-180) max(180) span(361) datatype(Int16)
                                                            uint16_t* _tmp_271 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_271;
                                                            __aux64__ += -180;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000231\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value' " << (__aux64__) << " is less than allowable (-180); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value' " << (__aux64__) << " exceeds max allowable (180); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_10 == 5)  // CHOICE LaneDataAttribute  fieldName(speed_limits)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_272;
                                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits.push_back(_tmp_272);
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9)
                                                            int16_t* _tmp_273 = (int16_t*)buffer;
                                                            buffer += 2;
                                                            __aux64__ = *_tmp_273;
                                                            __aux64__ += 1;     // +min
                                                            
                                                            int _if__tmp_273 = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000232\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0]. size: " << int(*_tmp_273);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 9) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                                                                return false;
                                                            }
                                                            
                                                            
                                                            for(int u = 0; u < _if__tmp_273; u++) {
                                                                dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_u;  // SEQUENCE
                                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements.push_back(seqof_u);
                                                            
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    
                                                                    // Field name: type
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) datatype(Int32)
                                                                    uint8_t* _ext_flag_71 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000233\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.: " << int(*_ext_flag_71);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_274 = (uint8_t*) buffer++;
                                                                    __aux64__ = *_tmp_274;
                                                                    __aux64__ += 0;
                                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value = __aux64__;
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                                        return false;
                                                                    }
                                                                    
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000234\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value) << 
                                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value);
                                                                    }
                                                                    
                                                                    // Field name: speed
                                                                    // Integer
                                                                    // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                                                    uint16_t* _tmp_275 = (uint16_t*) buffer; buffer += 2;
                                                                    __aux64__ = *_tmp_275;
                                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value = __aux64__;
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000235\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value) << 
                                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value;
                                                                    }
                                                                    
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                                        return false;
                                                                    }
                                                            }
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            uint16_t* _tmp_276 = (uint16_t*)buffer;  // OpenType length
                                                            buffer += 2 + int(*_tmp_276);            // Ignoring opentype data
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width.size() != 0) {
                                                    // Field name: d_width
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_277 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value = *_tmp_277;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value += -512;
                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000236\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0]: " <<
                                                                     ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation.size() != 0) {
                                                    // Field name: d_elevation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_278 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value = *_tmp_278;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value += -512;
                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000237\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value) << " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0]: " <<
                                                                     ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_66) { // from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0]. 
                                                    uint8_t* _tmp_279 = (uint8_t*) buffer++;  // number of extensions
                                                    bool _array_8[*_tmp_279];
                                                    
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000238\033[0m| Reading number of exts from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].: " << static_cast<unsigned int>(*_tmp_279);
                                                    
                                                    // Extensions bytemap
                                                    for(int i = 0; i < *_tmp_279; i++)
                                                        _array_8[i] = (*buffer++) != 0;
                                                    
                                                    // Discarding unknown OpenType containers
                                                    for(int i = 0; i < *_tmp_279; i++) {
                                                        uint16_t* _tmp_280 = (uint16_t*)buffer;  // OpenType length
                                                        buffer += 2;
                                                    
                                                        if(debug) {
                                                        }
                                                    
                                                        for(int i = 0; i < *_tmp_280; i++)
                                                            buffer++;
                                                    }
                                                    
                                                }
                                        }
                                        if(*_ext_flag_50) { // from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p]. 
                                            uint8_t* _tmp_281 = (uint8_t*) buffer++;  // number of extensions
                                            bool _array_9[*_tmp_281];
                                            
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000239\033[0m| Reading number of exts from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].: " << static_cast<unsigned int>(*_tmp_281);
                                            
                                            // Extensions bytemap
                                            for(int i = 0; i < *_tmp_281; i++)
                                                _array_9[i] = (*buffer++) != 0;
                                            
                                            // Discarding unknown OpenType containers
                                            for(int i = 0; i < *_tmp_281; i++) {
                                                uint16_t* _tmp_282 = (uint16_t*)buffer;  // OpenType length
                                                buffer += 2;
                                            
                                                if(debug) {
                                                }
                                            
                                                for(int i = 0; i < *_tmp_282; i++)
                                                    buffer++;
                                            }
                                            
                                        }
                                }
                            }
                            else if(_choice_8 == 1)  // CHOICE NodeListXY  fieldName(computed)
                            {
                                dsrc_v2_dsrc_msgs::msg::ComputedLane _tmp_283;
                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed.push_back(_tmp_283);
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_74 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000240\033[0m| Reading ext flag from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].: " << int(*_ext_flag_74);
                                    }
                                    
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::Angle _tmp_284;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy.push_back(_tmp_284);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000241\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_285;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis.push_back(_tmp_285);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000242\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_286;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis.push_back(_tmp_286);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000243\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ComputedLaneRegional _tmp_287;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].regional.push_back(_tmp_287);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000244\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].regional " << tools::green("present");
                                    }
                                    
                                    // Field name: reference_lane_id
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_288 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_288;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000245\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_xaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_11 = *(buffer++);
                                    
                                    if(_choice_11 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_289;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small.push_back(_tmp_289);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_290 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_290;
                                        __aux64__ += -2047;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000246\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_11 == 1)  // CHOICE ComputedLane_offsetXaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_291;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large.push_back(_tmp_291);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_292 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_292;
                                        __aux64__ += -32767;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000247\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_11) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_yaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_12 = *(buffer++);
                                    
                                    if(_choice_12 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_293;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small.push_back(_tmp_293);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_294 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_294;
                                        __aux64__ += -2047;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000248\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_12 == 1)  // CHOICE ComputedLane_offsetYaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_295;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large.push_back(_tmp_295);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_296 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_296;
                                        __aux64__ += -32767;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000249\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_12) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field name: rotate_xy
                                        // Integer
                                        // UINT16  min(0) max(28800) span(28801) datatype(UInt16)
                                        uint16_t* _tmp_297 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_297;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000250\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " exceeds max allowable (28800); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field name: scale_xaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_298 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_298;
                                        __aux64__ += -2048;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000251\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field name: scale_yaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_299 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_299;
                                        __aux64__ += -2048;
                                        ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000252\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_74) { // from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0]. 
                                        uint8_t* _tmp_300 = (uint8_t*) buffer++;  // number of extensions
                                        bool _array_10[*_tmp_300];
                                        
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000253\033[0m| Reading number of exts from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].: " << static_cast<unsigned int>(*_tmp_300);
                                        
                                        // Extensions bytemap
                                        for(int i = 0; i < *_tmp_300; i++)
                                            _array_10[i] = (*buffer++) != 0;
                                        
                                        // Discarding unknown OpenType containers
                                        for(int i = 0; i < *_tmp_300; i++) {
                                            uint16_t* _tmp_301 = (uint16_t*)buffer;  // OpenType length
                                            buffer += 2;
                                        
                                            if(debug) {
                                            }
                                        
                                            for(int i = 0; i < *_tmp_301; i++)
                                                buffer++;
                                        }
                                        
                                    }
                            }
                            else
                            {
                                uint16_t* _tmp_302 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_302);            // Ignoring opentype data
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to.size() != 0) {
                                // Field name: connects_to
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                int16_t* _tmp_303 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_303;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_303 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000254\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0]. size: " << int(*_tmp_303);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int v = 0; v < _if__tmp_303; v++) {
                                    dsrc_v2_dsrc_msgs::msg::Connection seqof_v;  // SEQUENCE
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements.push_back(seqof_v);
                                
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::IntersectionReferenceID _tmp_304;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection.push_back(_tmp_304);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000255\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::SignalGroupID _tmp_305;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group.push_back(_tmp_305);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000256\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RestrictionClassID _tmp_306;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class.push_back(_tmp_306);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000257\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_307;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id.push_back(_tmp_307);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000258\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id " << tools::green("present");
                                        }
                                        
                                        // Field name: connecting_lane
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_308;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver.push_back(_tmp_308);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000259\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver " << tools::green("present");
                                            }
                                            
                                            // Field name: lane
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_309 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_309;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000260\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                            
                                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver.size() != 0) {
                                                // Field name: maneuver
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                uint8_t* _tmp_310 = (uint8_t*)buffer;
                                                __aux64__ = *_tmp_310 + 12;
                                                buffer += 1;
                                                
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000261\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].value: " << __aux64__;
                                                
                                                int _if__tmp_310 = __aux64__;
                                                for(int w = 0; w < _if__tmp_310; w++) {
                                                    uint8_t __c__;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values.push_back(__c__);
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values[w] = (*__b__ == 1);
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                    return false;
                                                }
                                            }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection.size() != 0) {
                                            // Field name: remote_intersection
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_311;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region.push_back(_tmp_311);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000262\033[0m| ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region " << tools::green("present");
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region.size() != 0) {
                                                    // Field name: region
                                                    // Integer
                                                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                    uint16_t* _tmp_312 = (uint16_t*) buffer; buffer += 2;
                                                    __aux64__ = *_tmp_312;
                                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000263\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value) << 
                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                        return false;
                                                    }
                                                }
                                                
                                                // Field name: id
                                                // Integer
                                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                uint16_t* _tmp_313 = (uint16_t*) buffer; buffer += 2;
                                                __aux64__ = *_tmp_313;
                                                ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000264\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value;
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                    return false;
                                                }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group.size() != 0) {
                                            // Field name: signal_group
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_314 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_314;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000265\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class.size() != 0) {
                                            // Field name: user_class
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_315 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_315;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000266\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id.size() != 0) {
                                            // Field name: connection_id
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_316 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_316;
                                            ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000267\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays.size() != 0) {
                                // Field name: overlays
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5)
                                int16_t* _tmp_317 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_317;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_317 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000268\033[0m| SequenceOf ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0]. size: " << int(*_tmp_317);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 5) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].value' " << (__aux64__) << " exceeds max allowable (5); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int x = 0; x < _if__tmp_317; x++) {
                                    dsrc_v2_dsrc_msgs::msg::LaneID seqof_x;  // INTEGER
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements.push_back(seqof_x);
                                
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_318 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_318;
                                    ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000269\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value) << 
                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_46) { // from ros->map.road_segments[0].elements[z].road_lane_set.elements[c]. 
                                uint8_t* _tmp_319 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_11[*_tmp_319];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000270\033[0m| Reading number of exts from ros->map.road_segments[0].elements[z].road_lane_set.elements[c].: " << static_cast<unsigned int>(*_tmp_319);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_319; i++)
                                    _array_11[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_319; i++) {
                                    uint16_t* _tmp_320 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_320; i++)
                                        buffer++;
                                }
                                
                            }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_40) { // from ros->map.road_segments[0].elements[z]. 
                        uint8_t* _tmp_321 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_12[*_tmp_321];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000271\033[0m| Reading number of exts from ros->map.road_segments[0].elements[z].: " << static_cast<unsigned int>(*_tmp_321);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_321; i++)
                            _array_12[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_321; i++) {
                            uint16_t* _tmp_322 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_322; i++)
                                buffer++;
                        }
                        
                    }
            }
        }
        
        if(ros->map.data_parameters.size() != 0) {
            // Field name: data_parameters
                // DataParameters  SEQUENCE
                    //  processMethod   DataParameters_processMethod     OPTIONAL  
                    //  processAgency   DataParameters_processAgency     OPTIONAL  
                    //  lastCheckedDate DataParameters_lastCheckedDate   OPTIONAL  
                    //  geoidUsed       DataParameters_geoidUsed         OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_77 = (uint8_t*) buffer++;  // Read ext flag from ros->map.data_parameters[0].
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000272\033[0m| Reading ext flag from ros->map.data_parameters[0].: " << int(*_ext_flag_77);
                }
                
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersProcessMethod _tmp_323;
                    ros->map.data_parameters[0].process_method.push_back(_tmp_323);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000273\033[0m| ros->map.data_parameters[0].process_method " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersProcessAgency _tmp_324;
                    ros->map.data_parameters[0].process_agency.push_back(_tmp_324);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000274\033[0m| ros->map.data_parameters[0].process_agency " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersLastCheckedDate _tmp_325;
                    ros->map.data_parameters[0].last_checked_date.push_back(_tmp_325);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000275\033[0m| ros->map.data_parameters[0].last_checked_date " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersGeoidUsed _tmp_326;
                    ros->map.data_parameters[0].geoid_used.push_back(_tmp_326);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000276\033[0m| ros->map.data_parameters[0].geoid_used " << tools::green("present");
                }
                
                if(ros->map.data_parameters[0].process_method.size() != 0) {
                    // Field name: process_method
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_327 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_327 + 1;
                    buffer += 1;
                    
                    int _if__tmp_327 = __aux64__;
                    for(int y = 0; y < _if__tmp_327; y++) {  // DataParameters_processMethod
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].process_method[0].value += *__tmp__;
                    }
                }
                
                if(ros->map.data_parameters[0].process_agency.size() != 0) {
                    // Field name: process_agency
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_328 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_328 + 1;
                    buffer += 1;
                    
                    int _if__tmp_328 = __aux64__;
                    for(int z = 0; z < _if__tmp_328; z++) {  // DataParameters_processAgency
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].process_agency[0].value += *__tmp__;
                    }
                }
                
                if(ros->map.data_parameters[0].last_checked_date.size() != 0) {
                    // Field name: last_checked_date
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_329 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_329 + 1;
                    buffer += 1;
                    
                    int _if__tmp_329 = __aux64__;
                    for(int a = 0; a < _if__tmp_329; a++) {  // DataParameters_lastCheckedDate
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].last_checked_date[0].value += *__tmp__;
                    }
                }
                
                if(ros->map.data_parameters[0].geoid_used.size() != 0) {
                    // Field name: geoid_used
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_330 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_330 + 1;
                    buffer += 1;
                    
                    int _if__tmp_330 = __aux64__;
                    for(int b = 0; b < _if__tmp_330; b++) {  // DataParameters_geoidUsed
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].geoid_used[0].value += *__tmp__;
                    }
                }
                if(*_ext_flag_77) { // from ros->map.data_parameters[0]. 
                    uint8_t* _tmp_331 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_13[*_tmp_331];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000277\033[0m| Reading number of exts from ros->map.data_parameters[0].: " << static_cast<unsigned int>(*_tmp_331);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_331; i++)
                        _array_13[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_331; i++) {
                        uint16_t* _tmp_332 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_332; i++)
                            buffer++;
                    }
                    
                }
        }
        
        // Field name: restriction_list  // avoided
        // Field name: regional  // avoided
        if(*_ext_flag_1) { // from ros->map. 
            uint8_t* _tmp_333 = (uint8_t*) buffer++;  // number of extensions
            bool _array_14[*_tmp_333];
            
            if(debug)
                logger->debug() << "|\033[38;5;94m000278\033[0m| Reading number of exts from ros->map.: " << static_cast<unsigned int>(*_tmp_333);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_333; i++)
                _array_14[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_333; i++) {
                uint16_t* _tmp_334 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_334; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}