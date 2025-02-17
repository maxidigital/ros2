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
#include <dsrc_v2_mapem_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_dsrc_v2_mapem_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const dsrc_v2_mapem_pdu_descriptions_msgs::MAPEM::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<dsrc_v2_mapem_pdu_descriptions_msgs::msg::MAPEM>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const dsrc_v2_mapem_pdu_descriptions_msgs::msg::MAPEM* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // MAPEM  SEQUENCE
        //  header     ItsPduHeader     
        //  map        MapData          
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
            logger->debug() << "|\033[38;5;94m000000\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        *_tmp_1 = ros->hheader.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m000001\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_2 = (uint8_t*) buffer++;
        *_tmp_2 = ros->hheader.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m000002\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_3 = (uint32_t*) buffer; buffer += 4;
        *_tmp_3 = ros->hheader.station_id.value; 
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
    
    // Field:  type(MapData) name(map) extGroup(0)
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
        uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Write extension flag for MapData
        *_ext_flag_4 = 0;  
        
        // Optional fields bytemap
        char* _tmp_4 = (char*) buffer++;
        *_tmp_4 = (ros->map.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000003\033[0m| Optional field time_stamp = " << *_tmp_4;
        char* _tmp_5 = (char*) buffer++;
        *_tmp_5 = (ros->map.layer_type.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000004\033[0m| Optional field layer_type = " << *_tmp_5;
        char* _tmp_6 = (char*) buffer++;
        *_tmp_6 = (ros->map.layer_id.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000005\033[0m| Optional field layer_id = " << *_tmp_6;
        char* _tmp_7 = (char*) buffer++;
        *_tmp_7 = (ros->map.intersections.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000006\033[0m| Optional field intersections = " << *_tmp_7;
        char* _tmp_8 = (char*) buffer++;
        *_tmp_8 = (ros->map.road_segments.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000007\033[0m| Optional field road_segments = " << *_tmp_8;
        char* _tmp_9 = (char*) buffer++;
        *_tmp_9 = (ros->map.data_parameters.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000008\033[0m| Optional field data_parameters = " << *_tmp_9;
        char* _tmp_10 = (char*) buffer++;
        *_tmp_10 = (ros->map.restriction_list.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000009\033[0m| Optional field restriction_list = " << *_tmp_10;
        char* _tmp_11 = (char*) buffer++;
        *_tmp_11 = (ros->map.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000010\033[0m| Optional field regional = " << *_tmp_11;
        
        if(ros->map.time_stamp.size() != 0) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000011\033[0m| " << tools::getTypeName(ros->map.time_stamp[0].value) << 
                             " map.time_stamp[0].value: " << ros->map.time_stamp[0].value;
            }
            
            uint32_t* _tmp_12 = (uint32_t*) buffer; buffer += 4;
            *_tmp_12 = ros->map.time_stamp[0].value; 
            __aux64__ = ros->map.time_stamp[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'map.time_stamp[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'map.time_stamp[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                return -1;
            }
        }
        
        // Field:  type(MsgCount) name(msg_issue_revision) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(127) span(128) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m000012\033[0m| " << tools::getTypeName(ros->map.msg_issue_revision.value) << 
                         " map.msg_issue_revision.value: " << static_cast<int>(ros->map.msg_issue_revision.value);
        }
        
        uint8_t* _tmp_13 = (uint8_t*) buffer++;
        *_tmp_13 = ros->map.msg_issue_revision.value; 
        __aux64__ = ros->map.msg_issue_revision.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'map.msg_issue_revision.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 127) {
            logger->warning() << "Error: Value in 'map.msg_issue_revision.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
            return -1;
        }
        
        if(ros->map.layer_type.size() != 0) {
            // Field:  type(LayerType) name(layer_type) extGroup(0)
            // Enumerated
            // INT32  min(0) max(7) span(8) dataType(Int32)
            uint8_t* _ext_flag_7 = (uint8_t*) buffer++; // Write extension flag for ros->map.layer_type[0].
            if(debug) {
                logger->debug() << "|\033[38;5;94m000013\033[0m| " << tools::getTypeName(ros->map.layer_type[0].value) << 
                             " map.layer_type[0].value: " << static_cast<int>(ros->map.layer_type[0].value);
            }
            
            uint8_t* _tmp_14 = (uint8_t*)buffer;
            buffer += 1;
            *_tmp_14 = ros->map.layer_type[0].value; 
            __aux64__ = ros->map.layer_type[0].value; 
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'map.layer_type[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 7) {
                logger->warning() << "Error: Value in 'map.layer_type[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                return -1;
            }
        }
        
        if(ros->map.layer_id.size() != 0) {
            // Field:  type(LayerID) name(layer_id) extGroup(0)
            // Integer
            
            // UINT8  min(0) max(100) span(101) dataType(UInt8)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000014\033[0m| " << tools::getTypeName(ros->map.layer_id[0].value) << 
                             " map.layer_id[0].value: " << static_cast<int>(ros->map.layer_id[0].value);
            }
            
            uint8_t* _tmp_15 = (uint8_t*) buffer++;
            *_tmp_15 = ros->map.layer_id[0].value; 
            __aux64__ = ros->map.layer_id[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'map.layer_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 100) {
                logger->warning() << "Error: Value in 'map.layer_id[0].value' (" << __aux64__ << ") exceeds max allowable (100); message dropped.";
                return -1;
            }
        }
        
        if(ros->map.intersections.size() != 0) {
            // Field:  type(IntersectionGeometryList) name(intersections) extGroup(0)
            // SequenceOf
            // Data Type UInt8
            // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
            __aux64__ = ros->map.intersections[0].elements.size();
            if(__aux64__ > 32) __aux64__ = 32;
            uint16_t* _tmp_16 = (uint16_t*)buffer;
            buffer += 2;
            *_tmp_16 = __aux64__ - 1;
            
            int __ifa = __aux64__;
            for(int a = 0; a < __ifa; a++) { 
                
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
                    uint8_t* _ext_flag_9 = (uint8_t*) buffer++;  // Write extension flag for IntersectionGeometry
                    *_ext_flag_9 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_17 = (char*) buffer++;
                    *_tmp_17 = (ros->map.intersections[0].elements[a].name.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000016\033[0m| Optional field name = " << *_tmp_17;
                    char* _tmp_18 = (char*) buffer++;
                    *_tmp_18 = (ros->map.intersections[0].elements[a].lane_width.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000017\033[0m| Optional field lane_width = " << *_tmp_18;
                    char* _tmp_19 = (char*) buffer++;
                    *_tmp_19 = (ros->map.intersections[0].elements[a].speed_limits.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000018\033[0m| Optional field speed_limits = " << *_tmp_19;
                    char* _tmp_20 = (char*) buffer++;
                    *_tmp_20 = (ros->map.intersections[0].elements[a].preempt_priority_data.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000019\033[0m| Optional field preempt_priority_data = " << *_tmp_20;
                    char* _tmp_21 = (char*) buffer++;
                    *_tmp_21 = (ros->map.intersections[0].elements[a].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000020\033[0m| Optional field regional = " << *_tmp_21;
                    
                    if(ros->map.intersections[0].elements[a].name.size() != 0) {
                        // Field:  type(DescriptiveName) name(name) extGroup(0)
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_22 = (uint8_t*)buffer;
                        __aux64__ = ros->map.intersections[0].elements[a].name[0].value.size();
                        
                        if(ros->map.intersections[0].elements[a].name[0].value.size() < 1) {
                            logger->warning() << "Error: Length of 'map.intersections[0].elements[a].name[0].value' " << (ros->map.intersections[0].elements[a].name[0].value) << " is less than allowable (1); message dropped.";
                            return -1;
                        }
                        if(ros->map.intersections[0].elements[a].name[0].value.size() > 63) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].name[0].value' " << (ros->map.intersections[0].elements[a].name[0].value) << " exceeds max allowable (63); message dropped.";
                            return -1;
                        }
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000021\033[0m| map.intersections[0].elements[a].name[0].value.size(): " << 
                                        static_cast<int>(ros->map.intersections[0].elements[a].name[0].value.size());
                        
                        if(__aux64__ > 63) __aux64__ = 63;
                        *_tmp_22 = __aux64__ - 1;
                        buffer += 1;
                        
                        int __ifb = __aux64__;
                        for(int b = 0; b < __ifb; b++) {  // 63
                            char* __tmp__ = (char*)buffer++;
                            *__tmp__ = ros->map.intersections[0].elements[a].name[0].value.c_str()[b];
                        }
                    }
                    
                    // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                        // IntersectionReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         IntersectionID      
                        // Optional fields bytemap
                        char* _tmp_23 = (char*) buffer++;
                        *_tmp_23 = (ros->map.intersections[0].elements[a].id.region.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000022\033[0m| Optional field region = " << *_tmp_23;
                        
                        if(ros->map.intersections[0].elements[a].id.region.size() != 0) {
                            // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000023\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].id.region[0].value) << 
                                             " map.intersections[0].elements[a].id.region[0].value: " << ros->map.intersections[0].elements[a].id.region[0].value;
                            }
                            
                            uint16_t* _tmp_24 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_24 = ros->map.intersections[0].elements[a].id.region[0].value; 
                            __aux64__ = ros->map.intersections[0].elements[a].id.region[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(IntersectionID) name(id) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000024\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].id.id.value) << 
                                         " map.intersections[0].elements[a].id.id.value: " << ros->map.intersections[0].elements[a].id.id.value;
                        }
                        
                        uint16_t* _tmp_25 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_25 = ros->map.intersections[0].elements[a].id.id.value; 
                        __aux64__ = ros->map.intersections[0].elements[a].id.id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(MsgCount) name(revision) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(127) span(128) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000025\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].revision.value) << 
                                     " map.intersections[0].elements[a].revision.value: " << static_cast<int>(ros->map.intersections[0].elements[a].revision.value);
                    }
                    
                    uint8_t* _tmp_26 = (uint8_t*) buffer++;
                    *_tmp_26 = ros->map.intersections[0].elements[a].revision.value; 
                    __aux64__ = ros->map.intersections[0].elements[a].revision.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].revision.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].revision.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(Position3D) name(ref_point) extGroup(0)
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_13 = (uint8_t*) buffer++;  // Write extension flag for Position3D
                        *_ext_flag_13 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_27 = (char*) buffer++;
                        *_tmp_27 = (ros->map.intersections[0].elements[a].ref_point.elevation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000026\033[0m| Optional field elevation = " << *_tmp_27;
                        char* _tmp_28 = (char*) buffer++;
                        *_tmp_28 = (ros->map.intersections[0].elements[a].ref_point.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000027\033[0m| Optional field regional = " << *_tmp_28;
                        
                        // Field:  type(Latitude) name(lat) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].ref_point.lat.value) << 
                                         " map.intersections[0].elements[a].ref_point.lat.value: " << ros->map.intersections[0].elements[a].ref_point.lat.value;
                        }
                        
                        double _tmp_30 = ros->map.intersections[0].elements[a].ref_point.lat.value;
                        _tmp_30 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_30);
                        _tmp_30 -= -900000000;
                        uint32_t* _tmp_29 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_29 = static_cast<uint32_t>(_tmp_30);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Longitude) name(longint) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].ref_point.longint.value) << 
                                         " map.intersections[0].elements[a].ref_point.longint.value: " << ros->map.intersections[0].elements[a].ref_point.longint.value;
                        }
                        
                        double _tmp_32 = ros->map.intersections[0].elements[a].ref_point.longint.value;
                        _tmp_32 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_32);
                        _tmp_32 -= -1800000000;
                        uint32_t* _tmp_31 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_31 = static_cast<uint32_t>(_tmp_32);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.longint.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.longint.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                            return -1;
                        }
                        
                        if(ros->map.intersections[0].elements[a].ref_point.elevation.size() != 0) {
                            // Field:  type(Elevation) name(elevation) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000030\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].ref_point.elevation[0].value) << 
                                             " map.intersections[0].elements[a].ref_point.elevation[0].value: " << ros->map.intersections[0].elements[a].ref_point.elevation[0].value;
                            }
                            
                            float _tmp_34 = ros->map.intersections[0].elements[a].ref_point.elevation[0].value;
                            _tmp_34 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_34);
                            _tmp_34 -= -4096;
                            uint16_t* _tmp_33 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_33 = static_cast<uint16_t>(_tmp_34);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.elevation[0].value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].ref_point.elevation[0].value' (" << __aux64__ << ") exceeds max allowable (61439); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_13) {
                        }
                    
                    if(ros->map.intersections[0].elements[a].lane_width.size() != 0) {
                        // Field:  type(LaneWidth) name(lane_width) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(32767) span(32768) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000031\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_width[0].value) << 
                                         " map.intersections[0].elements[a].lane_width[0].value: " << ros->map.intersections[0].elements[a].lane_width[0].value;
                        }
                        
                        uint16_t* _tmp_36 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_36 = ros->map.intersections[0].elements[a].lane_width[0].value; 
                        __aux64__ = ros->map.intersections[0].elements[a].lane_width[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_width[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_width[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->map.intersections[0].elements[a].speed_limits.size() != 0) {
                        // Field:  type(SpeedLimitList) name(speed_limits) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                        __aux64__ = ros->map.intersections[0].elements[a].speed_limits[0].elements.size();
                        if(__aux64__ > 9) __aux64__ = 9;
                        uint16_t* _tmp_37 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_37 = __aux64__ - 1;
                        
                        int __ifc = __aux64__;
                        for(int c = 0; c < __ifc; c++) { 
                            
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                // Optional fields bytemap
                                
                                // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(12) span(13) dataType(Int32)
                                uint8_t* _ext_flag_18 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000033\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.value) << 
                                                 " map.intersections[0].elements[a].speed_limits[0].elements[c].type.value: " << static_cast<int>(ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.value);
                                }
                                
                                uint8_t* _tmp_38 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_38 = ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.value; 
                                __aux64__ = ros->map.intersections[0].elements[a].speed_limits[0].elements[c].type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Velocity) name(speed) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000034\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value) << 
                                                 " map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value: " << ros->map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value;
                                }
                                
                                uint16_t* _tmp_39 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_39 = ros->map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value; 
                                __aux64__ = ros->map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].speed_limits[0].elements[c].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                    return -1;
                                }
                                
                        }
                    }
                    
                    // Field:  type(LaneList) name(lane_set) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255) ext(false)
                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_40 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_40 = __aux64__ - 1;
                    
                    int __ifd = __aux64__;
                    for(int d = 0; d < __ifd; d++) { 
                        
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
                            uint8_t* _ext_flag_20 = (uint8_t*) buffer++;  // Write extension flag for GenericLane
                            *_ext_flag_20 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_41 = (char*) buffer++;
                            *_tmp_41 = (ros->map.intersections[0].elements[a].lane_set.elements[d].name.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000036\033[0m| Optional field name = " << *_tmp_41;
                            char* _tmp_42 = (char*) buffer++;
                            *_tmp_42 = (ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000037\033[0m| Optional field ingress_approach = " << *_tmp_42;
                            char* _tmp_43 = (char*) buffer++;
                            *_tmp_43 = (ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000038\033[0m| Optional field egress_approach = " << *_tmp_43;
                            char* _tmp_44 = (char*) buffer++;
                            *_tmp_44 = (ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000039\033[0m| Optional field maneuvers = " << *_tmp_44;
                            char* _tmp_45 = (char*) buffer++;
                            *_tmp_45 = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000040\033[0m| Optional field connects_to = " << *_tmp_45;
                            char* _tmp_46 = (char*) buffer++;
                            *_tmp_46 = (ros->map.intersections[0].elements[a].lane_set.elements[d].overlays.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000041\033[0m| Optional field overlays = " << *_tmp_46;
                            char* _tmp_47 = (char*) buffer++;
                            *_tmp_47 = (ros->map.intersections[0].elements[a].lane_set.elements[d].regional.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000042\033[0m| Optional field regional = " << *_tmp_47;
                            
                            // Field:  type(LaneID) name(lane_id) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000043\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_id.value) << 
                                             " map.intersections[0].elements[a].lane_set.elements[d].lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_id.value);
                            }
                            
                            uint8_t* _tmp_48 = (uint8_t*) buffer++;
                            *_tmp_48 = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_id.value; 
                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].name.size() != 0) {
                                // Field:  type(DescriptiveName) name(name) extGroup(0)
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_49 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value.size();
                                
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value.size() < 1) {
                                    logger->warning() << "Error: Length of 'map.intersections[0].elements[a].lane_set.elements[d].name[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value) << " is less than allowable (1); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value.size() > 63) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].name[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value) << " exceeds max allowable (63); message dropped.";
                                    return -1;
                                }
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000044\033[0m| map.intersections[0].elements[a].lane_set.elements[d].name[0].value.size(): " << 
                                                static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value.size());
                                
                                if(__aux64__ > 63) __aux64__ = 63;
                                *_tmp_49 = __aux64__ - 1;
                                buffer += 1;
                                
                                int __ife = __aux64__;
                                for(int e = 0; e < __ife; e++) {  // 63
                                    char* __tmp__ = (char*)buffer++;
                                    *__tmp__ = ros->map.intersections[0].elements[a].lane_set.elements[d].name[0].value.c_str()[e];
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(ingress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000045\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value) << 
                                                 " map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_50 = (uint8_t*) buffer++;
                                *_tmp_50 = ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value; 
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].ingress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(egress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000046\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value) << 
                                                 " map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_51 = (uint8_t*) buffer++;
                                *_tmp_51 = ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value; 
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].egress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(LaneAttributes) name(lane_attributes) extGroup(0)
                                // LaneAttributes  SEQUENCE
                                    //  directionalUse LaneDirection          
                                    //  sharedWith     LaneSharing            
                                    //  laneType       LaneTypeAttributes     
                                    //  regional       RegionalExtension    OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_52 = (char*) buffer++;
                                *_tmp_52 = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.regional.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000047\033[0m| Optional field regional = " << *_tmp_52;
                                
                                // Field:  type(LaneDirection) name(directional_use) extGroup(0)
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000048\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values.size());
                                
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values.size() < 2) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values.size()) << " is less than allowable (2); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values.size() > 2) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values.size()) << " exceeds max allowable (2); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_53 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values.size();
                                if(__aux64__ > 2) __aux64__ = 2;
                                *_tmp_53 = __aux64__ - 2;
                                buffer += 1;
                                
                                int __iff = __aux64__;
                                for(int f = 0; f < __iff; f++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.directional_use.values[f]? 1: 0);
                                }
                                
                                // Field:  type(LaneSharing) name(shared_with) extGroup(0)
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000049\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values.size());
                                
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values.size() < 10) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values.size()) << " is less than allowable (10); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values.size() > 10) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values.size()) << " exceeds max allowable (10); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_54 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values.size();
                                if(__aux64__ > 10) __aux64__ = 10;
                                *_tmp_54 = __aux64__ - 10;
                                buffer += 1;
                                
                                int __ifg = __aux64__;
                                for(int g = 0; g < __ifg; g++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.shared_with.values[g]? 1: 0);
                                }
                                
                                // Field:  type(LaneTypeAttributes) name(lane_type) extGroup(0)
                                // Choice
                                   // #0  vehicle   LaneAttributes_Vehicle
                                   // #1  crosswalk   LaneAttributes_Crosswalk
                                   // #2  bikeLane   LaneAttributes_Bike
                                   // #3  sidewalk   LaneAttributes_Sidewalk
                                   // #4  median   LaneAttributes_Barrier
                                   // #5  striping   LaneAttributes_Striping
                                   // #6  trackedVehicle   LaneAttributes_TrackedVehicle
                                   // #7  parking   LaneAttributes_Parking
                                uint8_t* _ext_flag_24 = (uint8_t*) buffer; 
                                buffer++;
                                *_ext_flag_24 = 0; 
                                
                                uint8_t* _choice_1 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle.size() != 0) {  // CHOICE 0  fieldType(LaneTypeAttributes) 
                                    *_choice_1 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000050\033[0m| Choice selection: 0";
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000051\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values.size() < 8) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values.size()) << " is less than allowable (8); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values.size() > 8) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values.size()) << " exceeds max allowable (8); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _ext_flag_25 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].
                                    *_ext_flag_25 = 0; 
                                    
                                    uint8_t* _tmp_55 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values.size();
                                    if(__aux64__ > 8) __aux64__ = 8;
                                    *_tmp_55 = __aux64__ - 8;
                                    buffer += 1;
                                    
                                    int __ifh = __aux64__;
                                    for(int h = 0; h < __ifh; h++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.vehicle[0].values[h]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk.size() != 0)  // CHOICE 1  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_1 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000052\033[0m| Choice selection: 1";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000053\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_56 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_56 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifi = __aux64__;
                                    for(int i = 0; i < __ifi; i++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.crosswalk[0].values[i]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane.size() != 0)  // CHOICE 2  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_1 = 2;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000054\033[0m| Choice selection: 2";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000055\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_57 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_57 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifj = __aux64__;
                                    for(int j = 0; j < __ifj; j++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.bike_lane[0].values[j]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk.size() != 0)  // CHOICE 3  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_1 = 3;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000056\033[0m| Choice selection: 3";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000057\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_58 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_58 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifk = __aux64__;
                                    for(int k = 0; k < __ifk; k++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.sidewalk[0].values[k]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median.size() != 0)  // CHOICE 4  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_1 = 4;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000058\033[0m| Choice selection: 4";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000059\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_59 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_59 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifl = __aux64__;
                                    for(int l = 0; l < __ifl; l++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.median[0].values[l]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping.size() != 0)  // CHOICE 5  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_1 = 5;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000060\033[0m| Choice selection: 5";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000061\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_60 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_60 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifm = __aux64__;
                                    for(int m = 0; m < __ifm; m++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.striping[0].values[m]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle.size() != 0)  // CHOICE 6  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_1 = 6;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000062\033[0m| Choice selection: 6";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000063\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_61 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_61 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifn = __aux64__;
                                    for(int n = 0; n < __ifn; n++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.tracked_vehicle[0].values[n]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking.size() != 0)  // CHOICE 7  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_1 = 7;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000064\033[0m| Choice selection: 7";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000065\033[0m| map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_62 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_62 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifo = __aux64__;
                                    for(int o = 0; o < __ifo; o++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type.parking[0].values[o]? 1: 0);
                                    }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_1) << ") selected in CHOICE LaneTypeAttributes in 'map.intersections[0].elements[a].lane_set.elements[d].lane_attributes.lane_type'; message dropped.";
                                    return -1;
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers.size() != 0) {
                                // Field:  type(AllowedManeuvers) name(maneuvers) extGroup(0)
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000066\033[0m| map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values.size());
                                
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values.size() < 12) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values.size()) << " is less than allowable (12); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values.size() > 12) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_63 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values.size();
                                if(__aux64__ > 12) __aux64__ = 12;
                                *_tmp_63 = __aux64__ - 12;
                                buffer += 1;
                                
                                int __ifp = __aux64__;
                                for(int p = 0; p < __ifp; p++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].maneuvers[0].values[p]? 1: 0);
                                }
                            }
                            
                            // Field:  type(NodeListXY) name(node_list) extGroup(0)
                            // Choice
                               // #0  nodes   NodeSetXY
                               // #1  computed   ComputedLane
                            uint8_t* _ext_flag_26 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_26 = 0; 
                            
                            uint8_t* _choice_2 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes.size() != 0) {  // CHOICE 0  fieldType(NodeListXY) 
                                *_choice_2 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000067\033[0m| Choice selection: 0";
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62) ext(false)
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements.size();
                                if(__aux64__ > 63) __aux64__ = 63;
                                uint16_t* _tmp_64 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_64 = __aux64__ - 2;
                                
                                int __ifq = __aux64__;
                                for(int q = 0; q < __ifq; q++) { 
                                    
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_27 = (uint8_t*) buffer++;  // Write extension flag for NodeXY
                                        *_ext_flag_27 = 0;  
                                        
                                        // Optional fields bytemap
                                        char* _tmp_65 = (char*) buffer++;
                                        *_tmp_65 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000069\033[0m| Optional field attributes = " << *_tmp_65;
                                        
                                        // Field:  type(NodeOffsetPointXY) name(delta) extGroup(0)
                                        // Choice
                                           // #0  node_XY1   Node_XY_20b
                                           // #1  node_XY2   Node_XY_22b
                                           // #2  node_XY3   Node_XY_24b
                                           // #3  node_XY4   Node_XY_26b
                                           // #4  node_XY5   Node_XY_28b
                                           // #5  node_XY6   Node_XY_32b
                                           // #6  node_LatLon   Node_LLmD_64b
                                           // #7  regional   RegionalExtension
                                        uint8_t* _choice_3 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1.size() != 0) {  // CHOICE 0  fieldType(NodeOffsetPointXY) 
                                            *_choice_3 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000070\033[0m| Choice selection: 0";
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B10) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000071\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value;
                                                }
                                                
                                                float _tmp_67 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value;
                                                _tmp_67 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_67);
                                                _tmp_67 -= -512;
                                                uint16_t* _tmp_66 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_66 = static_cast<uint16_t>(_tmp_67);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].x.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B10) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000072\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value;
                                                }
                                                
                                                float _tmp_69 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value;
                                                _tmp_69 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_69);
                                                _tmp_69 -= -512;
                                                uint16_t* _tmp_68 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_68 = static_cast<uint16_t>(_tmp_69);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy1[0].y.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2.size() != 0)  // CHOICE 1  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_3 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000073\033[0m| Choice selection: 1";
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B11) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000074\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value;
                                                }
                                                
                                                float _tmp_71 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value;
                                                _tmp_71 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_71);
                                                _tmp_71 -= -1024;
                                                uint16_t* _tmp_70 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_70 = static_cast<uint16_t>(_tmp_71);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].x.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B11) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000075\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value;
                                                }
                                                
                                                float _tmp_73 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value;
                                                _tmp_73 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_73);
                                                _tmp_73 -= -1024;
                                                uint16_t* _tmp_72 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_72 = static_cast<uint16_t>(_tmp_73);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy2[0].y.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3.size() != 0)  // CHOICE 2  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_3 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000076\033[0m| Choice selection: 2";
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B12) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000077\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value;
                                                }
                                                
                                                float _tmp_75 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value;
                                                _tmp_75 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_75);
                                                _tmp_75 -= -2048;
                                                uint16_t* _tmp_74 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_74 = static_cast<uint16_t>(_tmp_75);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].x.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B12) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000078\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value;
                                                }
                                                
                                                float _tmp_77 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value;
                                                _tmp_77 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_77);
                                                _tmp_77 -= -2048;
                                                uint16_t* _tmp_76 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_76 = static_cast<uint16_t>(_tmp_77);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy3[0].y.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4.size() != 0)  // CHOICE 3  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_3 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000079\033[0m| Choice selection: 3";
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B13) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000080\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value;
                                                }
                                                
                                                float _tmp_79 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value;
                                                _tmp_79 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_79);
                                                _tmp_79 -= -4096;
                                                uint16_t* _tmp_78 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_78 = static_cast<uint16_t>(_tmp_79);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].x.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B13) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000081\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value;
                                                }
                                                
                                                float _tmp_81 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value;
                                                _tmp_81 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_81);
                                                _tmp_81 -= -4096;
                                                uint16_t* _tmp_80 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_80 = static_cast<uint16_t>(_tmp_81);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy4[0].y.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5.size() != 0)  // CHOICE 4  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_3 = 4;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000082\033[0m| Choice selection: 4";
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B14) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000083\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value;
                                                }
                                                
                                                float _tmp_83 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value;
                                                _tmp_83 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_83);
                                                _tmp_83 -= -8192;
                                                uint16_t* _tmp_82 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_82 = static_cast<uint16_t>(_tmp_83);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].x.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B14) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000084\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value;
                                                }
                                                
                                                float _tmp_85 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value;
                                                _tmp_85 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_85);
                                                _tmp_85 -= -8192;
                                                uint16_t* _tmp_84 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_84 = static_cast<uint16_t>(_tmp_85);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy5[0].y.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6.size() != 0)  // CHOICE 5  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_3 = 5;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000085\033[0m| Choice selection: 5";
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B16) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000086\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value;
                                                }
                                                
                                                float _tmp_87 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value;
                                                _tmp_87 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_87);
                                                _tmp_87 -= -32768;
                                                uint16_t* _tmp_86 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_86 = static_cast<uint16_t>(_tmp_87);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].x.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B16) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000087\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value;
                                                }
                                                
                                                float _tmp_89 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value;
                                                _tmp_89 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_89);
                                                _tmp_89 -= -32768;
                                                uint16_t* _tmp_88 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_88 = static_cast<uint16_t>(_tmp_89);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_xy6[0].y.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon.size() != 0)  // CHOICE 6  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_3 = 6;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000088\033[0m| Choice selection: 6";
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Longitude) name(lon) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000089\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value;
                                                }
                                                
                                                double _tmp_91 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value;
                                                _tmp_91 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_91);
                                                _tmp_91 -= -1800000000;
                                                uint32_t* _tmp_90 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_90 = static_cast<uint32_t>(_tmp_91);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Latitude) name(lat) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000090\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value;
                                                }
                                                
                                                double _tmp_93 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value;
                                                _tmp_93 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_93);
                                                _tmp_93 -= -900000000;
                                                uint32_t* _tmp_92 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_92 = static_cast<uint32_t>(_tmp_93);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_3) << ") selected in CHOICE NodeOffsetPointXY in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].delta'; message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes.size() != 0) {
                                            // Field:  type(NodeAttributeSetXY) name(attributes) extGroup(0)
                                                // NodeAttributeSetXY  SEQUENCE
                                                    //  localNode  NodeAttributeXYList           OPTIONAL  
                                                    //  disabled   SegmentAttributeXYList        OPTIONAL  
                                                    //  enabled    SegmentAttributeXYList        OPTIONAL  
                                                    //  data       LaneDataAttributeList         OPTIONAL  
                                                    //  dWidth     Offset_B10                    OPTIONAL  
                                                    //  dElevation Offset_B10                    OPTIONAL  
                                                    //  regional   NodeAttributeSetXY_regional   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_43 = (uint8_t*) buffer++;  // Write extension flag for NodeAttributeSetXY
                                                *_ext_flag_43 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_94 = (char*) buffer++;
                                                *_tmp_94 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000091\033[0m| Optional field local_node = " << *_tmp_94;
                                                char* _tmp_95 = (char*) buffer++;
                                                *_tmp_95 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000092\033[0m| Optional field disabled = " << *_tmp_95;
                                                char* _tmp_96 = (char*) buffer++;
                                                *_tmp_96 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000093\033[0m| Optional field enabled = " << *_tmp_96;
                                                char* _tmp_97 = (char*) buffer++;
                                                *_tmp_97 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000094\033[0m| Optional field data = " << *_tmp_97;
                                                char* _tmp_98 = (char*) buffer++;
                                                *_tmp_98 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000095\033[0m| Optional field d_width = " << *_tmp_98;
                                                char* _tmp_99 = (char*) buffer++;
                                                *_tmp_99 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000096\033[0m| Optional field d_elevation = " << *_tmp_99;
                                                char* _tmp_100 = (char*) buffer++;
                                                *_tmp_100 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].regional.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000097\033[0m| Optional field regional = " << *_tmp_100;
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node.size() != 0) {
                                                    // Field:  type(NodeAttributeXYList) name(local_node) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_101 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_101 = __aux64__ - 1;
                                                    
                                                    int __ifr = __aux64__;
                                                    for(int r = 0; r < __ifr; r++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) dataType(Int32)
                                                        uint8_t* _ext_flag_44 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000099\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value) << 
                                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_102 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_102 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value; 
                                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].local_node[0].elements[r].value' (" << __aux64__ << ") exceeds max allowable (11); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(disabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_103 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_103 = __aux64__ - 1;
                                                    
                                                    int __ifs = __aux64__;
                                                    for(int s = 0; s < __ifs; s++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_45 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000101\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value) << 
                                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_104 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_104 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value; 
                                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].disabled[0].elements[s].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(enabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_105 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_105 = __aux64__ - 1;
                                                    
                                                    int __ift = __aux64__;
                                                    for(int t = 0; t < __ift; t++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_46 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000103\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value) << 
                                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_106 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_106 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value; 
                                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].enabled[0].elements[t].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data.size() != 0) {
                                                    // Field:  type(LaneDataAttributeList) name(data) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_107 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_107 = __aux64__ - 1;
                                                    
                                                    int __ifu = __aux64__;
                                                    for(int u = 0; u < __ifu; u++) { 
                                                        
                                                        // Choice
                                                           // #0  pathEndPointAngle   DeltaAngle
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle
                                                           // #4  laneAngle   MergeDivergeNodeAngle
                                                           // #5  speedLimits   SpeedLimitList
                                                           // #6  regional   LaneDataAttribute_regional
                                                        uint8_t* _ext_flag_47 = (uint8_t*) buffer; 
                                                        buffer++;
                                                        *_ext_flag_47 = 0; 
                                                        
                                                        uint8_t* _choice_4 = (uint8_t*) buffer;
                                                        buffer++;
                                                        
                                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle.size() != 0) {  // CHOICE 0  fieldType(LaneDataAttribute) 
                                                            *_choice_4 = 0;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000105\033[0m| Choice selection: 0";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-150) max(150) span(301) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000106\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_108 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value - -150;
                                                            *_tmp_108 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value' (" << __aux64__ << ") less than (-150); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].path_end_point_angle[0].value' (" << __aux64__ << ") exceeds max allowable (150); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center.size() != 0)  // CHOICE 1  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_4 = 1;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000107\033[0m| Choice selection: 1";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000108\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_109 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value - -128;
                                                            *_tmp_109 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_center[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left.size() != 0)  // CHOICE 2  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_4 = 2;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000109\033[0m| Choice selection: 2";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000110\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_110 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value - -128;
                                                            *_tmp_110 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_left[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right.size() != 0)  // CHOICE 3  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_4 = 3;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000111\033[0m| Choice selection: 3";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000112\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_111 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value - -128;
                                                            *_tmp_111 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_crown_point_right[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle.size() != 0)  // CHOICE 4  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_4 = 4;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000113\033[0m| Choice selection: 4";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-180) max(180) span(361) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000114\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value) << 
                                                                             " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_112 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value - -180;
                                                            *_tmp_112 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value' (" << __aux64__ << ") less than (-180); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].lane_angle[0].value' (" << __aux64__ << ") exceeds max allowable (180); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits.size() != 0)  // CHOICE 5  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_4 = 5;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000115\033[0m| Choice selection: 5";
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements.size();
                                                            if(__aux64__ > 9) __aux64__ = 9;
                                                            uint16_t* _tmp_113 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_113 = __aux64__ - 1;
                                                            
                                                            int __ifv = __aux64__;
                                                            for(int v = 0; v < __ifv; v++) { 
                                                                
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    // Optional fields bytemap
                                                                    
                                                                    // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) dataType(Int32)
                                                                    uint8_t* _ext_flag_53 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000117\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value) << 
                                                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_114 = (uint8_t*)buffer;
                                                                    buffer += 1;
                                                                    *_tmp_114 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value; 
                                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value; 
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(Velocity) name(speed) extGroup(0)
                                                                    // Integer
                                                                    
                                                                    // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000118\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value) << 
                                                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value;
                                                                    }
                                                                    
                                                                    uint16_t* _tmp_115 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_115 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value; 
                                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value;
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u].speed_limits[0].elements[v].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                            }
                                                        
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_4) << ") selected in CHOICE LaneDataAttribute in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].data[0].elements[u]'; message dropped.";
                                                            return -1;
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_width) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000119\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value) << 
                                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value;
                                                    }
                                                    
                                                    float _tmp_117 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value;
                                                    _tmp_117 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_117);
                                                    _tmp_117 -= -512;
                                                    uint16_t* _tmp_116 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_116 = static_cast<uint16_t>(_tmp_117);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_width[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_elevation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000120\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value) << 
                                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value;
                                                    }
                                                    
                                                    float _tmp_119 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value;
                                                    _tmp_119 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_119);
                                                    _tmp_119 -= -512;
                                                    uint16_t* _tmp_118 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_118 = static_cast<uint16_t>(_tmp_119);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.nodes[0].elements[q].attributes[0].d_elevation[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_43) {
                                                }
                                        }
                                        
                                        if(*_ext_flag_27) {
                                        }
                                }
                            
                            }
                            else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed.size() != 0)  // CHOICE 1  fieldType(NodeListXY) 
                            {
                                *_choice_2 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000121\033[0m| Choice selection: 1";
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_57 = (uint8_t*) buffer++;  // Write extension flag for ComputedLane
                                    *_ext_flag_57 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_122 = (char*) buffer++;
                                    *_tmp_122 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000122\033[0m| Optional field rotate_xy = " << *_tmp_122;
                                    char* _tmp_123 = (char*) buffer++;
                                    *_tmp_123 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000123\033[0m| Optional field scale_xaxis = " << *_tmp_123;
                                    char* _tmp_124 = (char*) buffer++;
                                    *_tmp_124 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000124\033[0m| Optional field scale_yaxis = " << *_tmp_124;
                                    char* _tmp_125 = (char*) buffer++;
                                    *_tmp_125 = (ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].regional.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000125\033[0m| Optional field regional = " << *_tmp_125;
                                    
                                    // Field:  type(LaneID) name(reference_lane_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000126\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    uint8_t* _tmp_126 = (uint8_t*) buffer++;
                                    *_tmp_126 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value; 
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetXaxis) name(offset_xaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_5 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetXaxis) 
                                        *_choice_5 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000127\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000128\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_127 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value - -2047;
                                        *_tmp_127 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetXaxis) 
                                    {
                                        *_choice_5 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000129\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000130\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_128 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value - -32767;
                                        *_tmp_128 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_5) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetYaxis) name(offset_yaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_6 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetYaxis) 
                                        *_choice_6 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000131\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000132\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_129 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value - -2047;
                                        *_tmp_129 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetYaxis) 
                                    {
                                        *_choice_6 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000133\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000134\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_130 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value - -32767;
                                        *_tmp_130 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_6) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field:  type(Angle) name(rotate_xy) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(28800) span(28801) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000135\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        uint16_t* _tmp_131 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_131 = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value; 
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") exceeds max allowable (28800); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_xaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000136\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_132 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value - -2048;
                                        *_tmp_132 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_yaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000137\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_133 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value - -2048;
                                        *_tmp_133 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_57) {
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_2) << ") selected in CHOICE NodeListXY in 'map.intersections[0].elements[a].lane_set.elements[d].node_list'; message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to.size() != 0) {
                                // Field:  type(ConnectsToList) name(connects_to) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_135 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_135 = __aux64__ - 1;
                                
                                int __ifw = __aux64__;
                                for(int w = 0; w < __ifw; w++) { 
                                    
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_136 = (char*) buffer++;
                                        *_tmp_136 = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000139\033[0m| Optional field remote_intersection = " << *_tmp_136;
                                        char* _tmp_137 = (char*) buffer++;
                                        *_tmp_137 = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000140\033[0m| Optional field signal_group = " << *_tmp_137;
                                        char* _tmp_138 = (char*) buffer++;
                                        *_tmp_138 = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000141\033[0m| Optional field user_class = " << *_tmp_138;
                                        char* _tmp_139 = (char*) buffer++;
                                        *_tmp_139 = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000142\033[0m| Optional field connection_id = " << *_tmp_139;
                                        
                                        // Field:  type(ConnectingLane) name(connecting_lane) extGroup(0)
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_140 = (char*) buffer++;
                                            *_tmp_140 = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000143\033[0m| Optional field maneuver = " << *_tmp_140;
                                            
                                            // Field:  type(LaneID) name(lane) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000144\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value);
                                            }
                                            
                                            uint8_t* _tmp_141 = (uint8_t*) buffer++;
                                            *_tmp_141 = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value; 
                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.lane.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver.size() != 0) {
                                                // Field:  type(AllowedManeuvers) name(maneuver) extGroup(0)
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000145\033[0m| map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values.size());
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values.size() < 12) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values.size()) << " is less than allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values.size() > 12) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].value' " << (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                
                                                uint8_t* _tmp_142 = (uint8_t*)buffer;
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values.size();
                                                if(__aux64__ > 12) __aux64__ = 12;
                                                *_tmp_142 = __aux64__ - 12;
                                                buffer += 1;
                                                
                                                int __ifx = __aux64__;
                                                for(int x = 0; x < __ifx; x++) {
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    *__b__ = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connecting_lane.maneuver[0].values[x]? 1: 0);
                                                }
                                            }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection.size() != 0) {
                                            // Field:  type(IntersectionReferenceID) name(remote_intersection) extGroup(0)
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                // Optional fields bytemap
                                                char* _tmp_143 = (char*) buffer++;
                                                *_tmp_143 = (ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000146\033[0m| Optional field region = " << *_tmp_143;
                                                
                                                if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region.size() != 0) {
                                                    // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000147\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value) << 
                                                                     " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_144 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_144 = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value; 
                                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(IntersectionID) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000148\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value) << 
                                                                 " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value: " << ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_145 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_145 = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value; 
                                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].remote_intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group.size() != 0) {
                                            // Field:  type(SignalGroupID) name(signal_group) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000149\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value);
                                            }
                                            
                                            uint8_t* _tmp_146 = (uint8_t*) buffer++;
                                            *_tmp_146 = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value; 
                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].signal_group[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class.size() != 0) {
                                            // Field:  type(RestrictionClassID) name(user_class) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000150\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_147 = (uint8_t*) buffer++;
                                            *_tmp_147 = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value; 
                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].user_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id.size() != 0) {
                                            // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000151\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value) << 
                                                             " map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value);
                                            }
                                            
                                            uint8_t* _tmp_148 = (uint8_t*) buffer++;
                                            *_tmp_148 = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value; 
                                            __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].connects_to[0].elements[w].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[a].lane_set.elements[d].overlays.size() != 0) {
                                // Field:  type(OverlayLaneList) name(overlays) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5) ext(false)
                                __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements.size();
                                if(__aux64__ > 5) __aux64__ = 5;
                                uint16_t* _tmp_149 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_149 = __aux64__ - 1;
                                
                                int __ify = __aux64__;
                                for(int y = 0; y < __ify; y++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000153\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value) << 
                                                     " map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value: " << static_cast<int>(ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value);
                                    }
                                    
                                    uint8_t* _tmp_150 = (uint8_t*) buffer++;
                                    *_tmp_150 = ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value; 
                                    __aux64__ = ros->map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[a].lane_set.elements[d].overlays[0].elements[y].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_20) {
                            }
                    }
                    
                    // Field name: preempt_priority_data  // avoided
                    // Field name: regional  // avoided
                    if(*_ext_flag_9) {
                    }
            }
        }
        
        if(ros->map.road_segments.size() != 0) {
            // Field:  type(RoadSegmentList) name(road_segments) extGroup(0)
            // SequenceOf
            // Data Type UInt8
            // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
            __aux64__ = ros->map.road_segments[0].elements.size();
            if(__aux64__ > 32) __aux64__ = 32;
            uint16_t* _tmp_153 = (uint16_t*)buffer;
            buffer += 2;
            *_tmp_153 = __aux64__ - 1;
            
            int __ifz = __aux64__;
            for(int z = 0; z < __ifz; z++) { 
                
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
                    uint8_t* _ext_flag_75 = (uint8_t*) buffer++;  // Write extension flag for RoadSegment
                    *_ext_flag_75 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_154 = (char*) buffer++;
                    *_tmp_154 = (ros->map.road_segments[0].elements[z].name.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000155\033[0m| Optional field name = " << *_tmp_154;
                    char* _tmp_155 = (char*) buffer++;
                    *_tmp_155 = (ros->map.road_segments[0].elements[z].lane_width.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000156\033[0m| Optional field lane_width = " << *_tmp_155;
                    char* _tmp_156 = (char*) buffer++;
                    *_tmp_156 = (ros->map.road_segments[0].elements[z].speed_limits.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000157\033[0m| Optional field speed_limits = " << *_tmp_156;
                    char* _tmp_157 = (char*) buffer++;
                    *_tmp_157 = (ros->map.road_segments[0].elements[z].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000158\033[0m| Optional field regional = " << *_tmp_157;
                    
                    if(ros->map.road_segments[0].elements[z].name.size() != 0) {
                        // Field:  type(DescriptiveName) name(name) extGroup(0)
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_158 = (uint8_t*)buffer;
                        __aux64__ = ros->map.road_segments[0].elements[z].name[0].value.size();
                        
                        if(ros->map.road_segments[0].elements[z].name[0].value.size() < 1) {
                            logger->warning() << "Error: Length of 'map.road_segments[0].elements[z].name[0].value' " << (ros->map.road_segments[0].elements[z].name[0].value) << " is less than allowable (1); message dropped.";
                            return -1;
                        }
                        if(ros->map.road_segments[0].elements[z].name[0].value.size() > 63) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].name[0].value' " << (ros->map.road_segments[0].elements[z].name[0].value) << " exceeds max allowable (63); message dropped.";
                            return -1;
                        }
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000159\033[0m| map.road_segments[0].elements[z].name[0].value.size(): " << 
                                        static_cast<int>(ros->map.road_segments[0].elements[z].name[0].value.size());
                        
                        if(__aux64__ > 63) __aux64__ = 63;
                        *_tmp_158 = __aux64__ - 1;
                        buffer += 1;
                        
                        int __ifa = __aux64__;
                        for(int a = 0; a < __ifa; a++) {  // 63
                            char* __tmp__ = (char*)buffer++;
                            *__tmp__ = ros->map.road_segments[0].elements[z].name[0].value.c_str()[a];
                        }
                    }
                    
                    // Field:  type(RoadSegmentReferenceID) name(id) extGroup(0)
                        // RoadSegmentReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         RoadSegmentID       
                        // Optional fields bytemap
                        char* _tmp_159 = (char*) buffer++;
                        *_tmp_159 = (ros->map.road_segments[0].elements[z].id.region.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000160\033[0m| Optional field region = " << *_tmp_159;
                        
                        if(ros->map.road_segments[0].elements[z].id.region.size() != 0) {
                            // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000161\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].id.region[0].value) << 
                                             " map.road_segments[0].elements[z].id.region[0].value: " << ros->map.road_segments[0].elements[z].id.region[0].value;
                            }
                            
                            uint16_t* _tmp_160 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_160 = ros->map.road_segments[0].elements[z].id.region[0].value; 
                            __aux64__ = ros->map.road_segments[0].elements[z].id.region[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(RoadSegmentID) name(id) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000162\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].id.id.value) << 
                                         " map.road_segments[0].elements[z].id.id.value: " << ros->map.road_segments[0].elements[z].id.id.value;
                        }
                        
                        uint16_t* _tmp_161 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_161 = ros->map.road_segments[0].elements[z].id.id.value; 
                        __aux64__ = ros->map.road_segments[0].elements[z].id.id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(MsgCount) name(revision) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(127) span(128) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000163\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].revision.value) << 
                                     " map.road_segments[0].elements[z].revision.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].revision.value);
                    }
                    
                    uint8_t* _tmp_162 = (uint8_t*) buffer++;
                    *_tmp_162 = ros->map.road_segments[0].elements[z].revision.value; 
                    __aux64__ = ros->map.road_segments[0].elements[z].revision.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].revision.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].revision.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(Position3D) name(ref_point) extGroup(0)
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_79 = (uint8_t*) buffer++;  // Write extension flag for Position3D
                        *_ext_flag_79 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_163 = (char*) buffer++;
                        *_tmp_163 = (ros->map.road_segments[0].elements[z].ref_point.elevation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000164\033[0m| Optional field elevation = " << *_tmp_163;
                        char* _tmp_164 = (char*) buffer++;
                        *_tmp_164 = (ros->map.road_segments[0].elements[z].ref_point.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000165\033[0m| Optional field regional = " << *_tmp_164;
                        
                        // Field:  type(Latitude) name(lat) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000166\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].ref_point.lat.value) << 
                                         " map.road_segments[0].elements[z].ref_point.lat.value: " << ros->map.road_segments[0].elements[z].ref_point.lat.value;
                        }
                        
                        double _tmp_166 = ros->map.road_segments[0].elements[z].ref_point.lat.value;
                        _tmp_166 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_166);
                        _tmp_166 -= -900000000;
                        uint32_t* _tmp_165 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_165 = static_cast<uint32_t>(_tmp_166);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Longitude) name(longint) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000167\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].ref_point.longint.value) << 
                                         " map.road_segments[0].elements[z].ref_point.longint.value: " << ros->map.road_segments[0].elements[z].ref_point.longint.value;
                        }
                        
                        double _tmp_168 = ros->map.road_segments[0].elements[z].ref_point.longint.value;
                        _tmp_168 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_168);
                        _tmp_168 -= -1800000000;
                        uint32_t* _tmp_167 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_167 = static_cast<uint32_t>(_tmp_168);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.longint.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.longint.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                            return -1;
                        }
                        
                        if(ros->map.road_segments[0].elements[z].ref_point.elevation.size() != 0) {
                            // Field:  type(Elevation) name(elevation) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000168\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].ref_point.elevation[0].value) << 
                                             " map.road_segments[0].elements[z].ref_point.elevation[0].value: " << ros->map.road_segments[0].elements[z].ref_point.elevation[0].value;
                            }
                            
                            float _tmp_170 = ros->map.road_segments[0].elements[z].ref_point.elevation[0].value;
                            _tmp_170 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_170);
                            _tmp_170 -= -4096;
                            uint16_t* _tmp_169 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_169 = static_cast<uint16_t>(_tmp_170);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.elevation[0].value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].ref_point.elevation[0].value' (" << __aux64__ << ") exceeds max allowable (61439); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_79) {
                        }
                    
                    if(ros->map.road_segments[0].elements[z].lane_width.size() != 0) {
                        // Field:  type(LaneWidth) name(lane_width) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(32767) span(32768) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000169\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].lane_width[0].value) << 
                                         " map.road_segments[0].elements[z].lane_width[0].value: " << ros->map.road_segments[0].elements[z].lane_width[0].value;
                        }
                        
                        uint16_t* _tmp_172 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_172 = ros->map.road_segments[0].elements[z].lane_width[0].value; 
                        __aux64__ = ros->map.road_segments[0].elements[z].lane_width[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].lane_width[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].lane_width[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->map.road_segments[0].elements[z].speed_limits.size() != 0) {
                        // Field:  type(SpeedLimitList) name(speed_limits) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                        __aux64__ = ros->map.road_segments[0].elements[z].speed_limits[0].elements.size();
                        if(__aux64__ > 9) __aux64__ = 9;
                        uint16_t* _tmp_173 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_173 = __aux64__ - 1;
                        
                        int __ifb = __aux64__;
                        for(int b = 0; b < __ifb; b++) { 
                            
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                // Optional fields bytemap
                                
                                // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(12) span(13) dataType(Int32)
                                uint8_t* _ext_flag_84 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000171\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value) << 
                                                 " map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value);
                                }
                                
                                uint8_t* _tmp_174 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_174 = ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value; 
                                __aux64__ = ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Velocity) name(speed) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000172\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value) << 
                                                 " map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value: " << ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value;
                                }
                                
                                uint16_t* _tmp_175 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_175 = ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value; 
                                __aux64__ = ros->map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].speed_limits[0].elements[b].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                    return -1;
                                }
                                
                        }
                    }
                    
                    // Field:  type(RoadLaneSetList) name(road_lane_set) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255) ext(false)
                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_176 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_176 = __aux64__ - 1;
                    
                    int __ifc = __aux64__;
                    for(int c = 0; c < __ifc; c++) { 
                        
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
                            uint8_t* _ext_flag_86 = (uint8_t*) buffer++;  // Write extension flag for GenericLane
                            *_ext_flag_86 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_177 = (char*) buffer++;
                            *_tmp_177 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000174\033[0m| Optional field name = " << *_tmp_177;
                            char* _tmp_178 = (char*) buffer++;
                            *_tmp_178 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000175\033[0m| Optional field ingress_approach = " << *_tmp_178;
                            char* _tmp_179 = (char*) buffer++;
                            *_tmp_179 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000176\033[0m| Optional field egress_approach = " << *_tmp_179;
                            char* _tmp_180 = (char*) buffer++;
                            *_tmp_180 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000177\033[0m| Optional field maneuvers = " << *_tmp_180;
                            char* _tmp_181 = (char*) buffer++;
                            *_tmp_181 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000178\033[0m| Optional field connects_to = " << *_tmp_181;
                            char* _tmp_182 = (char*) buffer++;
                            *_tmp_182 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000179\033[0m| Optional field overlays = " << *_tmp_182;
                            char* _tmp_183 = (char*) buffer++;
                            *_tmp_183 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].regional.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000180\033[0m| Optional field regional = " << *_tmp_183;
                            
                            // Field:  type(LaneID) name(lane_id) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000181\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value) << 
                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value);
                            }
                            
                            uint8_t* _tmp_184 = (uint8_t*) buffer++;
                            *_tmp_184 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value; 
                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name.size() != 0) {
                                // Field:  type(DescriptiveName) name(name) extGroup(0)
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_185 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value.size();
                                
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value.size() < 1) {
                                    logger->warning() << "Error: Length of 'map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value) << " is less than allowable (1); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value.size() > 63) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value) << " exceeds max allowable (63); message dropped.";
                                    return -1;
                                }
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000182\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value.size(): " << 
                                                static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value.size());
                                
                                if(__aux64__ > 63) __aux64__ = 63;
                                *_tmp_185 = __aux64__ - 1;
                                buffer += 1;
                                
                                int __ifd = __aux64__;
                                for(int d = 0; d < __ifd; d++) {  // 63
                                    char* __tmp__ = (char*)buffer++;
                                    *__tmp__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].name[0].value.c_str()[d];
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(ingress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000183\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value) << 
                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_186 = (uint8_t*) buffer++;
                                *_tmp_186 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value; 
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].ingress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(egress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000184\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value) << 
                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_187 = (uint8_t*) buffer++;
                                *_tmp_187 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value; 
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].egress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(LaneAttributes) name(lane_attributes) extGroup(0)
                                // LaneAttributes  SEQUENCE
                                    //  directionalUse LaneDirection          
                                    //  sharedWith     LaneSharing            
                                    //  laneType       LaneTypeAttributes     
                                    //  regional       RegionalExtension    OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_188 = (char*) buffer++;
                                *_tmp_188 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.regional.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000185\033[0m| Optional field regional = " << *_tmp_188;
                                
                                // Field:  type(LaneDirection) name(directional_use) extGroup(0)
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000186\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values.size());
                                
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values.size() < 2) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values.size()) << " is less than allowable (2); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values.size() > 2) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values.size()) << " exceeds max allowable (2); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_189 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values.size();
                                if(__aux64__ > 2) __aux64__ = 2;
                                *_tmp_189 = __aux64__ - 2;
                                buffer += 1;
                                
                                int __ife = __aux64__;
                                for(int e = 0; e < __ife; e++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.directional_use.values[e]? 1: 0);
                                }
                                
                                // Field:  type(LaneSharing) name(shared_with) extGroup(0)
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000187\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values.size());
                                
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values.size() < 10) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values.size()) << " is less than allowable (10); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values.size() > 10) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values.size()) << " exceeds max allowable (10); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_190 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values.size();
                                if(__aux64__ > 10) __aux64__ = 10;
                                *_tmp_190 = __aux64__ - 10;
                                buffer += 1;
                                
                                int __iff = __aux64__;
                                for(int f = 0; f < __iff; f++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.shared_with.values[f]? 1: 0);
                                }
                                
                                // Field:  type(LaneTypeAttributes) name(lane_type) extGroup(0)
                                // Choice
                                   // #0  vehicle   LaneAttributes_Vehicle
                                   // #1  crosswalk   LaneAttributes_Crosswalk
                                   // #2  bikeLane   LaneAttributes_Bike
                                   // #3  sidewalk   LaneAttributes_Sidewalk
                                   // #4  median   LaneAttributes_Barrier
                                   // #5  striping   LaneAttributes_Striping
                                   // #6  trackedVehicle   LaneAttributes_TrackedVehicle
                                   // #7  parking   LaneAttributes_Parking
                                uint8_t* _ext_flag_90 = (uint8_t*) buffer; 
                                buffer++;
                                *_ext_flag_90 = 0; 
                                
                                uint8_t* _choice_7 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle.size() != 0) {  // CHOICE 0  fieldType(LaneTypeAttributes) 
                                    *_choice_7 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000188\033[0m| Choice selection: 0";
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000189\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values.size() < 8) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values.size()) << " is less than allowable (8); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values.size() > 8) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values.size()) << " exceeds max allowable (8); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _ext_flag_91 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].
                                    *_ext_flag_91 = 0; 
                                    
                                    uint8_t* _tmp_191 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values.size();
                                    if(__aux64__ > 8) __aux64__ = 8;
                                    *_tmp_191 = __aux64__ - 8;
                                    buffer += 1;
                                    
                                    int __ifg = __aux64__;
                                    for(int g = 0; g < __ifg; g++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.vehicle[0].values[g]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk.size() != 0)  // CHOICE 1  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_7 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000190\033[0m| Choice selection: 1";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000191\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_192 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_192 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifh = __aux64__;
                                    for(int h = 0; h < __ifh; h++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.crosswalk[0].values[h]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane.size() != 0)  // CHOICE 2  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_7 = 2;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000192\033[0m| Choice selection: 2";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000193\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_193 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_193 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifi = __aux64__;
                                    for(int i = 0; i < __ifi; i++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.bike_lane[0].values[i]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk.size() != 0)  // CHOICE 3  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_7 = 3;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000194\033[0m| Choice selection: 3";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000195\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_194 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_194 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifj = __aux64__;
                                    for(int j = 0; j < __ifj; j++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.sidewalk[0].values[j]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median.size() != 0)  // CHOICE 4  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_7 = 4;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000196\033[0m| Choice selection: 4";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000197\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_195 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_195 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifk = __aux64__;
                                    for(int k = 0; k < __ifk; k++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.median[0].values[k]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping.size() != 0)  // CHOICE 5  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_7 = 5;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000198\033[0m| Choice selection: 5";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000199\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_196 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_196 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifl = __aux64__;
                                    for(int l = 0; l < __ifl; l++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.striping[0].values[l]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle.size() != 0)  // CHOICE 6  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_7 = 6;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000200\033[0m| Choice selection: 6";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000201\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_197 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_197 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifm = __aux64__;
                                    for(int m = 0; m < __ifm; m++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.tracked_vehicle[0].values[m]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking.size() != 0)  // CHOICE 7  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_7 = 7;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000202\033[0m| Choice selection: 7";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000203\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_198 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_198 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifn = __aux64__;
                                    for(int n = 0; n < __ifn; n++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type.parking[0].values[n]? 1: 0);
                                    }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_7) << ") selected in CHOICE LaneTypeAttributes in 'map.road_segments[0].elements[z].road_lane_set.elements[c].lane_attributes.lane_type'; message dropped.";
                                    return -1;
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers.size() != 0) {
                                // Field:  type(AllowedManeuvers) name(maneuvers) extGroup(0)
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000204\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values.size());
                                
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values.size() < 12) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values.size()) << " is less than allowable (12); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values.size() > 12) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_199 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values.size();
                                if(__aux64__ > 12) __aux64__ = 12;
                                *_tmp_199 = __aux64__ - 12;
                                buffer += 1;
                                
                                int __ifo = __aux64__;
                                for(int o = 0; o < __ifo; o++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].maneuvers[0].values[o]? 1: 0);
                                }
                            }
                            
                            // Field:  type(NodeListXY) name(node_list) extGroup(0)
                            // Choice
                               // #0  nodes   NodeSetXY
                               // #1  computed   ComputedLane
                            uint8_t* _ext_flag_92 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_92 = 0; 
                            
                            uint8_t* _choice_8 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes.size() != 0) {  // CHOICE 0  fieldType(NodeListXY) 
                                *_choice_8 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000205\033[0m| Choice selection: 0";
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62) ext(false)
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements.size();
                                if(__aux64__ > 63) __aux64__ = 63;
                                uint16_t* _tmp_200 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_200 = __aux64__ - 2;
                                
                                int __ifp = __aux64__;
                                for(int p = 0; p < __ifp; p++) { 
                                    
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_93 = (uint8_t*) buffer++;  // Write extension flag for NodeXY
                                        *_ext_flag_93 = 0;  
                                        
                                        // Optional fields bytemap
                                        char* _tmp_201 = (char*) buffer++;
                                        *_tmp_201 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000207\033[0m| Optional field attributes = " << *_tmp_201;
                                        
                                        // Field:  type(NodeOffsetPointXY) name(delta) extGroup(0)
                                        // Choice
                                           // #0  node_XY1   Node_XY_20b
                                           // #1  node_XY2   Node_XY_22b
                                           // #2  node_XY3   Node_XY_24b
                                           // #3  node_XY4   Node_XY_26b
                                           // #4  node_XY5   Node_XY_28b
                                           // #5  node_XY6   Node_XY_32b
                                           // #6  node_LatLon   Node_LLmD_64b
                                           // #7  regional   RegionalExtension
                                        uint8_t* _choice_9 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1.size() != 0) {  // CHOICE 0  fieldType(NodeOffsetPointXY) 
                                            *_choice_9 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000208\033[0m| Choice selection: 0";
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B10) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000209\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value;
                                                }
                                                
                                                float _tmp_203 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value;
                                                _tmp_203 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_203);
                                                _tmp_203 -= -512;
                                                uint16_t* _tmp_202 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_202 = static_cast<uint16_t>(_tmp_203);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].x.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B10) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000210\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value;
                                                }
                                                
                                                float _tmp_205 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value;
                                                _tmp_205 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_205);
                                                _tmp_205 -= -512;
                                                uint16_t* _tmp_204 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_204 = static_cast<uint16_t>(_tmp_205);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy1[0].y.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2.size() != 0)  // CHOICE 1  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_9 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000211\033[0m| Choice selection: 1";
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B11) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000212\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value;
                                                }
                                                
                                                float _tmp_207 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value;
                                                _tmp_207 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_207);
                                                _tmp_207 -= -1024;
                                                uint16_t* _tmp_206 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_206 = static_cast<uint16_t>(_tmp_207);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].x.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B11) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000213\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value;
                                                }
                                                
                                                float _tmp_209 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value;
                                                _tmp_209 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_209);
                                                _tmp_209 -= -1024;
                                                uint16_t* _tmp_208 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_208 = static_cast<uint16_t>(_tmp_209);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy2[0].y.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3.size() != 0)  // CHOICE 2  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_9 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000214\033[0m| Choice selection: 2";
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B12) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000215\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value;
                                                }
                                                
                                                float _tmp_211 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value;
                                                _tmp_211 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_211);
                                                _tmp_211 -= -2048;
                                                uint16_t* _tmp_210 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_210 = static_cast<uint16_t>(_tmp_211);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].x.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B12) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000216\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value;
                                                }
                                                
                                                float _tmp_213 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value;
                                                _tmp_213 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_213);
                                                _tmp_213 -= -2048;
                                                uint16_t* _tmp_212 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_212 = static_cast<uint16_t>(_tmp_213);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy3[0].y.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4.size() != 0)  // CHOICE 3  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_9 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000217\033[0m| Choice selection: 3";
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B13) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000218\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value;
                                                }
                                                
                                                float _tmp_215 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value;
                                                _tmp_215 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_215);
                                                _tmp_215 -= -4096;
                                                uint16_t* _tmp_214 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_214 = static_cast<uint16_t>(_tmp_215);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].x.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B13) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000219\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value;
                                                }
                                                
                                                float _tmp_217 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value;
                                                _tmp_217 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_217);
                                                _tmp_217 -= -4096;
                                                uint16_t* _tmp_216 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_216 = static_cast<uint16_t>(_tmp_217);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy4[0].y.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5.size() != 0)  // CHOICE 4  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_9 = 4;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000220\033[0m| Choice selection: 4";
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B14) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000221\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value;
                                                }
                                                
                                                float _tmp_219 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value;
                                                _tmp_219 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_219);
                                                _tmp_219 -= -8192;
                                                uint16_t* _tmp_218 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_218 = static_cast<uint16_t>(_tmp_219);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].x.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B14) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000222\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value;
                                                }
                                                
                                                float _tmp_221 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value;
                                                _tmp_221 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_221);
                                                _tmp_221 -= -8192;
                                                uint16_t* _tmp_220 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_220 = static_cast<uint16_t>(_tmp_221);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy5[0].y.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6.size() != 0)  // CHOICE 5  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_9 = 5;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000223\033[0m| Choice selection: 5";
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B16) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000224\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value;
                                                }
                                                
                                                float _tmp_223 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value;
                                                _tmp_223 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_223);
                                                _tmp_223 -= -32768;
                                                uint16_t* _tmp_222 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_222 = static_cast<uint16_t>(_tmp_223);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].x.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B16) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000225\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value;
                                                }
                                                
                                                float _tmp_225 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value;
                                                _tmp_225 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_225);
                                                _tmp_225 -= -32768;
                                                uint16_t* _tmp_224 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_224 = static_cast<uint16_t>(_tmp_225);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_xy6[0].y.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon.size() != 0)  // CHOICE 6  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_9 = 6;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000226\033[0m| Choice selection: 6";
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Longitude) name(lon) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000227\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value;
                                                }
                                                
                                                double _tmp_227 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value;
                                                _tmp_227 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_227);
                                                _tmp_227 -= -1800000000;
                                                uint32_t* _tmp_226 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_226 = static_cast<uint32_t>(_tmp_227);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Latitude) name(lat) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000228\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value;
                                                }
                                                
                                                double _tmp_229 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value;
                                                _tmp_229 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_229);
                                                _tmp_229 -= -900000000;
                                                uint32_t* _tmp_228 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_228 = static_cast<uint32_t>(_tmp_229);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_9) << ") selected in CHOICE NodeOffsetPointXY in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].delta'; message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes.size() != 0) {
                                            // Field:  type(NodeAttributeSetXY) name(attributes) extGroup(0)
                                                // NodeAttributeSetXY  SEQUENCE
                                                    //  localNode  NodeAttributeXYList           OPTIONAL  
                                                    //  disabled   SegmentAttributeXYList        OPTIONAL  
                                                    //  enabled    SegmentAttributeXYList        OPTIONAL  
                                                    //  data       LaneDataAttributeList         OPTIONAL  
                                                    //  dWidth     Offset_B10                    OPTIONAL  
                                                    //  dElevation Offset_B10                    OPTIONAL  
                                                    //  regional   NodeAttributeSetXY_regional   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_109 = (uint8_t*) buffer++;  // Write extension flag for NodeAttributeSetXY
                                                *_ext_flag_109 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_230 = (char*) buffer++;
                                                *_tmp_230 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000229\033[0m| Optional field local_node = " << *_tmp_230;
                                                char* _tmp_231 = (char*) buffer++;
                                                *_tmp_231 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000230\033[0m| Optional field disabled = " << *_tmp_231;
                                                char* _tmp_232 = (char*) buffer++;
                                                *_tmp_232 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000231\033[0m| Optional field enabled = " << *_tmp_232;
                                                char* _tmp_233 = (char*) buffer++;
                                                *_tmp_233 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000232\033[0m| Optional field data = " << *_tmp_233;
                                                char* _tmp_234 = (char*) buffer++;
                                                *_tmp_234 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000233\033[0m| Optional field d_width = " << *_tmp_234;
                                                char* _tmp_235 = (char*) buffer++;
                                                *_tmp_235 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000234\033[0m| Optional field d_elevation = " << *_tmp_235;
                                                char* _tmp_236 = (char*) buffer++;
                                                *_tmp_236 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].regional.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000235\033[0m| Optional field regional = " << *_tmp_236;
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node.size() != 0) {
                                                    // Field:  type(NodeAttributeXYList) name(local_node) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_237 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_237 = __aux64__ - 1;
                                                    
                                                    int __ifq = __aux64__;
                                                    for(int q = 0; q < __ifq; q++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) dataType(Int32)
                                                        uint8_t* _ext_flag_110 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000237\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value) << 
                                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_238 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_238 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value; 
                                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].local_node[0].elements[q].value' (" << __aux64__ << ") exceeds max allowable (11); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(disabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_239 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_239 = __aux64__ - 1;
                                                    
                                                    int __ifr = __aux64__;
                                                    for(int r = 0; r < __ifr; r++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_111 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000239\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value) << 
                                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_240 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_240 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value; 
                                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].disabled[0].elements[r].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(enabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_241 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_241 = __aux64__ - 1;
                                                    
                                                    int __ifs = __aux64__;
                                                    for(int s = 0; s < __ifs; s++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_112 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m000241\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value) << 
                                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_242 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_242 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value; 
                                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].enabled[0].elements[s].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data.size() != 0) {
                                                    // Field:  type(LaneDataAttributeList) name(data) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_243 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_243 = __aux64__ - 1;
                                                    
                                                    int __ift = __aux64__;
                                                    for(int t = 0; t < __ift; t++) { 
                                                        
                                                        // Choice
                                                           // #0  pathEndPointAngle   DeltaAngle
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle
                                                           // #4  laneAngle   MergeDivergeNodeAngle
                                                           // #5  speedLimits   SpeedLimitList
                                                           // #6  regional   LaneDataAttribute_regional
                                                        uint8_t* _ext_flag_113 = (uint8_t*) buffer; 
                                                        buffer++;
                                                        *_ext_flag_113 = 0; 
                                                        
                                                        uint8_t* _choice_10 = (uint8_t*) buffer;
                                                        buffer++;
                                                        
                                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle.size() != 0) {  // CHOICE 0  fieldType(LaneDataAttribute) 
                                                            *_choice_10 = 0;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000243\033[0m| Choice selection: 0";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-150) max(150) span(301) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000244\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_244 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value - -150;
                                                            *_tmp_244 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value' (" << __aux64__ << ") less than (-150); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].path_end_point_angle[0].value' (" << __aux64__ << ") exceeds max allowable (150); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center.size() != 0)  // CHOICE 1  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_10 = 1;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000245\033[0m| Choice selection: 1";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000246\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_245 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value - -128;
                                                            *_tmp_245 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_center[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left.size() != 0)  // CHOICE 2  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_10 = 2;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000247\033[0m| Choice selection: 2";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000248\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_246 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value - -128;
                                                            *_tmp_246 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_left[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right.size() != 0)  // CHOICE 3  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_10 = 3;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000249\033[0m| Choice selection: 3";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000250\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_247 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value - -128;
                                                            *_tmp_247 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_crown_point_right[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle.size() != 0)  // CHOICE 4  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_10 = 4;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000251\033[0m| Choice selection: 4";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-180) max(180) span(361) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000252\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value) << 
                                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_248 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value - -180;
                                                            *_tmp_248 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value' (" << __aux64__ << ") less than (-180); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].lane_angle[0].value' (" << __aux64__ << ") exceeds max allowable (180); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits.size() != 0)  // CHOICE 5  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_10 = 5;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000253\033[0m| Choice selection: 5";
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements.size();
                                                            if(__aux64__ > 9) __aux64__ = 9;
                                                            uint16_t* _tmp_249 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_249 = __aux64__ - 1;
                                                            
                                                            int __ifu = __aux64__;
                                                            for(int u = 0; u < __ifu; u++) { 
                                                                
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    // Optional fields bytemap
                                                                    
                                                                    // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) dataType(Int32)
                                                                    uint8_t* _ext_flag_119 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000255\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value) << 
                                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_250 = (uint8_t*)buffer;
                                                                    buffer += 1;
                                                                    *_tmp_250 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value; 
                                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value; 
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(Velocity) name(speed) extGroup(0)
                                                                    // Integer
                                                                    
                                                                    // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000256\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value) << 
                                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value;
                                                                    }
                                                                    
                                                                    uint16_t* _tmp_251 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_251 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value; 
                                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value;
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t].speed_limits[0].elements[u].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                            }
                                                        
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_10) << ") selected in CHOICE LaneDataAttribute in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].data[0].elements[t]'; message dropped.";
                                                            return -1;
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_width) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000257\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value) << 
                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value;
                                                    }
                                                    
                                                    float _tmp_253 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value;
                                                    _tmp_253 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_253);
                                                    _tmp_253 -= -512;
                                                    uint16_t* _tmp_252 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_252 = static_cast<uint16_t>(_tmp_253);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_width[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_elevation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000258\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value) << 
                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value;
                                                    }
                                                    
                                                    float _tmp_255 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value;
                                                    _tmp_255 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_255);
                                                    _tmp_255 -= -512;
                                                    uint16_t* _tmp_254 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_254 = static_cast<uint16_t>(_tmp_255);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.nodes[0].elements[p].attributes[0].d_elevation[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_109) {
                                                }
                                        }
                                        
                                        if(*_ext_flag_93) {
                                        }
                                }
                            
                            }
                            else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed.size() != 0)  // CHOICE 1  fieldType(NodeListXY) 
                            {
                                *_choice_8 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000259\033[0m| Choice selection: 1";
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_123 = (uint8_t*) buffer++;  // Write extension flag for ComputedLane
                                    *_ext_flag_123 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_258 = (char*) buffer++;
                                    *_tmp_258 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000260\033[0m| Optional field rotate_xy = " << *_tmp_258;
                                    char* _tmp_259 = (char*) buffer++;
                                    *_tmp_259 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000261\033[0m| Optional field scale_xaxis = " << *_tmp_259;
                                    char* _tmp_260 = (char*) buffer++;
                                    *_tmp_260 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000262\033[0m| Optional field scale_yaxis = " << *_tmp_260;
                                    char* _tmp_261 = (char*) buffer++;
                                    *_tmp_261 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].regional.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000263\033[0m| Optional field regional = " << *_tmp_261;
                                    
                                    // Field:  type(LaneID) name(reference_lane_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000264\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    uint8_t* _tmp_262 = (uint8_t*) buffer++;
                                    *_tmp_262 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value; 
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetXaxis) name(offset_xaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_11 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetXaxis) 
                                        *_choice_11 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000265\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000266\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_263 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value - -2047;
                                        *_tmp_263 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetXaxis) 
                                    {
                                        *_choice_11 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000267\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000268\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_264 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value - -32767;
                                        *_tmp_264 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_11) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetYaxis) name(offset_yaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_12 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetYaxis) 
                                        *_choice_12 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000269\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000270\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_265 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value - -2047;
                                        *_tmp_265 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetYaxis) 
                                    {
                                        *_choice_12 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000271\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000272\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_266 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value - -32767;
                                        *_tmp_266 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_12) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field:  type(Angle) name(rotate_xy) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(28800) span(28801) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000273\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        uint16_t* _tmp_267 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_267 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value; 
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") exceeds max allowable (28800); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_xaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000274\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_268 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value - -2048;
                                        *_tmp_268 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_yaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000275\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_269 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value - -2048;
                                        *_tmp_269 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_123) {
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_8) << ") selected in CHOICE NodeListXY in 'map.road_segments[0].elements[z].road_lane_set.elements[c].node_list'; message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to.size() != 0) {
                                // Field:  type(ConnectsToList) name(connects_to) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_271 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_271 = __aux64__ - 1;
                                
                                int __ifv = __aux64__;
                                for(int v = 0; v < __ifv; v++) { 
                                    
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_272 = (char*) buffer++;
                                        *_tmp_272 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000277\033[0m| Optional field remote_intersection = " << *_tmp_272;
                                        char* _tmp_273 = (char*) buffer++;
                                        *_tmp_273 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000278\033[0m| Optional field signal_group = " << *_tmp_273;
                                        char* _tmp_274 = (char*) buffer++;
                                        *_tmp_274 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000279\033[0m| Optional field user_class = " << *_tmp_274;
                                        char* _tmp_275 = (char*) buffer++;
                                        *_tmp_275 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000280\033[0m| Optional field connection_id = " << *_tmp_275;
                                        
                                        // Field:  type(ConnectingLane) name(connecting_lane) extGroup(0)
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_276 = (char*) buffer++;
                                            *_tmp_276 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000281\033[0m| Optional field maneuver = " << *_tmp_276;
                                            
                                            // Field:  type(LaneID) name(lane) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000282\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value);
                                            }
                                            
                                            uint8_t* _tmp_277 = (uint8_t*) buffer++;
                                            *_tmp_277 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value; 
                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.lane.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver.size() != 0) {
                                                // Field:  type(AllowedManeuvers) name(maneuver) extGroup(0)
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000283\033[0m| map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values.size());
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values.size() < 12) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values.size()) << " is less than allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values.size() > 12) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].value' " << (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                
                                                uint8_t* _tmp_278 = (uint8_t*)buffer;
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values.size();
                                                if(__aux64__ > 12) __aux64__ = 12;
                                                *_tmp_278 = __aux64__ - 12;
                                                buffer += 1;
                                                
                                                int __ifw = __aux64__;
                                                for(int w = 0; w < __ifw; w++) {
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    *__b__ = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connecting_lane.maneuver[0].values[w]? 1: 0);
                                                }
                                            }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection.size() != 0) {
                                            // Field:  type(IntersectionReferenceID) name(remote_intersection) extGroup(0)
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                // Optional fields bytemap
                                                char* _tmp_279 = (char*) buffer++;
                                                *_tmp_279 = (ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000284\033[0m| Optional field region = " << *_tmp_279;
                                                
                                                if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region.size() != 0) {
                                                    // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000285\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value) << 
                                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_280 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_280 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value; 
                                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(IntersectionID) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000286\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value) << 
                                                                 " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value: " << ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_281 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_281 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value; 
                                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].remote_intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group.size() != 0) {
                                            // Field:  type(SignalGroupID) name(signal_group) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000287\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value);
                                            }
                                            
                                            uint8_t* _tmp_282 = (uint8_t*) buffer++;
                                            *_tmp_282 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value; 
                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].signal_group[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class.size() != 0) {
                                            // Field:  type(RestrictionClassID) name(user_class) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000288\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_283 = (uint8_t*) buffer++;
                                            *_tmp_283 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value; 
                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].user_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id.size() != 0) {
                                            // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000289\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value) << 
                                                             " map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value);
                                            }
                                            
                                            uint8_t* _tmp_284 = (uint8_t*) buffer++;
                                            *_tmp_284 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value; 
                                            __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].connects_to[0].elements[v].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays.size() != 0) {
                                // Field:  type(OverlayLaneList) name(overlays) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5) ext(false)
                                __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements.size();
                                if(__aux64__ > 5) __aux64__ = 5;
                                uint16_t* _tmp_285 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_285 = __aux64__ - 1;
                                
                                int __ifx = __aux64__;
                                for(int x = 0; x < __ifx; x++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000291\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value) << 
                                                     " map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value: " << static_cast<int>(ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value);
                                    }
                                    
                                    uint8_t* _tmp_286 = (uint8_t*) buffer++;
                                    *_tmp_286 = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value; 
                                    __aux64__ = ros->map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[z].road_lane_set.elements[c].overlays[0].elements[x].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_86) {
                            }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_75) {
                    }
            }
        }
        
        if(ros->map.data_parameters.size() != 0) {
            // Field:  type(DataParameters) name(data_parameters) extGroup(0)
                // DataParameters  SEQUENCE
                    //  processMethod   DataParameters_processMethod     OPTIONAL  
                    //  processAgency   DataParameters_processAgency     OPTIONAL  
                    //  lastCheckedDate DataParameters_lastCheckedDate   OPTIONAL  
                    //  geoidUsed       DataParameters_geoidUsed         OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_141 = (uint8_t*) buffer++;  // Write extension flag for DataParameters
                *_ext_flag_141 = 0;  
                
                // Optional fields bytemap
                char* _tmp_289 = (char*) buffer++;
                *_tmp_289 = (ros->map.data_parameters[0].process_method.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m000292\033[0m| Optional field process_method = " << *_tmp_289;
                char* _tmp_290 = (char*) buffer++;
                *_tmp_290 = (ros->map.data_parameters[0].process_agency.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m000293\033[0m| Optional field process_agency = " << *_tmp_290;
                char* _tmp_291 = (char*) buffer++;
                *_tmp_291 = (ros->map.data_parameters[0].last_checked_date.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m000294\033[0m| Optional field last_checked_date = " << *_tmp_291;
                char* _tmp_292 = (char*) buffer++;
                *_tmp_292 = (ros->map.data_parameters[0].geoid_used.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m000295\033[0m| Optional field geoid_used = " << *_tmp_292;
                
                if(ros->map.data_parameters[0].process_method.size() != 0) {
                    // Field:  type(DataParameters_processMethod) name(process_method) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_293 = (uint8_t*)buffer;
                    __aux64__ = ros->map.data_parameters[0].process_method[0].value.size();
                    
                    if(ros->map.data_parameters[0].process_method[0].value.size() < 1) {
                        logger->warning() << "Error: Length of 'map.data_parameters[0].process_method[0].value' " << (ros->map.data_parameters[0].process_method[0].value) << " is less than allowable (1); message dropped.";
                        return -1;
                    }
                    if(ros->map.data_parameters[0].process_method[0].value.size() > 255) {
                        logger->warning() << "Error: Value in 'map.data_parameters[0].process_method[0].value' " << (ros->map.data_parameters[0].process_method[0].value) << " exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000296\033[0m| map.data_parameters[0].process_method[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].process_method[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_293 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ify = __aux64__;
                    for(int y = 0; y < __ify; y++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].process_method[0].value.c_str()[y];
                    }
                }
                
                if(ros->map.data_parameters[0].process_agency.size() != 0) {
                    // Field:  type(DataParameters_processAgency) name(process_agency) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_294 = (uint8_t*)buffer;
                    __aux64__ = ros->map.data_parameters[0].process_agency[0].value.size();
                    
                    if(ros->map.data_parameters[0].process_agency[0].value.size() < 1) {
                        logger->warning() << "Error: Length of 'map.data_parameters[0].process_agency[0].value' " << (ros->map.data_parameters[0].process_agency[0].value) << " is less than allowable (1); message dropped.";
                        return -1;
                    }
                    if(ros->map.data_parameters[0].process_agency[0].value.size() > 255) {
                        logger->warning() << "Error: Value in 'map.data_parameters[0].process_agency[0].value' " << (ros->map.data_parameters[0].process_agency[0].value) << " exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000297\033[0m| map.data_parameters[0].process_agency[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].process_agency[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_294 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ifz = __aux64__;
                    for(int z = 0; z < __ifz; z++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].process_agency[0].value.c_str()[z];
                    }
                }
                
                if(ros->map.data_parameters[0].last_checked_date.size() != 0) {
                    // Field:  type(DataParameters_lastCheckedDate) name(last_checked_date) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_295 = (uint8_t*)buffer;
                    __aux64__ = ros->map.data_parameters[0].last_checked_date[0].value.size();
                    
                    if(ros->map.data_parameters[0].last_checked_date[0].value.size() < 1) {
                        logger->warning() << "Error: Length of 'map.data_parameters[0].last_checked_date[0].value' " << (ros->map.data_parameters[0].last_checked_date[0].value) << " is less than allowable (1); message dropped.";
                        return -1;
                    }
                    if(ros->map.data_parameters[0].last_checked_date[0].value.size() > 255) {
                        logger->warning() << "Error: Value in 'map.data_parameters[0].last_checked_date[0].value' " << (ros->map.data_parameters[0].last_checked_date[0].value) << " exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000298\033[0m| map.data_parameters[0].last_checked_date[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].last_checked_date[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_295 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ifa = __aux64__;
                    for(int a = 0; a < __ifa; a++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].last_checked_date[0].value.c_str()[a];
                    }
                }
                
                if(ros->map.data_parameters[0].geoid_used.size() != 0) {
                    // Field:  type(DataParameters_geoidUsed) name(geoid_used) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_296 = (uint8_t*)buffer;
                    __aux64__ = ros->map.data_parameters[0].geoid_used[0].value.size();
                    
                    if(ros->map.data_parameters[0].geoid_used[0].value.size() < 1) {
                        logger->warning() << "Error: Length of 'map.data_parameters[0].geoid_used[0].value' " << (ros->map.data_parameters[0].geoid_used[0].value) << " is less than allowable (1); message dropped.";
                        return -1;
                    }
                    if(ros->map.data_parameters[0].geoid_used[0].value.size() > 255) {
                        logger->warning() << "Error: Value in 'map.data_parameters[0].geoid_used[0].value' " << (ros->map.data_parameters[0].geoid_used[0].value) << " exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000299\033[0m| map.data_parameters[0].geoid_used[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].geoid_used[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_296 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ifb = __aux64__;
                    for(int b = 0; b < __ifb; b++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].geoid_used[0].value.c_str()[b];
                    }
                }
                
                if(*_ext_flag_141) {
                }
        }
        
        // Field name: restriction_list  // avoided
        // Field name: regional  // avoided
        if(*_ext_flag_4) {
        }
    
	
            return buffer - start;
        }
    } 
}