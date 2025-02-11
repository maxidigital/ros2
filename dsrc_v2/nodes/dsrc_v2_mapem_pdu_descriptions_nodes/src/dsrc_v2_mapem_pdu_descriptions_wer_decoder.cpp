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
        uint8_t* _tmp_7961 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_7961;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m007187\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
        uint8_t* _tmp_7962 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_7962;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m007188\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
        uint32_t* _tmp_7963 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_7963;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m007189\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
        uint8_t* _ext_flag_3590 = (uint8_t*) buffer++;  // Read ext flag from ros->map.
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m007190\033[0m| Reading ext flag from ros->map.: " << int(*_ext_flag_3590);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_7964;
            ros->map.time_stamp.push_back(_tmp_7964);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007191\033[0m| ros->map.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::LayerType _tmp_7965;
            ros->map.layer_type.push_back(_tmp_7965);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007192\033[0m| ros->map.layer_type " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::LayerID _tmp_7966;
            ros->map.layer_id.push_back(_tmp_7966);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007193\033[0m| ros->map.layer_id " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::IntersectionGeometryList _tmp_7967;
            ros->map.intersections.push_back(_tmp_7967);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007194\033[0m| ros->map.intersections " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::RoadSegmentList _tmp_7968;
            ros->map.road_segments.push_back(_tmp_7968);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007195\033[0m| ros->map.road_segments " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::DataParameters _tmp_7969;
            ros->map.data_parameters.push_back(_tmp_7969);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007196\033[0m| ros->map.data_parameters " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::RestrictionClassList _tmp_7970;
            ros->map.restriction_list.push_back(_tmp_7970);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007197\033[0m| ros->map.restriction_list " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MapDataRegional _tmp_7971;
            ros->map.regional.push_back(_tmp_7971);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m007198\033[0m| ros->map.regional " << tools::green("present");
        }
        
        if(ros->map.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_7972 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_7972;
            ros->map.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m007199\033[0m| " << tools::getTypeName(ros->map.time_stamp[0].value) << 
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
        uint8_t* _tmp_7973 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_7973;
        ros->map.msg_issue_revision.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m007200\033[0m| " << tools::getTypeName(ros->map.msg_issue_revision.value) << 
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
            uint8_t* _ext_flag_3591 = (uint8_t*) buffer++;  // Read ext flag from ros->map.layer_type[0].
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m007201\033[0m| Reading ext flag from ros->map.layer_type[0].: " << int(*_ext_flag_3591);
            }
            
            uint8_t* _tmp_7974 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_7974;
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
                logger->debug() << "|\033[38;5;94m007202\033[0m| " << tools::getTypeName(ros->map.layer_type[0].value) << 
                             " map.layer_type[0].value: " << static_cast<int>(ros->map.layer_type[0].value);
            }
        }
        
        if(ros->map.layer_id.size() != 0) {
            // Field name: layer_id
            // Integer
            // UINT8  min(0) max(100) span(101) datatype(UInt8)
            uint8_t* _tmp_7975 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_7975;
            ros->map.layer_id[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m007203\033[0m| " << tools::getTypeName(ros->map.layer_id[0].value) << 
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
            int16_t* _tmp_7976 = (int16_t*)buffer;
            buffer += 2;
            __aux64__ = *_tmp_7976;
            __aux64__ += 1;     // +min
            
            int _if__tmp_7976 = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m007204\033[0m| SequenceOf ros->map.intersections[0]. size: " << int(*_tmp_7976);
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
            
            
            for(int i = 0; i < _if__tmp_7976; i++) {
                dsrc_v2_dsrc_msgs::msg::IntersectionGeometry seqof_i;  // SEQUENCE
                ros->map.intersections[0].elements.push_back(seqof_i);
            
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
                    uint8_t* _ext_flag_3592 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007205\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].: " << int(*_ext_flag_3592);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_7977;
                        ros->map.intersections[0].elements[i].name.push_back(_tmp_7977);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007206\033[0m| ros->map.intersections[0].elements[i].name " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::LaneWidth _tmp_7978;
                        ros->map.intersections[0].elements[i].lane_width.push_back(_tmp_7978);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007207\033[0m| ros->map.intersections[0].elements[i].lane_width " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_7979;
                        ros->map.intersections[0].elements[i].speed_limits.push_back(_tmp_7979);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007208\033[0m| ros->map.intersections[0].elements[i].speed_limits " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::PreemptPriorityList _tmp_7980;
                        ros->map.intersections[0].elements[i].preempt_priority_data.push_back(_tmp_7980);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007209\033[0m| ros->map.intersections[0].elements[i].preempt_priority_data " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::IntersectionGeometryRegional _tmp_7981;
                        ros->map.intersections[0].elements[i].regional.push_back(_tmp_7981);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007210\033[0m| ros->map.intersections[0].elements[i].regional " << tools::green("present");
                    }
                    
                    if(ros->map.intersections[0].elements[i].name.size() != 0) {
                        // Field name: name
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_7982 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_7982 + 1;
                        buffer += 1;
                        
                        int _if__tmp_7982 = __aux64__;
                        for(int j = 0; j < _if__tmp_7982; j++) {  // DescriptiveName
                            char* __tmp__ = (char*)buffer++;
                            ros->map.intersections[0].elements[i].name[0].value += *__tmp__;
                        }
                    }
                    
                    // Field name: id
                        // IntersectionReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         IntersectionID      
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_7983;
                            ros->map.intersections[0].elements[i].id.region.push_back(_tmp_7983);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007211\033[0m| ros->map.intersections[0].elements[i].id.region " << tools::green("present");
                        }
                        
                        if(ros->map.intersections[0].elements[i].id.region.size() != 0) {
                            // Field name: region
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_7984 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_7984;
                            ros->map.intersections[0].elements[i].id.region[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007212\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].id.region[0].value) << 
                                             " map.intersections[0].elements[i].id.region[0].value: " << ros->map.intersections[0].elements[i].id.region[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: id
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_7985 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_7985;
                        ros->map.intersections[0].elements[i].id.id.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007213\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].id.id.value) << 
                                         " map.intersections[0].elements[i].id.id.value: " << ros->map.intersections[0].elements[i].id.id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    
                    // Field name: revision
                    // Integer
                    // UINT8  min(0) max(127) span(128) datatype(UInt8)
                    uint8_t* _tmp_7986 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_7986;
                    ros->map.intersections[0].elements[i].revision.value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007214\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].revision.value) << 
                                     " map.intersections[0].elements[i].revision.value: " << static_cast<int>(ros->map.intersections[0].elements[i].revision.value);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].revision.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].revision.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                        return false;
                    }
                    
                    // Field name: ref_point
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3593 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].ref_point.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007215\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].ref_point.: " << int(*_ext_flag_3593);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Elevation _tmp_7987;
                            ros->map.intersections[0].elements[i].ref_point.elevation.push_back(_tmp_7987);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007216\033[0m| ros->map.intersections[0].elements[i].ref_point.elevation " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Position3DRegional _tmp_7988;
                            ros->map.intersections[0].elements[i].ref_point.regional.push_back(_tmp_7988);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007217\033[0m| ros->map.intersections[0].elements[i].ref_point.regional " << tools::green("present");
                        }
                        
                        // Field name: lat
                        // Real
                        // Double
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_7989 = (uint32_t*) buffer; buffer += 4;
                        ros->map.intersections[0].elements[i].ref_point.lat.value = *_tmp_7989;
                        ros->map.intersections[0].elements[i].ref_point.lat.value += -900000000;
                        __aux64__ = ros->map.intersections[0].elements[i].ref_point.lat.value;
                        ros->map.intersections[0].elements[i].ref_point.lat.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].ref_point.lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].ref_point.lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007218\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].ref_point.lat.value) << " map.intersections[0].elements[i].ref_point.lat: " <<
                                         ros->map.intersections[0].elements[i].ref_point.lat.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longint
                        // Real
                        // Double
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_7990 = (uint32_t*) buffer; buffer += 4;
                        ros->map.intersections[0].elements[i].ref_point.longint.value = *_tmp_7990;
                        ros->map.intersections[0].elements[i].ref_point.longint.value += -1800000000;
                        __aux64__ = ros->map.intersections[0].elements[i].ref_point.longint.value;
                        ros->map.intersections[0].elements[i].ref_point.longint.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].ref_point.longint.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].ref_point.longint.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007219\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].ref_point.longint.value) << " map.intersections[0].elements[i].ref_point.longint: " <<
                                         ros->map.intersections[0].elements[i].ref_point.longint.value << " (" << __aux64__ << ")";
                        }
                        
                        if(ros->map.intersections[0].elements[i].ref_point.elevation.size() != 0) {
                            // Field name: elevation
                            // Real
                            // Float
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_7991 = (uint16_t*) buffer; buffer += 2;
                            ros->map.intersections[0].elements[i].ref_point.elevation[0].value = *_tmp_7991;
                            ros->map.intersections[0].elements[i].ref_point.elevation[0].value += -4096;
                            __aux64__ = ros->map.intersections[0].elements[i].ref_point.elevation[0].value;
                            ros->map.intersections[0].elements[i].ref_point.elevation[0].value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].ref_point.elevation[0].value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].ref_point.elevation[0].value' " << (__aux64__) << " exceeds max allowable (61439); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007220\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].ref_point.elevation[0].value) << " map.intersections[0].elements[i].ref_point.elevation[0]: " <<
                                             ros->map.intersections[0].elements[i].ref_point.elevation[0].value << " (" << __aux64__ << ")";
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3593) { // from ros->map.intersections[0].elements[i].ref_point. 
                            uint8_t* _tmp_7992 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_91[*_tmp_7992];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007221\033[0m| Reading number of exts from ros->map.intersections[0].elements[i].ref_point.: " << static_cast<unsigned int>(*_tmp_7992);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_7992; i++)
                                _array_91[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_7992; i++) {
                                uint16_t* _tmp_7993 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_7993; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->map.intersections[0].elements[i].lane_width.size() != 0) {
                        // Field name: lane_width
                        // Integer
                        // UINT16  min(0) max(32767) span(32768) datatype(UInt16)
                        uint16_t* _tmp_7994 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_7994;
                        ros->map.intersections[0].elements[i].lane_width[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007222\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_width[0].value) << 
                                         " map.intersections[0].elements[i].lane_width[0].value: " << ros->map.intersections[0].elements[i].lane_width[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_width[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_width[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->map.intersections[0].elements[i].speed_limits.size() != 0) {
                        // Field name: speed_limits
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9)
                        int16_t* _tmp_7995 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_7995;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_7995 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007223\033[0m| SequenceOf ros->map.intersections[0].elements[i].speed_limits[0]. size: " << int(*_tmp_7995);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 9) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                            return false;
                        }
                        
                        
                        for(int k = 0; k < _if__tmp_7995; k++) {
                            dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_k;  // SEQUENCE
                            ros->map.intersections[0].elements[i].speed_limits[0].elements.push_back(seqof_k);
                        
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                
                                // Field name: type
                                // Enumerated
                                // INT32  min(0) max(12) span(13) datatype(Int32)
                                uint8_t* _ext_flag_3597 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].speed_limits[0].elements[k].type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007224\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].speed_limits[0].elements[k].type.: " << int(*_ext_flag_3597);
                                }
                                
                                uint8_t* _tmp_7996 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7996;
                                __aux64__ += 0;
                                ros->map.intersections[0].elements[i].speed_limits[0].elements[k].type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].speed_limits[0].elements[k].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].speed_limits[0].elements[k].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007225\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].speed_limits[0].elements[k].type.value) << 
                                                 " map.intersections[0].elements[i].speed_limits[0].elements[k].type.value: " << static_cast<int>(ros->map.intersections[0].elements[i].speed_limits[0].elements[k].type.value);
                                }
                                
                                // Field name: speed
                                // Integer
                                // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                uint16_t* _tmp_7997 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_7997;
                                ros->map.intersections[0].elements[i].speed_limits[0].elements[k].speed.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007226\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].speed_limits[0].elements[k].speed.value) << 
                                                 " map.intersections[0].elements[i].speed_limits[0].elements[k].speed.value: " << ros->map.intersections[0].elements[i].speed_limits[0].elements[k].speed.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].speed_limits[0].elements[k].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].speed_limits[0].elements[k].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                    return false;
                                }
                        }
                    }
                    
                    // Field name: lane_set
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255)
                    int16_t* _tmp_7998 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_7998;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_7998 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007227\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set. size: " << int(*_tmp_7998);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                        return false;
                    }
                    
                    
                    for(int l = 0; l < _if__tmp_7998; l++) {
                        dsrc_v2_dsrc_msgs::msg::GenericLane seqof_l;  // SEQUENCE
                        ros->map.intersections[0].elements[i].lane_set.elements.push_back(seqof_l);
                    
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
                            uint8_t* _ext_flag_3598 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007228\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].: " << int(*_ext_flag_3598);
                            }
                            
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_7999;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].name.push_back(_tmp_7999);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007229\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].name " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_8000;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].ingress_approach.push_back(_tmp_8000);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007230\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].ingress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_8001;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].egress_approach.push_back(_tmp_8001);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007231\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].egress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_8002;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].maneuvers.push_back(_tmp_8002);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007232\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].maneuvers " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ConnectsToList _tmp_8003;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to.push_back(_tmp_8003);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007233\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::OverlayLaneList _tmp_8004;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].overlays.push_back(_tmp_8004);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007234\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].overlays " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::GenericLaneRegional _tmp_8005;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].regional.push_back(_tmp_8005);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007235\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].regional " << tools::green("present");
                            }
                            
                            // Field name: lane_id
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_8006 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_8006;
                            ros->map.intersections[0].elements[i].lane_set.elements[l].lane_id.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007236\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].lane_id.value) << 
                                             " map.intersections[0].elements[i].lane_set.elements[l].lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].lane_id.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                            
                            if(ros->map.intersections[0].elements[i].lane_set.elements[l].name.size() != 0) {
                                // Field name: name
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_8007 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8007 + 1;
                                buffer += 1;
                                
                                int _if__tmp_8007 = __aux64__;
                                for(int m = 0; m < _if__tmp_8007; m++) {  // DescriptiveName
                                    char* __tmp__ = (char*)buffer++;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].name[0].value += *__tmp__;
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[i].lane_set.elements[l].ingress_approach.size() != 0) {
                                // Field name: ingress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_8008 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_8008;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].ingress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007237\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].ingress_approach[0].value) << 
                                                 " map.intersections[0].elements[i].lane_set.elements[l].ingress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].ingress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].ingress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].ingress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[i].lane_set.elements[l].egress_approach.size() != 0) {
                                // Field name: egress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_8009 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_8009;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].egress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007238\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].egress_approach[0].value) << 
                                                 " map.intersections[0].elements[i].lane_set.elements[l].egress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].egress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].egress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].egress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
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
                                    dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_8010;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.regional.push_back(_tmp_8010);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007239\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.regional " << tools::green("present");
                                }
                                
                                // Field name: directional_use
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                uint8_t* _tmp_8011 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8011 + 2;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007240\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.directional_use.value: " << __aux64__;
                                
                                int _if__tmp_8011 = __aux64__;
                                for(int n = 0; n < _if__tmp_8011; n++) {
                                    uint8_t __c__;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.directional_use.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.directional_use.values[n] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.directional_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.directional_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                    return false;
                                }
                                
                                // Field name: shared_with
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                uint8_t* _tmp_8012 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8012 + 10;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007241\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.shared_with.value: " << __aux64__;
                                
                                int _if__tmp_8012 = __aux64__;
                                for(int o = 0; o < _if__tmp_8012; o++) {
                                    uint8_t __c__;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.shared_with.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.shared_with.values[o] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 10) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.shared_with.value' " << (__aux64__) << " is less than allowable (10); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.shared_with.value' " << (__aux64__) << " exceeds max allowable (10); message dropped.";
                                    return false;
                                }
                                
                                // Field name: lane_type
                                // Choice
                                uint8_t* _ext_flag_3599 = (uint8_t*)buffer++; // ext flag
                                
                                   // #0  vehicle   LaneAttributes_Vehicle   
                                   // #1  crosswalk   LaneAttributes_Crosswalk   
                                   // #2  bikeLane   LaneAttributes_Bike   
                                   // #3  sidewalk   LaneAttributes_Sidewalk   
                                   // #4  median   LaneAttributes_Barrier   
                                   // #5  striping   LaneAttributes_Striping   
                                   // #6  trackedVehicle   LaneAttributes_TrackedVehicle   
                                   // #7  parking   LaneAttributes_Parking   
                                uint8_t _choice_265 = *(buffer++);
                                
                                if(*_ext_flag_3599)
                                    _choice_265 += 7 + 1; // Ext addition
                                
                                if(_choice_265 == 0) {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesVehicle _tmp_8013;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle.push_back(_tmp_8013);
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    uint8_t* _ext_flag_3600 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007242\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle[0].: " << int(*_ext_flag_3600);
                                    }
                                    
                                    uint8_t* _tmp_8014 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8014 + 8;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007243\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8014 = __aux64__;
                                    for(int p = 0; p < _if__tmp_8014; p++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle[0].values[p] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_265 == 1)  // CHOICE LaneTypeAttributes  fieldName(crosswalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesCrosswalk _tmp_8015;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.crosswalk.push_back(_tmp_8015);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8016 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8016 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007244\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.crosswalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8016 = __aux64__;
                                    for(int q = 0; q < _if__tmp_8016; q++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.crosswalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.crosswalk[0].values[q] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_265 == 2)  // CHOICE LaneTypeAttributes  fieldName(bike_lane)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBike _tmp_8017;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.bike_lane.push_back(_tmp_8017);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8018 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8018 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007245\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.bike_lane[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8018 = __aux64__;
                                    for(int r = 0; r < _if__tmp_8018; r++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.bike_lane[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.bike_lane[0].values[r] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_265 == 3)  // CHOICE LaneTypeAttributes  fieldName(sidewalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesSidewalk _tmp_8019;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.sidewalk.push_back(_tmp_8019);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8020 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8020 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007246\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.sidewalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8020 = __aux64__;
                                    for(int s = 0; s < _if__tmp_8020; s++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.sidewalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.sidewalk[0].values[s] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_265 == 4)  // CHOICE LaneTypeAttributes  fieldName(median)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBarrier _tmp_8021;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.median.push_back(_tmp_8021);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8022 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8022 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007247\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.median[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8022 = __aux64__;
                                    for(int t = 0; t < _if__tmp_8022; t++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.median[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.median[0].values[t] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_265 == 5)  // CHOICE LaneTypeAttributes  fieldName(striping)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesStriping _tmp_8023;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.striping.push_back(_tmp_8023);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8024 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8024 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007248\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.striping[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8024 = __aux64__;
                                    for(int u = 0; u < _if__tmp_8024; u++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.striping[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.striping[0].values[u] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_265 == 6)  // CHOICE LaneTypeAttributes  fieldName(tracked_vehicle)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesTrackedVehicle _tmp_8025;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.tracked_vehicle.push_back(_tmp_8025);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8026 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8026 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007249\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.tracked_vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8026 = __aux64__;
                                    for(int v = 0; v < _if__tmp_8026; v++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.tracked_vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.tracked_vehicle[0].values[v] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_265 == 7)  // CHOICE LaneTypeAttributes  fieldName(parking)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesParking _tmp_8027;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.parking.push_back(_tmp_8027);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8028 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8028 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007250\033[0m| map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.parking[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8028 = __aux64__;
                                    for(int w = 0; w < _if__tmp_8028; w++) {
                                        uint8_t __c__;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.parking[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.parking[0].values[w] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else
                                {
                                    uint16_t* _tmp_8029 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2 + int(*_tmp_8029);            // Ignoring opentype data
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.intersections[0].elements[i].lane_set.elements[l].maneuvers.size() != 0) {
                                // Field name: maneuvers
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                uint8_t* _tmp_8030 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8030 + 12;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007251\033[0m| map.intersections[0].elements[i].lane_set.elements[l].maneuvers[0].value: " << __aux64__;
                                
                                int _if__tmp_8030 = __aux64__;
                                for(int x = 0; x < _if__tmp_8030; x++) {
                                    uint8_t __c__;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].maneuvers[0].values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].maneuvers[0].values[x] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].maneuvers[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].maneuvers[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: node_list
                            // Choice
                            uint8_t* _ext_flag_3601 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  nodes   NodeSetXY   
                               // #1  computed   ComputedLane   
                            uint8_t _choice_266 = *(buffer++);
                            
                            if(*_ext_flag_3601)
                                _choice_266 += 1 + 1; // Ext addition
                            
                            if(_choice_266 == 0) {
                                dsrc_v2_dsrc_msgs::msg::NodeSetXY _tmp_8031;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes.push_back(_tmp_8031);
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62)
                                int16_t* _tmp_8032 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_8032;
                                __aux64__ += 2;     // +min
                                
                                int _if__tmp_8032 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007252\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0]. size: " << int(*_tmp_8032);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 63) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].value' " << (__aux64__) << " exceeds max allowable (63); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int y = 0; y < _if__tmp_8032; y++) {
                                    dsrc_v2_dsrc_msgs::msg::NodeXY seqof_y;  // SEQUENCE
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements.push_back(seqof_y);
                                
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_3602 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007253\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].: " << int(*_ext_flag_3602);
                                        }
                                        
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXY _tmp_8033;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes.push_back(_tmp_8033);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007254\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes " << tools::green("present");
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
                                        uint8_t _choice_267 = *(buffer++);
                                        
                                        if(_choice_267 == 0) {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY20b _tmp_8034;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1.push_back(_tmp_8034);
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8035 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value = *_tmp_8035;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value += -512;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007255\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8036 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value = *_tmp_8036;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value += -512;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007256\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy1[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_267 == 1)  // CHOICE NodeOffsetPointXY  fieldName(node_xy2)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY22b _tmp_8037;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2.push_back(_tmp_8037);
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8038 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value = *_tmp_8038;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value += -1024;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007257\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8039 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value = *_tmp_8039;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value += -1024;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007258\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy2[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_267 == 2)  // CHOICE NodeOffsetPointXY  fieldName(node_xy3)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY24b _tmp_8040;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3.push_back(_tmp_8040);
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8041 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value = *_tmp_8041;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value += -2048;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007259\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8042 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value = *_tmp_8042;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value += -2048;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007260\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy3[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_267 == 3)  // CHOICE NodeOffsetPointXY  fieldName(node_xy4)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY26b _tmp_8043;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4.push_back(_tmp_8043);
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8044 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value = *_tmp_8044;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value += -4096;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007261\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8045 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value = *_tmp_8045;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value += -4096;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007262\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy4[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_267 == 4)  // CHOICE NodeOffsetPointXY  fieldName(node_xy5)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY28b _tmp_8046;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5.push_back(_tmp_8046);
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8047 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value = *_tmp_8047;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value += -8192;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007263\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8048 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value = *_tmp_8048;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value += -8192;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007264\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy5[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_267 == 5)  // CHOICE NodeOffsetPointXY  fieldName(node_xy6)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY32b _tmp_8049;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6.push_back(_tmp_8049);
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8050 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value = *_tmp_8050;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value += -32768;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007265\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8051 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value = *_tmp_8051;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value += -32768;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007266\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_xy6[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_267 == 6)  // CHOICE NodeOffsetPointXY  fieldName(node_lat_lon)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeLLmD64b _tmp_8052;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon.push_back(_tmp_8052);
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                
                                                // Field name: lon
                                                // Real
                                                // Double
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_8053 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value = *_tmp_8053;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value += -1800000000;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007267\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lon.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: lat
                                                // Real
                                                // Double
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_8054 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value = *_tmp_8054;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value += -900000000;
                                                __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007268\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat: " <<
                                                                 ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta.node_lat_lon[0].lat.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(_choice_267) << ") selected in CHOICE NodeOffsetPointXY in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].delta'; message dropped.";
                                            return false;
                                        }
                                        
                                        if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes.size() != 0) {
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
                                                uint8_t* _ext_flag_3618 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007269\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].: " << int(*_ext_flag_3618);
                                                }
                                                
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeXYList _tmp_8055;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node.push_back(_tmp_8055);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007270\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_8056;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled.push_back(_tmp_8056);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007271\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_8057;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled.push_back(_tmp_8057);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007272\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::LaneDataAttributeList _tmp_8058;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data.push_back(_tmp_8058);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007273\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_8059;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width.push_back(_tmp_8059);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007274\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_8060;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation.push_back(_tmp_8060);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007275\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXYRegional _tmp_8061;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].regional.push_back(_tmp_8061);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007276\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].regional " << tools::green("present");
                                                }
                                                
                                                if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node.size() != 0) {
                                                    // Field name: local_node
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8062 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8062;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8062 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007277\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0]. size: " << int(*_tmp_8062);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int z = 0; z < _if__tmp_8062; z++) {
                                                        dsrc_v2_dsrc_msgs::msg::NodeAttributeXY seqof_z;  // ENUMERATED
                                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements.push_back(seqof_z);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) datatype(Int32)
                                                        uint8_t* _ext_flag_3619 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007278\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].: " << int(*_ext_flag_3619);
                                                        }
                                                        
                                                        uint8_t* _tmp_8063 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_8063;
                                                        __aux64__ += 0;
                                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].value' " << (__aux64__) << " exceeds max allowable (11); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007279\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].value) << 
                                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].local_node[0].elements[z].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled.size() != 0) {
                                                    // Field name: disabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8064 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8064;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8064 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007280\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0]. size: " << int(*_tmp_8064);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int a = 0; a < _if__tmp_8064; a++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_a;  // ENUMERATED
                                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements.push_back(seqof_a);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_3620 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007281\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].: " << int(*_ext_flag_3620);
                                                        }
                                                        
                                                        uint8_t* _tmp_8065 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_8065;
                                                        __aux64__ += 0;
                                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007282\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].value) << 
                                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].disabled[0].elements[a].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled.size() != 0) {
                                                    // Field name: enabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8066 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8066;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8066 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007283\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0]. size: " << int(*_tmp_8066);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int b = 0; b < _if__tmp_8066; b++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_b;  // ENUMERATED
                                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements.push_back(seqof_b);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_3621 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007284\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].: " << int(*_ext_flag_3621);
                                                        }
                                                        
                                                        uint8_t* _tmp_8067 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_8067;
                                                        __aux64__ += 0;
                                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007285\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].value) << 
                                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].enabled[0].elements[b].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data.size() != 0) {
                                                    // Field name: data
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8068 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8068;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8068 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007286\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0]. size: " << int(*_tmp_8068);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int c = 0; c < _if__tmp_8068; c++) {
                                                        dsrc_v2_dsrc_msgs::msg::LaneDataAttribute seqof_c;  // CHOICE
                                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements.push_back(seqof_c);
                                                    
                                                        // Choice
                                                        uint8_t* _ext_flag_3622 = (uint8_t*)buffer++; // ext flag
                                                        
                                                           // #0  pathEndPointAngle   DeltaAngle   
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle   
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle   
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle   
                                                           // #4  laneAngle   MergeDivergeNodeAngle   
                                                           // #5  speedLimits   SpeedLimitList   
                                                           // #6  regional   LaneDataAttribute_regional   
                                                        uint8_t _choice_268 = *(buffer++);
                                                        
                                                        if(*_ext_flag_3622)
                                                            _choice_268 += 6 + 1; // Ext addition
                                                        
                                                        if(_choice_268 == 0) {
                                                            dsrc_v2_dsrc_msgs::msg::DeltaAngle _tmp_8069;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].path_end_point_angle.push_back(_tmp_8069);
                                                        
                                                            // Integer
                                                            // INT16  min(-150) max(150) span(301) datatype(Int16)
                                                            uint16_t* _tmp_8070 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_8070;
                                                            __aux64__ += -150;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].path_end_point_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007287\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].path_end_point_angle[0].value) << 
                                                                             " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].path_end_point_angle[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].path_end_point_angle[0].value' " << (__aux64__) << " is less than allowable (-150); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].path_end_point_angle[0].value' " << (__aux64__) << " exceeds max allowable (150); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_268 == 1)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_center)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_8071;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_center.push_back(_tmp_8071);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_8072 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_8072;
                                                            __aux64__ += -128;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_center[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007288\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_center[0].value) << 
                                                                             " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_center[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_center[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_268 == 2)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_left)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_8073;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_left.push_back(_tmp_8073);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_8074 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_8074;
                                                            __aux64__ += -128;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_left[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007289\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_left[0].value) << 
                                                                             " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_left[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_left[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_268 == 3)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_right)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_8075;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_right.push_back(_tmp_8075);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_8076 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_8076;
                                                            __aux64__ += -128;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_right[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007290\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_right[0].value) << 
                                                                             " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_right[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_crown_point_right[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_268 == 4)  // CHOICE LaneDataAttribute  fieldName(lane_angle)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::MergeDivergeNodeAngle _tmp_8077;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_angle.push_back(_tmp_8077);
                                                        
                                                            // Integer
                                                            // INT16  min(-180) max(180) span(361) datatype(Int16)
                                                            uint16_t* _tmp_8078 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_8078;
                                                            __aux64__ += -180;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007291\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_angle[0].value) << 
                                                                             " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_angle[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_angle[0].value' " << (__aux64__) << " is less than allowable (-180); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].lane_angle[0].value' " << (__aux64__) << " exceeds max allowable (180); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_268 == 5)  // CHOICE LaneDataAttribute  fieldName(speed_limits)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_8079;
                                                            ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits.push_back(_tmp_8079);
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9)
                                                            int16_t* _tmp_8080 = (int16_t*)buffer;
                                                            buffer += 2;
                                                            __aux64__ = *_tmp_8080;
                                                            __aux64__ += 1;     // +min
                                                            
                                                            int _if__tmp_8080 = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007292\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0]. size: " << int(*_tmp_8080);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 9) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                                                                return false;
                                                            }
                                                            
                                                            
                                                            for(int d = 0; d < _if__tmp_8080; d++) {
                                                                dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_d;  // SEQUENCE
                                                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements.push_back(seqof_d);
                                                            
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    
                                                                    // Field name: type
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) datatype(Int32)
                                                                    uint8_t* _ext_flag_3623 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007293\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.: " << int(*_ext_flag_3623);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_8081 = (uint8_t*) buffer++;
                                                                    __aux64__ = *_tmp_8081;
                                                                    __aux64__ += 0;
                                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.value = __aux64__;
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                                        return false;
                                                                    }
                                                                    
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007294\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.value) << 
                                                                                     " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].type.value);
                                                                    }
                                                                    
                                                                    // Field name: speed
                                                                    // Integer
                                                                    // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                                                    uint16_t* _tmp_8082 = (uint16_t*) buffer; buffer += 2;
                                                                    __aux64__ = *_tmp_8082;
                                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].speed.value = __aux64__;
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007295\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].speed.value) << 
                                                                                     " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].speed.value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].speed.value;
                                                                    }
                                                                    
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].data[0].elements[c].speed_limits[0].elements[d].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                                        return false;
                                                                    }
                                                            }
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            uint16_t* _tmp_8083 = (uint16_t*)buffer;  // OpenType length
                                                            buffer += 2 + int(*_tmp_8083);            // Ignoring opentype data
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width.size() != 0) {
                                                    // Field name: d_width
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_8084 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value = *_tmp_8084;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value += -512;
                                                    __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007296\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0]: " <<
                                                                     ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_width[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation.size() != 0) {
                                                    // Field name: d_elevation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_8085 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value = *_tmp_8085;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value += -512;
                                                    __aux64__ = ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007297\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value) << " map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0]: " <<
                                                                     ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].d_elevation[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_3618) { // from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0]. 
                                                    uint8_t* _tmp_8086 = (uint8_t*) buffer++;  // number of extensions
                                                    bool _array_92[*_tmp_8086];
                                                    
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007298\033[0m| Reading number of exts from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].attributes[0].: " << static_cast<unsigned int>(*_tmp_8086);
                                                    
                                                    // Extensions bytemap
                                                    for(int i = 0; i < *_tmp_8086; i++)
                                                        _array_92[i] = (*buffer++) != 0;
                                                    
                                                    // Discarding unknown OpenType containers
                                                    for(int i = 0; i < *_tmp_8086; i++) {
                                                        uint16_t* _tmp_8087 = (uint16_t*)buffer;  // OpenType length
                                                        buffer += 2;
                                                    
                                                        if(debug) {
                                                        }
                                                    
                                                        for(int i = 0; i < *_tmp_8087; i++)
                                                            buffer++;
                                                    }
                                                    
                                                }
                                        }
                                        if(*_ext_flag_3602) { // from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y]. 
                                            uint8_t* _tmp_8088 = (uint8_t*) buffer++;  // number of extensions
                                            bool _array_93[*_tmp_8088];
                                            
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007299\033[0m| Reading number of exts from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.nodes[0].elements[y].: " << static_cast<unsigned int>(*_tmp_8088);
                                            
                                            // Extensions bytemap
                                            for(int i = 0; i < *_tmp_8088; i++)
                                                _array_93[i] = (*buffer++) != 0;
                                            
                                            // Discarding unknown OpenType containers
                                            for(int i = 0; i < *_tmp_8088; i++) {
                                                uint16_t* _tmp_8089 = (uint16_t*)buffer;  // OpenType length
                                                buffer += 2;
                                            
                                                if(debug) {
                                                }
                                            
                                                for(int i = 0; i < *_tmp_8089; i++)
                                                    buffer++;
                                            }
                                            
                                        }
                                }
                            }
                            else if(_choice_266 == 1)  // CHOICE NodeListXY  fieldName(computed)
                            {
                                dsrc_v2_dsrc_msgs::msg::ComputedLane _tmp_8090;
                                ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed.push_back(_tmp_8090);
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_3626 = (uint8_t*) buffer++;  // Read ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007300\033[0m| Reading ext flag from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].: " << int(*_ext_flag_3626);
                                    }
                                    
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::Angle _tmp_8091;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy.push_back(_tmp_8091);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007301\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_8092;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis.push_back(_tmp_8092);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007302\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_8093;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis.push_back(_tmp_8093);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007303\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ComputedLaneRegional _tmp_8094;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].regional.push_back(_tmp_8094);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007304\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].regional " << tools::green("present");
                                    }
                                    
                                    // Field name: reference_lane_id
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_8095 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_8095;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].reference_lane_id.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007305\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_xaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_269 = *(buffer++);
                                    
                                    if(_choice_269 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_8096;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.small.push_back(_tmp_8096);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_8097 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8097;
                                        __aux64__ += -2047;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007306\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_269 == 1)  // CHOICE ComputedLane_offsetXaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_8098;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.large.push_back(_tmp_8098);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_8099 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8099;
                                        __aux64__ += -32767;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007307\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_269) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_yaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_270 = *(buffer++);
                                    
                                    if(_choice_270 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_8100;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.small.push_back(_tmp_8100);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_8101 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8101;
                                        __aux64__ += -2047;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007308\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_270 == 1)  // CHOICE ComputedLane_offsetYaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_8102;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.large.push_back(_tmp_8102);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_8103 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8103;
                                        __aux64__ += -32767;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007309\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_270) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field name: rotate_xy
                                        // Integer
                                        // UINT16  min(0) max(28800) span(28801) datatype(UInt16)
                                        uint16_t* _tmp_8104 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8104;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007310\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " exceeds max allowable (28800); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field name: scale_xaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_8105 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8105;
                                        __aux64__ += -2048;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007311\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field name: scale_yaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_8106 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8106;
                                        __aux64__ += -2048;
                                        ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007312\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_3626) { // from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0]. 
                                        uint8_t* _tmp_8107 = (uint8_t*) buffer++;  // number of extensions
                                        bool _array_94[*_tmp_8107];
                                        
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007313\033[0m| Reading number of exts from ros->map.intersections[0].elements[i].lane_set.elements[l].node_list.computed[0].: " << static_cast<unsigned int>(*_tmp_8107);
                                        
                                        // Extensions bytemap
                                        for(int i = 0; i < *_tmp_8107; i++)
                                            _array_94[i] = (*buffer++) != 0;
                                        
                                        // Discarding unknown OpenType containers
                                        for(int i = 0; i < *_tmp_8107; i++) {
                                            uint16_t* _tmp_8108 = (uint16_t*)buffer;  // OpenType length
                                            buffer += 2;
                                        
                                            if(debug) {
                                            }
                                        
                                            for(int i = 0; i < *_tmp_8108; i++)
                                                buffer++;
                                        }
                                        
                                    }
                            }
                            else
                            {
                                uint16_t* _tmp_8109 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_8109);            // Ignoring opentype data
                            }
                            
                            if(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to.size() != 0) {
                                // Field name: connects_to
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                int16_t* _tmp_8110 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_8110;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_8110 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007314\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0]. size: " << int(*_tmp_8110);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int e = 0; e < _if__tmp_8110; e++) {
                                    dsrc_v2_dsrc_msgs::msg::Connection seqof_e;  // SEQUENCE
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements.push_back(seqof_e);
                                
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::IntersectionReferenceID _tmp_8111;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection.push_back(_tmp_8111);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007315\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::SignalGroupID _tmp_8112;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group.push_back(_tmp_8112);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007316\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RestrictionClassID _tmp_8113;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class.push_back(_tmp_8113);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007317\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_8114;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id.push_back(_tmp_8114);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007318\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id " << tools::green("present");
                                        }
                                        
                                        // Field name: connecting_lane
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_8115;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver.push_back(_tmp_8115);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007319\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver " << tools::green("present");
                                            }
                                            
                                            // Field name: lane
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8116 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8116;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.lane.value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007320\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.lane.value) << 
                                                             " map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.lane.value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.lane.value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.lane.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.lane.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                            
                                            if(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver.size() != 0) {
                                                // Field name: maneuver
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                uint8_t* _tmp_8117 = (uint8_t*)buffer;
                                                __aux64__ = *_tmp_8117 + 12;
                                                buffer += 1;
                                                
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007321\033[0m| map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver[0].value: " << __aux64__;
                                                
                                                int _if__tmp_8117 = __aux64__;
                                                for(int f = 0; f < _if__tmp_8117; f++) {
                                                    uint8_t __c__;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver[0].values.push_back(__c__);
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver[0].values[f] = (*__b__ == 1);
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connecting_lane.maneuver[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                    return false;
                                                }
                                            }
                                        
                                        if(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection.size() != 0) {
                                            // Field name: remote_intersection
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_8118;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region.push_back(_tmp_8118);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007322\033[0m| ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region " << tools::green("present");
                                                }
                                                
                                                if(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region.size() != 0) {
                                                    // Field name: region
                                                    // Integer
                                                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                    uint16_t* _tmp_8119 = (uint16_t*) buffer; buffer += 2;
                                                    __aux64__ = *_tmp_8119;
                                                    ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region[0].value = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007323\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region[0].value) << 
                                                                     " map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region[0].value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                        return false;
                                                    }
                                                }
                                                
                                                // Field name: id
                                                // Integer
                                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                uint16_t* _tmp_8120 = (uint16_t*) buffer; buffer += 2;
                                                __aux64__ = *_tmp_8120;
                                                ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].id.value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007324\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].id.value) << 
                                                                 " map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].id.value: " << ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].id.value;
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].remote_intersection[0].id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                    return false;
                                                }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group.size() != 0) {
                                            // Field name: signal_group
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8121 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8121;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007325\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group[0].value) << 
                                                             " map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].signal_group[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class.size() != 0) {
                                            // Field name: user_class
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8122 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8122;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007326\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class[0].value) << 
                                                             " map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].user_class[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id.size() != 0) {
                                            // Field name: connection_id
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8123 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8123;
                                            ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007327\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id[0].value) << 
                                                             " map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id[0].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].connects_to[0].elements[e].connection_id[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[i].lane_set.elements[l].overlays.size() != 0) {
                                // Field name: overlays
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5)
                                int16_t* _tmp_8124 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_8124;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_8124 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007328\033[0m| SequenceOf ros->map.intersections[0].elements[i].lane_set.elements[l].overlays[0]. size: " << int(*_tmp_8124);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].overlays[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 5) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].overlays[0].value' " << (__aux64__) << " exceeds max allowable (5); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int g = 0; g < _if__tmp_8124; g++) {
                                    dsrc_v2_dsrc_msgs::msg::LaneID seqof_g;  // INTEGER
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].overlays[0].elements.push_back(seqof_g);
                                
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_8125 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_8125;
                                    ros->map.intersections[0].elements[i].lane_set.elements[l].overlays[0].elements[g].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007329\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[i].lane_set.elements[l].overlays[0].elements[g].value) << 
                                                     " map.intersections[0].elements[i].lane_set.elements[l].overlays[0].elements[g].value: " << static_cast<int>(ros->map.intersections[0].elements[i].lane_set.elements[l].overlays[0].elements[g].value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].overlays[0].elements[g].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[i].lane_set.elements[l].overlays[0].elements[g].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_3598) { // from ros->map.intersections[0].elements[i].lane_set.elements[l]. 
                                uint8_t* _tmp_8126 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_95[*_tmp_8126];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007330\033[0m| Reading number of exts from ros->map.intersections[0].elements[i].lane_set.elements[l].: " << static_cast<unsigned int>(*_tmp_8126);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_8126; i++)
                                    _array_95[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_8126; i++) {
                                    uint16_t* _tmp_8127 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_8127; i++)
                                        buffer++;
                                }
                                
                            }
                    }
                    
                    // Field name: preempt_priority_data  // avoided
                    // Field name: regional  // avoided
                    if(*_ext_flag_3592) { // from ros->map.intersections[0].elements[i]. 
                        uint8_t* _tmp_8128 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_96[*_tmp_8128];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007331\033[0m| Reading number of exts from ros->map.intersections[0].elements[i].: " << static_cast<unsigned int>(*_tmp_8128);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_8128; i++)
                            _array_96[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_8128; i++) {
                            uint16_t* _tmp_8129 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_8129; i++)
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
            int16_t* _tmp_8130 = (int16_t*)buffer;
            buffer += 2;
            __aux64__ = *_tmp_8130;
            __aux64__ += 1;     // +min
            
            int _if__tmp_8130 = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m007332\033[0m| SequenceOf ros->map.road_segments[0]. size: " << int(*_tmp_8130);
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
            
            
            for(int h = 0; h < _if__tmp_8130; h++) {
                dsrc_v2_dsrc_msgs::msg::RoadSegment seqof_h;  // SEQUENCE
                ros->map.road_segments[0].elements.push_back(seqof_h);
            
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
                    uint8_t* _ext_flag_3629 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007333\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].: " << int(*_ext_flag_3629);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_8131;
                        ros->map.road_segments[0].elements[h].name.push_back(_tmp_8131);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007334\033[0m| ros->map.road_segments[0].elements[h].name " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::LaneWidth _tmp_8132;
                        ros->map.road_segments[0].elements[h].lane_width.push_back(_tmp_8132);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007335\033[0m| ros->map.road_segments[0].elements[h].lane_width " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_8133;
                        ros->map.road_segments[0].elements[h].speed_limits.push_back(_tmp_8133);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007336\033[0m| ros->map.road_segments[0].elements[h].speed_limits " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RoadSegmentRegional _tmp_8134;
                        ros->map.road_segments[0].elements[h].regional.push_back(_tmp_8134);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007337\033[0m| ros->map.road_segments[0].elements[h].regional " << tools::green("present");
                    }
                    
                    if(ros->map.road_segments[0].elements[h].name.size() != 0) {
                        // Field name: name
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_8135 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_8135 + 1;
                        buffer += 1;
                        
                        int _if__tmp_8135 = __aux64__;
                        for(int i = 0; i < _if__tmp_8135; i++) {  // DescriptiveName
                            char* __tmp__ = (char*)buffer++;
                            ros->map.road_segments[0].elements[h].name[0].value += *__tmp__;
                        }
                    }
                    
                    // Field name: id
                        // RoadSegmentReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         RoadSegmentID       
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_8136;
                            ros->map.road_segments[0].elements[h].id.region.push_back(_tmp_8136);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007338\033[0m| ros->map.road_segments[0].elements[h].id.region " << tools::green("present");
                        }
                        
                        if(ros->map.road_segments[0].elements[h].id.region.size() != 0) {
                            // Field name: region
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_8137 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_8137;
                            ros->map.road_segments[0].elements[h].id.region[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007339\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].id.region[0].value) << 
                                             " map.road_segments[0].elements[h].id.region[0].value: " << ros->map.road_segments[0].elements[h].id.region[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: id
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_8138 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_8138;
                        ros->map.road_segments[0].elements[h].id.id.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007340\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].id.id.value) << 
                                         " map.road_segments[0].elements[h].id.id.value: " << ros->map.road_segments[0].elements[h].id.id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    
                    // Field name: revision
                    // Integer
                    // UINT8  min(0) max(127) span(128) datatype(UInt8)
                    uint8_t* _tmp_8139 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_8139;
                    ros->map.road_segments[0].elements[h].revision.value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007341\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].revision.value) << 
                                     " map.road_segments[0].elements[h].revision.value: " << static_cast<int>(ros->map.road_segments[0].elements[h].revision.value);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].revision.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].revision.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                        return false;
                    }
                    
                    // Field name: ref_point
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3630 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].ref_point.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007342\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].ref_point.: " << int(*_ext_flag_3630);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Elevation _tmp_8140;
                            ros->map.road_segments[0].elements[h].ref_point.elevation.push_back(_tmp_8140);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007343\033[0m| ros->map.road_segments[0].elements[h].ref_point.elevation " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Position3DRegional _tmp_8141;
                            ros->map.road_segments[0].elements[h].ref_point.regional.push_back(_tmp_8141);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007344\033[0m| ros->map.road_segments[0].elements[h].ref_point.regional " << tools::green("present");
                        }
                        
                        // Field name: lat
                        // Real
                        // Double
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_8142 = (uint32_t*) buffer; buffer += 4;
                        ros->map.road_segments[0].elements[h].ref_point.lat.value = *_tmp_8142;
                        ros->map.road_segments[0].elements[h].ref_point.lat.value += -900000000;
                        __aux64__ = ros->map.road_segments[0].elements[h].ref_point.lat.value;
                        ros->map.road_segments[0].elements[h].ref_point.lat.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].ref_point.lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].ref_point.lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007345\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].ref_point.lat.value) << " map.road_segments[0].elements[h].ref_point.lat: " <<
                                         ros->map.road_segments[0].elements[h].ref_point.lat.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longint
                        // Real
                        // Double
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_8143 = (uint32_t*) buffer; buffer += 4;
                        ros->map.road_segments[0].elements[h].ref_point.longint.value = *_tmp_8143;
                        ros->map.road_segments[0].elements[h].ref_point.longint.value += -1800000000;
                        __aux64__ = ros->map.road_segments[0].elements[h].ref_point.longint.value;
                        ros->map.road_segments[0].elements[h].ref_point.longint.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].ref_point.longint.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].ref_point.longint.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007346\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].ref_point.longint.value) << " map.road_segments[0].elements[h].ref_point.longint: " <<
                                         ros->map.road_segments[0].elements[h].ref_point.longint.value << " (" << __aux64__ << ")";
                        }
                        
                        if(ros->map.road_segments[0].elements[h].ref_point.elevation.size() != 0) {
                            // Field name: elevation
                            // Real
                            // Float
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_8144 = (uint16_t*) buffer; buffer += 2;
                            ros->map.road_segments[0].elements[h].ref_point.elevation[0].value = *_tmp_8144;
                            ros->map.road_segments[0].elements[h].ref_point.elevation[0].value += -4096;
                            __aux64__ = ros->map.road_segments[0].elements[h].ref_point.elevation[0].value;
                            ros->map.road_segments[0].elements[h].ref_point.elevation[0].value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].ref_point.elevation[0].value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].ref_point.elevation[0].value' " << (__aux64__) << " exceeds max allowable (61439); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007347\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].ref_point.elevation[0].value) << " map.road_segments[0].elements[h].ref_point.elevation[0]: " <<
                                             ros->map.road_segments[0].elements[h].ref_point.elevation[0].value << " (" << __aux64__ << ")";
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3630) { // from ros->map.road_segments[0].elements[h].ref_point. 
                            uint8_t* _tmp_8145 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_97[*_tmp_8145];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007348\033[0m| Reading number of exts from ros->map.road_segments[0].elements[h].ref_point.: " << static_cast<unsigned int>(*_tmp_8145);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_8145; i++)
                                _array_97[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_8145; i++) {
                                uint16_t* _tmp_8146 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_8146; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->map.road_segments[0].elements[h].lane_width.size() != 0) {
                        // Field name: lane_width
                        // Integer
                        // UINT16  min(0) max(32767) span(32768) datatype(UInt16)
                        uint16_t* _tmp_8147 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_8147;
                        ros->map.road_segments[0].elements[h].lane_width[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007349\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].lane_width[0].value) << 
                                         " map.road_segments[0].elements[h].lane_width[0].value: " << ros->map.road_segments[0].elements[h].lane_width[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].lane_width[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].lane_width[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->map.road_segments[0].elements[h].speed_limits.size() != 0) {
                        // Field name: speed_limits
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9)
                        int16_t* _tmp_8148 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_8148;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_8148 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007350\033[0m| SequenceOf ros->map.road_segments[0].elements[h].speed_limits[0]. size: " << int(*_tmp_8148);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 9) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                            return false;
                        }
                        
                        
                        for(int j = 0; j < _if__tmp_8148; j++) {
                            dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_j;  // SEQUENCE
                            ros->map.road_segments[0].elements[h].speed_limits[0].elements.push_back(seqof_j);
                        
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                
                                // Field name: type
                                // Enumerated
                                // INT32  min(0) max(12) span(13) datatype(Int32)
                                uint8_t* _ext_flag_3634 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007351\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].type.: " << int(*_ext_flag_3634);
                                }
                                
                                uint8_t* _tmp_8149 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_8149;
                                __aux64__ += 0;
                                ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].speed_limits[0].elements[j].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].speed_limits[0].elements[j].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007352\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].type.value) << 
                                                 " map.road_segments[0].elements[h].speed_limits[0].elements[j].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].type.value);
                                }
                                
                                // Field name: speed
                                // Integer
                                // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                uint16_t* _tmp_8150 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_8150;
                                ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].speed.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007353\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].speed.value) << 
                                                 " map.road_segments[0].elements[h].speed_limits[0].elements[j].speed.value: " << ros->map.road_segments[0].elements[h].speed_limits[0].elements[j].speed.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].speed_limits[0].elements[j].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].speed_limits[0].elements[j].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                    return false;
                                }
                        }
                    }
                    
                    // Field name: road_lane_set
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255)
                    int16_t* _tmp_8151 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_8151;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_8151 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007354\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set. size: " << int(*_tmp_8151);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                        return false;
                    }
                    
                    
                    for(int k = 0; k < _if__tmp_8151; k++) {
                        dsrc_v2_dsrc_msgs::msg::GenericLane seqof_k;  // SEQUENCE
                        ros->map.road_segments[0].elements[h].road_lane_set.elements.push_back(seqof_k);
                    
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
                            uint8_t* _ext_flag_3635 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007355\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].: " << int(*_ext_flag_3635);
                            }
                            
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_8152;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].name.push_back(_tmp_8152);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007356\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].name " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_8153;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach.push_back(_tmp_8153);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007357\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_8154;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach.push_back(_tmp_8154);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007358\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_8155;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers.push_back(_tmp_8155);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007359\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::ConnectsToList _tmp_8156;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to.push_back(_tmp_8156);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007360\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::OverlayLaneList _tmp_8157;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays.push_back(_tmp_8157);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007361\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::GenericLaneRegional _tmp_8158;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].regional.push_back(_tmp_8158);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007362\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].regional " << tools::green("present");
                            }
                            
                            // Field name: lane_id
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_8159 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_8159;
                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_id.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007363\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_id.value) << 
                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_id.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                            
                            if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].name.size() != 0) {
                                // Field name: name
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_8160 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8160 + 1;
                                buffer += 1;
                                
                                int _if__tmp_8160 = __aux64__;
                                for(int l = 0; l < _if__tmp_8160; l++) {  // DescriptiveName
                                    char* __tmp__ = (char*)buffer++;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].name[0].value += *__tmp__;
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach.size() != 0) {
                                // Field name: ingress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_8161 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_8161;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007364\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach[0].value) << 
                                                 " map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].ingress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach.size() != 0) {
                                // Field name: egress_approach
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_8162 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_8162;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007365\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach[0].value) << 
                                                 " map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].egress_approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
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
                                    dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_8163;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.regional.push_back(_tmp_8163);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007366\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.regional " << tools::green("present");
                                }
                                
                                // Field name: directional_use
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                uint8_t* _tmp_8164 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8164 + 2;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007367\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.directional_use.value: " << __aux64__;
                                
                                int _if__tmp_8164 = __aux64__;
                                for(int m = 0; m < _if__tmp_8164; m++) {
                                    uint8_t __c__;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.directional_use.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.directional_use.values[m] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.directional_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.directional_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                    return false;
                                }
                                
                                // Field name: shared_with
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                uint8_t* _tmp_8165 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8165 + 10;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007368\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.shared_with.value: " << __aux64__;
                                
                                int _if__tmp_8165 = __aux64__;
                                for(int n = 0; n < _if__tmp_8165; n++) {
                                    uint8_t __c__;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.shared_with.values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.shared_with.values[n] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 10) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.shared_with.value' " << (__aux64__) << " is less than allowable (10); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 10) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.shared_with.value' " << (__aux64__) << " exceeds max allowable (10); message dropped.";
                                    return false;
                                }
                                
                                // Field name: lane_type
                                // Choice
                                uint8_t* _ext_flag_3636 = (uint8_t*)buffer++; // ext flag
                                
                                   // #0  vehicle   LaneAttributes_Vehicle   
                                   // #1  crosswalk   LaneAttributes_Crosswalk   
                                   // #2  bikeLane   LaneAttributes_Bike   
                                   // #3  sidewalk   LaneAttributes_Sidewalk   
                                   // #4  median   LaneAttributes_Barrier   
                                   // #5  striping   LaneAttributes_Striping   
                                   // #6  trackedVehicle   LaneAttributes_TrackedVehicle   
                                   // #7  parking   LaneAttributes_Parking   
                                uint8_t _choice_271 = *(buffer++);
                                
                                if(*_ext_flag_3636)
                                    _choice_271 += 7 + 1; // Ext addition
                                
                                if(_choice_271 == 0) {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesVehicle _tmp_8166;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle.push_back(_tmp_8166);
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    uint8_t* _ext_flag_3637 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007369\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle[0].: " << int(*_ext_flag_3637);
                                    }
                                    
                                    uint8_t* _tmp_8167 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8167 + 8;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007370\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8167 = __aux64__;
                                    for(int o = 0; o < _if__tmp_8167; o++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle[0].values[o] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.vehicle[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_271 == 1)  // CHOICE LaneTypeAttributes  fieldName(crosswalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesCrosswalk _tmp_8168;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.crosswalk.push_back(_tmp_8168);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8169 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8169 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007371\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.crosswalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8169 = __aux64__;
                                    for(int p = 0; p < _if__tmp_8169; p++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.crosswalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.crosswalk[0].values[p] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.crosswalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_271 == 2)  // CHOICE LaneTypeAttributes  fieldName(bike_lane)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBike _tmp_8170;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.bike_lane.push_back(_tmp_8170);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8171 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8171 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007372\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.bike_lane[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8171 = __aux64__;
                                    for(int q = 0; q < _if__tmp_8171; q++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.bike_lane[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.bike_lane[0].values[q] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.bike_lane[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_271 == 3)  // CHOICE LaneTypeAttributes  fieldName(sidewalk)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesSidewalk _tmp_8172;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.sidewalk.push_back(_tmp_8172);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8173 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8173 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007373\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.sidewalk[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8173 = __aux64__;
                                    for(int r = 0; r < _if__tmp_8173; r++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.sidewalk[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.sidewalk[0].values[r] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.sidewalk[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_271 == 4)  // CHOICE LaneTypeAttributes  fieldName(median)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesBarrier _tmp_8174;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.median.push_back(_tmp_8174);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8175 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8175 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007374\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.median[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8175 = __aux64__;
                                    for(int s = 0; s < _if__tmp_8175; s++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.median[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.median[0].values[s] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.median[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_271 == 5)  // CHOICE LaneTypeAttributes  fieldName(striping)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesStriping _tmp_8176;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.striping.push_back(_tmp_8176);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8177 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8177 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007375\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.striping[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8177 = __aux64__;
                                    for(int t = 0; t < _if__tmp_8177; t++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.striping[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.striping[0].values[t] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.striping[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_271 == 6)  // CHOICE LaneTypeAttributes  fieldName(tracked_vehicle)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesTrackedVehicle _tmp_8178;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.tracked_vehicle.push_back(_tmp_8178);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8179 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8179 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007376\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.tracked_vehicle[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8179 = __aux64__;
                                    for(int u = 0; u < _if__tmp_8179; u++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.tracked_vehicle[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.tracked_vehicle[0].values[u] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.tracked_vehicle[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else if(_choice_271 == 7)  // CHOICE LaneTypeAttributes  fieldName(parking)
                                {
                                    dsrc_v2_dsrc_msgs::msg::LaneAttributesParking _tmp_8180;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.parking.push_back(_tmp_8180);
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    uint8_t* _tmp_8181 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_8181 + 16;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007377\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.parking[0].value: " << __aux64__;
                                    
                                    int _if__tmp_8181 = __aux64__;
                                    for(int v = 0; v < _if__tmp_8181; v++) {
                                        uint8_t __c__;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.parking[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.parking[0].values[v] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].lane_attributes.lane_type.parking[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                }
                                else
                                {
                                    uint16_t* _tmp_8182 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2 + int(*_tmp_8182);            // Ignoring opentype data
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers.size() != 0) {
                                // Field name: maneuvers
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                uint8_t* _tmp_8183 = (uint8_t*)buffer;
                                __aux64__ = *_tmp_8183 + 12;
                                buffer += 1;
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007378\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers[0].value: " << __aux64__;
                                
                                int _if__tmp_8183 = __aux64__;
                                for(int w = 0; w < _if__tmp_8183; w++) {
                                    uint8_t __c__;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers[0].values.push_back(__c__);
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers[0].values[w] = (*__b__ == 1);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].maneuvers[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: node_list
                            // Choice
                            uint8_t* _ext_flag_3638 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  nodes   NodeSetXY   
                               // #1  computed   ComputedLane   
                            uint8_t _choice_272 = *(buffer++);
                            
                            if(*_ext_flag_3638)
                                _choice_272 += 1 + 1; // Ext addition
                            
                            if(_choice_272 == 0) {
                                dsrc_v2_dsrc_msgs::msg::NodeSetXY _tmp_8184;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes.push_back(_tmp_8184);
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62)
                                int16_t* _tmp_8185 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_8185;
                                __aux64__ += 2;     // +min
                                
                                int _if__tmp_8185 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007379\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0]. size: " << int(*_tmp_8185);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 63) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].value' " << (__aux64__) << " exceeds max allowable (63); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int x = 0; x < _if__tmp_8185; x++) {
                                    dsrc_v2_dsrc_msgs::msg::NodeXY seqof_x;  // SEQUENCE
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements.push_back(seqof_x);
                                
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_3639 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007380\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].: " << int(*_ext_flag_3639);
                                        }
                                        
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXY _tmp_8186;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes.push_back(_tmp_8186);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007381\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes " << tools::green("present");
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
                                        uint8_t _choice_273 = *(buffer++);
                                        
                                        if(_choice_273 == 0) {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY20b _tmp_8187;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1.push_back(_tmp_8187);
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8188 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value = *_tmp_8188;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value += -512;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007382\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8189 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value = *_tmp_8189;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value += -512;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007383\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy1[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_273 == 1)  // CHOICE NodeOffsetPointXY  fieldName(node_xy2)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY22b _tmp_8190;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2.push_back(_tmp_8190);
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8191 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value = *_tmp_8191;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value += -1024;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007384\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8192 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value = *_tmp_8192;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value += -1024;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value' " << (__aux64__) << " is less than allowable (-1024); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007385\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy2[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_273 == 2)  // CHOICE NodeOffsetPointXY  fieldName(node_xy3)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY24b _tmp_8193;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3.push_back(_tmp_8193);
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8194 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value = *_tmp_8194;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value += -2048;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007386\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8195 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value = *_tmp_8195;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value += -2048;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007387\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy3[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_273 == 3)  // CHOICE NodeOffsetPointXY  fieldName(node_xy4)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY26b _tmp_8196;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4.push_back(_tmp_8196);
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8197 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value = *_tmp_8197;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value += -4096;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007388\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8198 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value = *_tmp_8198;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value += -4096;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007389\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy4[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_273 == 4)  // CHOICE NodeOffsetPointXY  fieldName(node_xy5)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY28b _tmp_8199;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5.push_back(_tmp_8199);
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8200 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value = *_tmp_8200;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value += -8192;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007390\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8201 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value = *_tmp_8201;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value += -8192;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value' " << (__aux64__) << " is less than allowable (-8192); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007391\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy5[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_273 == 5)  // CHOICE NodeOffsetPointXY  fieldName(node_xy6)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeXY32b _tmp_8202;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6.push_back(_tmp_8202);
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                
                                                // Field name: x
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8203 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value = *_tmp_8203;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value += -32768;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007392\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].x.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: y
                                                // Real
                                                // Float
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                uint16_t* _tmp_8204 = (uint16_t*) buffer; buffer += 2;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value = *_tmp_8204;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value += -32768;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value /= 100.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007393\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_xy6[0].y.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        else if(_choice_273 == 6)  // CHOICE NodeOffsetPointXY  fieldName(node_lat_lon)
                                        {
                                            dsrc_v2_dsrc_msgs::msg::NodeLLmD64b _tmp_8205;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon.push_back(_tmp_8205);
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                
                                                // Field name: lon
                                                // Real
                                                // Double
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_8206 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value = *_tmp_8206;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value += -1800000000;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007394\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lon.value << " (" << __aux64__ << ")";
                                                }
                                                
                                                // Field name: lat
                                                // Real
                                                // Double
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                uint32_t* _tmp_8207 = (uint32_t*) buffer; buffer += 4;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value = *_tmp_8207;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value += -900000000;
                                                __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value /= 1.0E7;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007395\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat: " <<
                                                                 ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta.node_lat_lon[0].lat.value << " (" << __aux64__ << ")";
                                                }
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(_choice_273) << ") selected in CHOICE NodeOffsetPointXY in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].delta'; message dropped.";
                                            return false;
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes.size() != 0) {
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
                                                uint8_t* _ext_flag_3655 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007396\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].: " << int(*_ext_flag_3655);
                                                }
                                                
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeXYList _tmp_8208;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node.push_back(_tmp_8208);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007397\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_8209;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled.push_back(_tmp_8209);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007398\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::SegmentAttributeXYList _tmp_8210;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled.push_back(_tmp_8210);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007399\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::LaneDataAttributeList _tmp_8211;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data.push_back(_tmp_8211);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007400\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_8212;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width.push_back(_tmp_8212);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007401\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::OffsetB10 _tmp_8213;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation.push_back(_tmp_8213);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007402\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation " << tools::green("present");
                                                }
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::NodeAttributeSetXYRegional _tmp_8214;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].regional.push_back(_tmp_8214);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007403\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].regional " << tools::green("present");
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node.size() != 0) {
                                                    // Field name: local_node
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8215 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8215;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8215 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007404\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0]. size: " << int(*_tmp_8215);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int y = 0; y < _if__tmp_8215; y++) {
                                                        dsrc_v2_dsrc_msgs::msg::NodeAttributeXY seqof_y;  // ENUMERATED
                                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements.push_back(seqof_y);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) datatype(Int32)
                                                        uint8_t* _ext_flag_3656 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007405\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].: " << int(*_ext_flag_3656);
                                                        }
                                                        
                                                        uint8_t* _tmp_8216 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_8216;
                                                        __aux64__ += 0;
                                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].value' " << (__aux64__) << " exceeds max allowable (11); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007406\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].value) << 
                                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].local_node[0].elements[y].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled.size() != 0) {
                                                    // Field name: disabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8217 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8217;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8217 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007407\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0]. size: " << int(*_tmp_8217);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int z = 0; z < _if__tmp_8217; z++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_z;  // ENUMERATED
                                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements.push_back(seqof_z);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_3657 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007408\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].: " << int(*_ext_flag_3657);
                                                        }
                                                        
                                                        uint8_t* _tmp_8218 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_8218;
                                                        __aux64__ += 0;
                                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007409\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].value) << 
                                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].disabled[0].elements[z].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled.size() != 0) {
                                                    // Field name: enabled
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8219 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8219;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8219 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007410\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0]. size: " << int(*_tmp_8219);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int a = 0; a < _if__tmp_8219; a++) {
                                                        dsrc_v2_dsrc_msgs::msg::SegmentAttributeXY seqof_a;  // ENUMERATED
                                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements.push_back(seqof_a);
                                                    
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) datatype(Int32)
                                                        uint8_t* _ext_flag_3658 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007411\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].: " << int(*_ext_flag_3658);
                                                        }
                                                        
                                                        uint8_t* _tmp_8220 = (uint8_t*) buffer++;
                                                        __aux64__ = *_tmp_8220;
                                                        __aux64__ += 0;
                                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].value = __aux64__;
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].value' " << (__aux64__) << " exceeds max allowable (37); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007412\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].value) << 
                                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].enabled[0].elements[a].value);
                                                        }
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data.size() != 0) {
                                                    // Field name: data
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8)
                                                    int16_t* _tmp_8221 = (int16_t*)buffer;
                                                    buffer += 2;
                                                    __aux64__ = *_tmp_8221;
                                                    __aux64__ += 1;     // +min
                                                    
                                                    int _if__tmp_8221 = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007413\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0]. size: " << int(*_tmp_8221);
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    
                                                    for(int b = 0; b < _if__tmp_8221; b++) {
                                                        dsrc_v2_dsrc_msgs::msg::LaneDataAttribute seqof_b;  // CHOICE
                                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements.push_back(seqof_b);
                                                    
                                                        // Choice
                                                        uint8_t* _ext_flag_3659 = (uint8_t*)buffer++; // ext flag
                                                        
                                                           // #0  pathEndPointAngle   DeltaAngle   
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle   
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle   
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle   
                                                           // #4  laneAngle   MergeDivergeNodeAngle   
                                                           // #5  speedLimits   SpeedLimitList   
                                                           // #6  regional   LaneDataAttribute_regional   
                                                        uint8_t _choice_274 = *(buffer++);
                                                        
                                                        if(*_ext_flag_3659)
                                                            _choice_274 += 6 + 1; // Ext addition
                                                        
                                                        if(_choice_274 == 0) {
                                                            dsrc_v2_dsrc_msgs::msg::DeltaAngle _tmp_8222;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].path_end_point_angle.push_back(_tmp_8222);
                                                        
                                                            // Integer
                                                            // INT16  min(-150) max(150) span(301) datatype(Int16)
                                                            uint16_t* _tmp_8223 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_8223;
                                                            __aux64__ += -150;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].path_end_point_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007414\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].path_end_point_angle[0].value) << 
                                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].path_end_point_angle[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].path_end_point_angle[0].value' " << (__aux64__) << " is less than allowable (-150); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].path_end_point_angle[0].value' " << (__aux64__) << " exceeds max allowable (150); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_274 == 1)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_center)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_8224;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_center.push_back(_tmp_8224);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_8225 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_8225;
                                                            __aux64__ += -128;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_center[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007415\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_center[0].value) << 
                                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_center[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_center[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_274 == 2)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_left)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_8226;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_left.push_back(_tmp_8226);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_8227 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_8227;
                                                            __aux64__ += -128;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_left[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007416\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_left[0].value) << 
                                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_left[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_left[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_274 == 3)  // CHOICE LaneDataAttribute  fieldName(lane_crown_point_right)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::RoadwayCrownAngle _tmp_8228;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_right.push_back(_tmp_8228);
                                                        
                                                            // Integer
                                                            // INT8  min(-128) max(127) span(256) datatype(Int8)
                                                            uint8_t* _tmp_8229 = (uint8_t*) buffer++;
                                                            __aux64__ = *_tmp_8229;
                                                            __aux64__ += -128;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_right[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007417\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_right[0].value) << 
                                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_right[0].value' " << (__aux64__) << " is less than allowable (-128); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_crown_point_right[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_274 == 4)  // CHOICE LaneDataAttribute  fieldName(lane_angle)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::MergeDivergeNodeAngle _tmp_8230;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_angle.push_back(_tmp_8230);
                                                        
                                                            // Integer
                                                            // INT16  min(-180) max(180) span(361) datatype(Int16)
                                                            uint16_t* _tmp_8231 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = *_tmp_8231;
                                                            __aux64__ += -180;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_angle[0].value = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007418\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_angle[0].value) << 
                                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_angle[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_angle[0].value;
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_angle[0].value' " << (__aux64__) << " is less than allowable (-180); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].lane_angle[0].value' " << (__aux64__) << " exceeds max allowable (180); message dropped.";
                                                                return false;
                                                            }
                                                        }
                                                        else if(_choice_274 == 5)  // CHOICE LaneDataAttribute  fieldName(speed_limits)
                                                        {
                                                            dsrc_v2_dsrc_msgs::msg::SpeedLimitList _tmp_8232;
                                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits.push_back(_tmp_8232);
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9)
                                                            int16_t* _tmp_8233 = (int16_t*)buffer;
                                                            buffer += 2;
                                                            __aux64__ = *_tmp_8233;
                                                            __aux64__ += 1;     // +min
                                                            
                                                            int _if__tmp_8233 = __aux64__;
                                                            
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007419\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0]. size: " << int(*_tmp_8233);
                                                            }
                                                            
                                                            // ******************* MIN validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                                                return false;
                                                            }
                                                            // ******************* MAX validator *******************
                                                            if(VALIDATORS_ENABLED && __aux64__ > 9) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].value' " << (__aux64__) << " exceeds max allowable (9); message dropped.";
                                                                return false;
                                                            }
                                                            
                                                            
                                                            for(int c = 0; c < _if__tmp_8233; c++) {
                                                                dsrc_v2_dsrc_msgs::msg::RegulatorySpeedLimit seqof_c;  // SEQUENCE
                                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements.push_back(seqof_c);
                                                            
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    
                                                                    // Field name: type
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) datatype(Int32)
                                                                    uint8_t* _ext_flag_3660 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007420\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.: " << int(*_ext_flag_3660);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_8234 = (uint8_t*) buffer++;
                                                                    __aux64__ = *_tmp_8234;
                                                                    __aux64__ += 0;
                                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.value = __aux64__;
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                                        return false;
                                                                    }
                                                                    
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007421\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.value) << 
                                                                                     " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].type.value);
                                                                    }
                                                                    
                                                                    // Field name: speed
                                                                    // Integer
                                                                    // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                                                                    uint16_t* _tmp_8235 = (uint16_t*) buffer; buffer += 2;
                                                                    __aux64__ = *_tmp_8235;
                                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].speed.value = __aux64__;
                                                                    
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007422\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].speed.value) << 
                                                                                     " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].speed.value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].speed.value;
                                                                    }
                                                                    
                                                                    // ******************* MIN validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                                        return false;
                                                                    }
                                                                    // ******************* MAX validator *******************
                                                                    if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].data[0].elements[b].speed_limits[0].elements[c].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                                                        return false;
                                                                    }
                                                            }
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            uint16_t* _tmp_8236 = (uint16_t*)buffer;  // OpenType length
                                                            buffer += 2 + int(*_tmp_8236);            // Ignoring opentype data
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width.size() != 0) {
                                                    // Field name: d_width
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_8237 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value = *_tmp_8237;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value += -512;
                                                    __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007423\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0]: " <<
                                                                     ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_width[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation.size() != 0) {
                                                    // Field name: d_elevation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_8238 = (uint16_t*) buffer; buffer += 2;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value = *_tmp_8238;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value += -512;
                                                    __aux64__ = ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value' " << (__aux64__) << " is less than allowable (-512); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007424\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value) << " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0]: " <<
                                                                     ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].d_elevation[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_3655) { // from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0]. 
                                                    uint8_t* _tmp_8239 = (uint8_t*) buffer++;  // number of extensions
                                                    bool _array_98[*_tmp_8239];
                                                    
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007425\033[0m| Reading number of exts from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].attributes[0].: " << static_cast<unsigned int>(*_tmp_8239);
                                                    
                                                    // Extensions bytemap
                                                    for(int i = 0; i < *_tmp_8239; i++)
                                                        _array_98[i] = (*buffer++) != 0;
                                                    
                                                    // Discarding unknown OpenType containers
                                                    for(int i = 0; i < *_tmp_8239; i++) {
                                                        uint16_t* _tmp_8240 = (uint16_t*)buffer;  // OpenType length
                                                        buffer += 2;
                                                    
                                                        if(debug) {
                                                        }
                                                    
                                                        for(int i = 0; i < *_tmp_8240; i++)
                                                            buffer++;
                                                    }
                                                    
                                                }
                                        }
                                        if(*_ext_flag_3639) { // from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x]. 
                                            uint8_t* _tmp_8241 = (uint8_t*) buffer++;  // number of extensions
                                            bool _array_99[*_tmp_8241];
                                            
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007426\033[0m| Reading number of exts from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.nodes[0].elements[x].: " << static_cast<unsigned int>(*_tmp_8241);
                                            
                                            // Extensions bytemap
                                            for(int i = 0; i < *_tmp_8241; i++)
                                                _array_99[i] = (*buffer++) != 0;
                                            
                                            // Discarding unknown OpenType containers
                                            for(int i = 0; i < *_tmp_8241; i++) {
                                                uint16_t* _tmp_8242 = (uint16_t*)buffer;  // OpenType length
                                                buffer += 2;
                                            
                                                if(debug) {
                                                }
                                            
                                                for(int i = 0; i < *_tmp_8242; i++)
                                                    buffer++;
                                            }
                                            
                                        }
                                }
                            }
                            else if(_choice_272 == 1)  // CHOICE NodeListXY  fieldName(computed)
                            {
                                dsrc_v2_dsrc_msgs::msg::ComputedLane _tmp_8243;
                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed.push_back(_tmp_8243);
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_3663 = (uint8_t*) buffer++;  // Read ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007427\033[0m| Reading ext flag from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].: " << int(*_ext_flag_3663);
                                    }
                                    
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::Angle _tmp_8244;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy.push_back(_tmp_8244);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007428\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_8245;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis.push_back(_tmp_8245);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007429\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ScaleB12 _tmp_8246;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis.push_back(_tmp_8246);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007430\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis " << tools::green("present");
                                    }
                                    if(*(buffer++)) { 
                                        dsrc_v2_dsrc_msgs::msg::ComputedLaneRegional _tmp_8247;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].regional.push_back(_tmp_8247);
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007431\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].regional " << tools::green("present");
                                    }
                                    
                                    // Field name: reference_lane_id
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_8248 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_8248;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].reference_lane_id.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007432\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].reference_lane_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_xaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_275 = *(buffer++);
                                    
                                    if(_choice_275 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_8249;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.small.push_back(_tmp_8249);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_8250 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8250;
                                        __aux64__ += -2047;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007433\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_275 == 1)  // CHOICE ComputedLane_offsetXaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_8251;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.large.push_back(_tmp_8251);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_8252 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8252;
                                        __aux64__ += -32767;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007434\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_275) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: offset_yaxis
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm   
                                       // #1  large   DrivenLineOffsetLg   
                                    uint8_t _choice_276 = *(buffer++);
                                    
                                    if(_choice_276 == 0) {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetSm _tmp_8253;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.small.push_back(_tmp_8253);
                                    
                                        // Integer
                                        // INT16  min(-2047) max(2047) span(4095) datatype(Int16)
                                        uint16_t* _tmp_8254 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8254;
                                        __aux64__ += -2047;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.small[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007435\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " is less than allowable (-2047); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.small[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    else if(_choice_276 == 1)  // CHOICE ComputedLane_offsetYaxis  fieldName(large)
                                    {
                                        dsrc_v2_dsrc_msgs::msg::DrivenLineOffsetLg _tmp_8255;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.large.push_back(_tmp_8255);
                                    
                                        // Integer
                                        // INT16  min(-32767) max(32767) span(65535) datatype(Int16)
                                        uint16_t* _tmp_8256 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8256;
                                        __aux64__ += -32767;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.large[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007436\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " is less than allowable (-32767); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis.large[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(_choice_276) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return false;
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field name: rotate_xy
                                        // Integer
                                        // UINT16  min(0) max(28800) span(28801) datatype(UInt16)
                                        uint16_t* _tmp_8257 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8257;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007437\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].rotate_xy[0].value' " << (__aux64__) << " exceeds max allowable (28800); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field name: scale_xaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_8258 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8258;
                                        __aux64__ += -2048;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007438\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_xaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field name: scale_yaxis
                                        // Integer
                                        // INT16  min(-2048) max(2047) span(4096) datatype(Int16)
                                        uint16_t* _tmp_8259 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_8259;
                                        __aux64__ += -2048;
                                        ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis[0].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007439\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " is less than allowable (-2048); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].scale_yaxis[0].value' " << (__aux64__) << " exceeds max allowable (2047); message dropped.";
                                            return false;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_3663) { // from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0]. 
                                        uint8_t* _tmp_8260 = (uint8_t*) buffer++;  // number of extensions
                                        bool _array_100[*_tmp_8260];
                                        
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007440\033[0m| Reading number of exts from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].node_list.computed[0].: " << static_cast<unsigned int>(*_tmp_8260);
                                        
                                        // Extensions bytemap
                                        for(int i = 0; i < *_tmp_8260; i++)
                                            _array_100[i] = (*buffer++) != 0;
                                        
                                        // Discarding unknown OpenType containers
                                        for(int i = 0; i < *_tmp_8260; i++) {
                                            uint16_t* _tmp_8261 = (uint16_t*)buffer;  // OpenType length
                                            buffer += 2;
                                        
                                            if(debug) {
                                            }
                                        
                                            for(int i = 0; i < *_tmp_8261; i++)
                                                buffer++;
                                        }
                                        
                                    }
                            }
                            else
                            {
                                uint16_t* _tmp_8262 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_8262);            // Ignoring opentype data
                            }
                            
                            if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to.size() != 0) {
                                // Field name: connects_to
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                int16_t* _tmp_8263 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_8263;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_8263 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007441\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0]. size: " << int(*_tmp_8263);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int d = 0; d < _if__tmp_8263; d++) {
                                    dsrc_v2_dsrc_msgs::msg::Connection seqof_d;  // SEQUENCE
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements.push_back(seqof_d);
                                
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::IntersectionReferenceID _tmp_8264;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection.push_back(_tmp_8264);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007442\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::SignalGroupID _tmp_8265;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group.push_back(_tmp_8265);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007443\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RestrictionClassID _tmp_8266;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class.push_back(_tmp_8266);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007444\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_8267;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id.push_back(_tmp_8267);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007445\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id " << tools::green("present");
                                        }
                                        
                                        // Field name: connecting_lane
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            if(*(buffer++)) { 
                                                dsrc_v2_dsrc_msgs::msg::AllowedManeuvers _tmp_8268;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver.push_back(_tmp_8268);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007446\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver " << tools::green("present");
                                            }
                                            
                                            // Field name: lane
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8269 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8269;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.lane.value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007447\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.lane.value) << 
                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.lane.value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.lane.value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.lane.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.lane.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                            
                                            if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver.size() != 0) {
                                                // Field name: maneuver
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                uint8_t* _tmp_8270 = (uint8_t*)buffer;
                                                __aux64__ = *_tmp_8270 + 12;
                                                buffer += 1;
                                                
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007448\033[0m| map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver[0].value: " << __aux64__;
                                                
                                                int _if__tmp_8270 = __aux64__;
                                                for(int e = 0; e < _if__tmp_8270; e++) {
                                                    uint8_t __c__;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver[0].values.push_back(__c__);
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver[0].values[e] = (*__b__ == 1);
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 12) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver[0].value' " << (__aux64__) << " is less than allowable (12); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connecting_lane.maneuver[0].value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                                    return false;
                                                }
                                            }
                                        
                                        if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection.size() != 0) {
                                            // Field name: remote_intersection
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                if(*(buffer++)) { 
                                                    dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_8271;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region.push_back(_tmp_8271);
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007449\033[0m| ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region " << tools::green("present");
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region.size() != 0) {
                                                    // Field name: region
                                                    // Integer
                                                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                    uint16_t* _tmp_8272 = (uint16_t*) buffer; buffer += 2;
                                                    __aux64__ = *_tmp_8272;
                                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region[0].value = __aux64__;
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007450\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region[0].value) << 
                                                                     " map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region[0].value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                        return false;
                                                    }
                                                }
                                                
                                                // Field name: id
                                                // Integer
                                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                                uint16_t* _tmp_8273 = (uint16_t*) buffer; buffer += 2;
                                                __aux64__ = *_tmp_8273;
                                                ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].id.value = __aux64__;
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007451\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].id.value) << 
                                                                 " map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].id.value: " << ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].id.value;
                                                }
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].remote_intersection[0].id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                                    return false;
                                                }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group.size() != 0) {
                                            // Field name: signal_group
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8274 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8274;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007452\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group[0].value) << 
                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].signal_group[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class.size() != 0) {
                                            // Field name: user_class
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8275 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8275;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007453\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class[0].value) << 
                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].user_class[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id.size() != 0) {
                                            // Field name: connection_id
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_8276 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_8276;
                                            ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007454\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id[0].value) << 
                                                             " map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].connects_to[0].elements[d].connection_id[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays.size() != 0) {
                                // Field name: overlays
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5)
                                int16_t* _tmp_8277 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_8277;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_8277 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007455\033[0m| SequenceOf ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0]. size: " << int(*_tmp_8277);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 5) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].value' " << (__aux64__) << " exceeds max allowable (5); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int f = 0; f < _if__tmp_8277; f++) {
                                    dsrc_v2_dsrc_msgs::msg::LaneID seqof_f;  // INTEGER
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].elements.push_back(seqof_f);
                                
                                    // Integer
                                    // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                    uint8_t* _tmp_8278 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_8278;
                                    ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].elements[f].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007456\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].elements[f].value) << 
                                                     " map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].elements[f].value: " << static_cast<int>(ros->map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].elements[f].value);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].elements[f].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[h].road_lane_set.elements[k].overlays[0].elements[f].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_3635) { // from ros->map.road_segments[0].elements[h].road_lane_set.elements[k]. 
                                uint8_t* _tmp_8279 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_101[*_tmp_8279];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007457\033[0m| Reading number of exts from ros->map.road_segments[0].elements[h].road_lane_set.elements[k].: " << static_cast<unsigned int>(*_tmp_8279);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_8279; i++)
                                    _array_101[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_8279; i++) {
                                    uint16_t* _tmp_8280 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_8280; i++)
                                        buffer++;
                                }
                                
                            }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_3629) { // from ros->map.road_segments[0].elements[h]. 
                        uint8_t* _tmp_8281 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_102[*_tmp_8281];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007458\033[0m| Reading number of exts from ros->map.road_segments[0].elements[h].: " << static_cast<unsigned int>(*_tmp_8281);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_8281; i++)
                            _array_102[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_8281; i++) {
                            uint16_t* _tmp_8282 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_8282; i++)
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
                uint8_t* _ext_flag_3666 = (uint8_t*) buffer++;  // Read ext flag from ros->map.data_parameters[0].
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m007459\033[0m| Reading ext flag from ros->map.data_parameters[0].: " << int(*_ext_flag_3666);
                }
                
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersProcessMethod _tmp_8283;
                    ros->map.data_parameters[0].process_method.push_back(_tmp_8283);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007460\033[0m| ros->map.data_parameters[0].process_method " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersProcessAgency _tmp_8284;
                    ros->map.data_parameters[0].process_agency.push_back(_tmp_8284);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007461\033[0m| ros->map.data_parameters[0].process_agency " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersLastCheckedDate _tmp_8285;
                    ros->map.data_parameters[0].last_checked_date.push_back(_tmp_8285);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007462\033[0m| ros->map.data_parameters[0].last_checked_date " << tools::green("present");
                }
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::DataParametersGeoidUsed _tmp_8286;
                    ros->map.data_parameters[0].geoid_used.push_back(_tmp_8286);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007463\033[0m| ros->map.data_parameters[0].geoid_used " << tools::green("present");
                }
                
                if(ros->map.data_parameters[0].process_method.size() != 0) {
                    // Field name: process_method
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_8287 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_8287 + 1;
                    buffer += 1;
                    
                    int _if__tmp_8287 = __aux64__;
                    for(int g = 0; g < _if__tmp_8287; g++) {  // DataParameters_processMethod
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].process_method[0].value += *__tmp__;
                    }
                }
                
                if(ros->map.data_parameters[0].process_agency.size() != 0) {
                    // Field name: process_agency
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_8288 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_8288 + 1;
                    buffer += 1;
                    
                    int _if__tmp_8288 = __aux64__;
                    for(int h = 0; h < _if__tmp_8288; h++) {  // DataParameters_processAgency
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].process_agency[0].value += *__tmp__;
                    }
                }
                
                if(ros->map.data_parameters[0].last_checked_date.size() != 0) {
                    // Field name: last_checked_date
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_8289 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_8289 + 1;
                    buffer += 1;
                    
                    int _if__tmp_8289 = __aux64__;
                    for(int i = 0; i < _if__tmp_8289; i++) {  // DataParameters_lastCheckedDate
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].last_checked_date[0].value += *__tmp__;
                    }
                }
                
                if(ros->map.data_parameters[0].geoid_used.size() != 0) {
                    // Field name: geoid_used
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_8290 = (uint8_t*)buffer;
                    __aux64__ = *_tmp_8290 + 1;
                    buffer += 1;
                    
                    int _if__tmp_8290 = __aux64__;
                    for(int j = 0; j < _if__tmp_8290; j++) {  // DataParameters_geoidUsed
                        char* __tmp__ = (char*)buffer++;
                        ros->map.data_parameters[0].geoid_used[0].value += *__tmp__;
                    }
                }
                if(*_ext_flag_3666) { // from ros->map.data_parameters[0]. 
                    uint8_t* _tmp_8291 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_103[*_tmp_8291];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007464\033[0m| Reading number of exts from ros->map.data_parameters[0].: " << static_cast<unsigned int>(*_tmp_8291);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_8291; i++)
                        _array_103[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_8291; i++) {
                        uint16_t* _tmp_8292 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_8292; i++)
                            buffer++;
                    }
                    
                }
        }
        
        // Field name: restriction_list  // avoided
        // Field name: regional  // avoided
        if(*_ext_flag_3590) { // from ros->map. 
            uint8_t* _tmp_8293 = (uint8_t*) buffer++;  // number of extensions
            bool _array_104[*_tmp_8293];
            
            if(debug)
                logger->debug() << "|\033[38;5;94m007465\033[0m| Reading number of exts from ros->map.: " << static_cast<unsigned int>(*_tmp_8293);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_8293; i++)
                _array_104[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_8293; i++) {
                uint16_t* _tmp_8294 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_8294; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}