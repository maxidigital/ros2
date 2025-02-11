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
            logger->debug() << "|\033[38;5;94m006887\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_7663 = (uint8_t*) buffer++;
        *_tmp_7663 = ros->hheader.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m006888\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_7664 = (uint8_t*) buffer++;
        *_tmp_7664 = ros->hheader.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m006889\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_7665 = (uint32_t*) buffer; buffer += 4;
        *_tmp_7665 = ros->hheader.station_id.value; 
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
        uint8_t* _ext_flag_3452 = (uint8_t*) buffer++;  // Write extension flag for MapData
        *_ext_flag_3452 = 0;  
        
        // Optional fields bytemap
        char* _tmp_7666 = (char*) buffer++;
        *_tmp_7666 = (ros->map.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006890\033[0m| Optional field time_stamp = " << *_tmp_7666;
        char* _tmp_7667 = (char*) buffer++;
        *_tmp_7667 = (ros->map.layer_type.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006891\033[0m| Optional field layer_type = " << *_tmp_7667;
        char* _tmp_7668 = (char*) buffer++;
        *_tmp_7668 = (ros->map.layer_id.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006892\033[0m| Optional field layer_id = " << *_tmp_7668;
        char* _tmp_7669 = (char*) buffer++;
        *_tmp_7669 = (ros->map.intersections.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006893\033[0m| Optional field intersections = " << *_tmp_7669;
        char* _tmp_7670 = (char*) buffer++;
        *_tmp_7670 = (ros->map.road_segments.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006894\033[0m| Optional field road_segments = " << *_tmp_7670;
        char* _tmp_7671 = (char*) buffer++;
        *_tmp_7671 = (ros->map.data_parameters.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006895\033[0m| Optional field data_parameters = " << *_tmp_7671;
        char* _tmp_7672 = (char*) buffer++;
        *_tmp_7672 = (ros->map.restriction_list.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006896\033[0m| Optional field restriction_list = " << *_tmp_7672;
        char* _tmp_7673 = (char*) buffer++;
        *_tmp_7673 = (ros->map.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006897\033[0m| Optional field regional = " << *_tmp_7673;
        
        if(ros->map.time_stamp.size() != 0) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->debug() << "|\033[38;5;94m006898\033[0m| " << tools::getTypeName(ros->map.time_stamp[0].value) << 
                             " map.time_stamp[0].value: " << ros->map.time_stamp[0].value;
            }
            
            uint32_t* _tmp_7674 = (uint32_t*) buffer; buffer += 4;
            *_tmp_7674 = ros->map.time_stamp[0].value; 
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
            logger->debug() << "|\033[38;5;94m006899\033[0m| " << tools::getTypeName(ros->map.msg_issue_revision.value) << 
                         " map.msg_issue_revision.value: " << static_cast<int>(ros->map.msg_issue_revision.value);
        }
        
        uint8_t* _tmp_7675 = (uint8_t*) buffer++;
        *_tmp_7675 = ros->map.msg_issue_revision.value; 
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
            uint8_t* _ext_flag_3455 = (uint8_t*) buffer++; // Write extension flag for ros->map.layer_type[0].
            if(debug) {
                logger->debug() << "|\033[38;5;94m006900\033[0m| " << tools::getTypeName(ros->map.layer_type[0].value) << 
                             " map.layer_type[0].value: " << static_cast<int>(ros->map.layer_type[0].value);
            }
            
            uint8_t* _tmp_7676 = (uint8_t*)buffer;
            buffer += 1;
            *_tmp_7676 = ros->map.layer_type[0].value; 
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
                logger->debug() << "|\033[38;5;94m006901\033[0m| " << tools::getTypeName(ros->map.layer_id[0].value) << 
                             " map.layer_id[0].value: " << static_cast<int>(ros->map.layer_id[0].value);
            }
            
            uint8_t* _tmp_7677 = (uint8_t*) buffer++;
            *_tmp_7677 = ros->map.layer_id[0].value; 
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
            uint16_t* _tmp_7678 = (uint16_t*)buffer;
            buffer += 2;
            *_tmp_7678 = __aux64__ - 1;
            
            int __ifg = __aux64__;
            for(int g = 0; g < __ifg; g++) { 
                
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
                    uint8_t* _ext_flag_3457 = (uint8_t*) buffer++;  // Write extension flag for IntersectionGeometry
                    *_ext_flag_3457 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_7679 = (char*) buffer++;
                    *_tmp_7679 = (ros->map.intersections[0].elements[g].name.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006903\033[0m| Optional field name = " << *_tmp_7679;
                    char* _tmp_7680 = (char*) buffer++;
                    *_tmp_7680 = (ros->map.intersections[0].elements[g].lane_width.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006904\033[0m| Optional field lane_width = " << *_tmp_7680;
                    char* _tmp_7681 = (char*) buffer++;
                    *_tmp_7681 = (ros->map.intersections[0].elements[g].speed_limits.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006905\033[0m| Optional field speed_limits = " << *_tmp_7681;
                    char* _tmp_7682 = (char*) buffer++;
                    *_tmp_7682 = (ros->map.intersections[0].elements[g].preempt_priority_data.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006906\033[0m| Optional field preempt_priority_data = " << *_tmp_7682;
                    char* _tmp_7683 = (char*) buffer++;
                    *_tmp_7683 = (ros->map.intersections[0].elements[g].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006907\033[0m| Optional field regional = " << *_tmp_7683;
                    
                    if(ros->map.intersections[0].elements[g].name.size() != 0) {
                        // Field:  type(DescriptiveName) name(name) extGroup(0)
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_7684 = (uint8_t*)buffer;
                        __aux64__ = ros->map.intersections[0].elements[g].name[0].value.size();
                        
                        if(ros->map.intersections[0].elements[g].name[0].value.size() < 1) {
                            logger->warning() << "Error: Length of 'map.intersections[0].elements[g].name[0].value' " << (ros->map.intersections[0].elements[g].name[0].value) << " is less than allowable (1); message dropped.";
                            return -1;
                        }
                        if(ros->map.intersections[0].elements[g].name[0].value.size() > 63) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].name[0].value' " << (ros->map.intersections[0].elements[g].name[0].value) << " exceeds max allowable (63); message dropped.";
                            return -1;
                        }
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006908\033[0m| map.intersections[0].elements[g].name[0].value.size(): " << 
                                        static_cast<int>(ros->map.intersections[0].elements[g].name[0].value.size());
                        
                        if(__aux64__ > 63) __aux64__ = 63;
                        *_tmp_7684 = __aux64__ - 1;
                        buffer += 1;
                        
                        int __ifh = __aux64__;
                        for(int h = 0; h < __ifh; h++) {  // 63
                            char* __tmp__ = (char*)buffer++;
                            *__tmp__ = ros->map.intersections[0].elements[g].name[0].value.c_str()[h];
                        }
                    }
                    
                    // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                        // IntersectionReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         IntersectionID      
                        // Optional fields bytemap
                        char* _tmp_7685 = (char*) buffer++;
                        *_tmp_7685 = (ros->map.intersections[0].elements[g].id.region.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006909\033[0m| Optional field region = " << *_tmp_7685;
                        
                        if(ros->map.intersections[0].elements[g].id.region.size() != 0) {
                            // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006910\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].id.region[0].value) << 
                                             " map.intersections[0].elements[g].id.region[0].value: " << ros->map.intersections[0].elements[g].id.region[0].value;
                            }
                            
                            uint16_t* _tmp_7686 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7686 = ros->map.intersections[0].elements[g].id.region[0].value; 
                            __aux64__ = ros->map.intersections[0].elements[g].id.region[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(IntersectionID) name(id) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006911\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].id.id.value) << 
                                         " map.intersections[0].elements[g].id.id.value: " << ros->map.intersections[0].elements[g].id.id.value;
                        }
                        
                        uint16_t* _tmp_7687 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7687 = ros->map.intersections[0].elements[g].id.id.value; 
                        __aux64__ = ros->map.intersections[0].elements[g].id.id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(MsgCount) name(revision) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(127) span(128) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006912\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].revision.value) << 
                                     " map.intersections[0].elements[g].revision.value: " << static_cast<int>(ros->map.intersections[0].elements[g].revision.value);
                    }
                    
                    uint8_t* _tmp_7688 = (uint8_t*) buffer++;
                    *_tmp_7688 = ros->map.intersections[0].elements[g].revision.value; 
                    __aux64__ = ros->map.intersections[0].elements[g].revision.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].revision.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].revision.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(Position3D) name(ref_point) extGroup(0)
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3461 = (uint8_t*) buffer++;  // Write extension flag for Position3D
                        *_ext_flag_3461 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_7689 = (char*) buffer++;
                        *_tmp_7689 = (ros->map.intersections[0].elements[g].ref_point.elevation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006913\033[0m| Optional field elevation = " << *_tmp_7689;
                        char* _tmp_7690 = (char*) buffer++;
                        *_tmp_7690 = (ros->map.intersections[0].elements[g].ref_point.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006914\033[0m| Optional field regional = " << *_tmp_7690;
                        
                        // Field:  type(Latitude) name(lat) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006915\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].ref_point.lat.value) << 
                                         " map.intersections[0].elements[g].ref_point.lat.value: " << ros->map.intersections[0].elements[g].ref_point.lat.value;
                        }
                        
                        double _tmp_7692 = ros->map.intersections[0].elements[g].ref_point.lat.value;
                        _tmp_7692 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_7692);
                        _tmp_7692 -= -900000000;
                        uint32_t* _tmp_7691 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_7691 = static_cast<uint32_t>(_tmp_7692);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].ref_point.lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].ref_point.lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Longitude) name(longint) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006916\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].ref_point.longint.value) << 
                                         " map.intersections[0].elements[g].ref_point.longint.value: " << ros->map.intersections[0].elements[g].ref_point.longint.value;
                        }
                        
                        double _tmp_7694 = ros->map.intersections[0].elements[g].ref_point.longint.value;
                        _tmp_7694 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_7694);
                        _tmp_7694 -= -1800000000;
                        uint32_t* _tmp_7693 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_7693 = static_cast<uint32_t>(_tmp_7694);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].ref_point.longint.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].ref_point.longint.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                            return -1;
                        }
                        
                        if(ros->map.intersections[0].elements[g].ref_point.elevation.size() != 0) {
                            // Field:  type(Elevation) name(elevation) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006917\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].ref_point.elevation[0].value) << 
                                             " map.intersections[0].elements[g].ref_point.elevation[0].value: " << ros->map.intersections[0].elements[g].ref_point.elevation[0].value;
                            }
                            
                            float _tmp_7696 = ros->map.intersections[0].elements[g].ref_point.elevation[0].value;
                            _tmp_7696 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_7696);
                            _tmp_7696 -= -4096;
                            uint16_t* _tmp_7695 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7695 = static_cast<uint16_t>(_tmp_7696);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].ref_point.elevation[0].value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].ref_point.elevation[0].value' (" << __aux64__ << ") exceeds max allowable (61439); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3461) {
                        }
                    
                    if(ros->map.intersections[0].elements[g].lane_width.size() != 0) {
                        // Field:  type(LaneWidth) name(lane_width) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(32767) span(32768) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006918\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_width[0].value) << 
                                         " map.intersections[0].elements[g].lane_width[0].value: " << ros->map.intersections[0].elements[g].lane_width[0].value;
                        }
                        
                        uint16_t* _tmp_7698 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7698 = ros->map.intersections[0].elements[g].lane_width[0].value; 
                        __aux64__ = ros->map.intersections[0].elements[g].lane_width[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_width[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_width[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->map.intersections[0].elements[g].speed_limits.size() != 0) {
                        // Field:  type(SpeedLimitList) name(speed_limits) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                        __aux64__ = ros->map.intersections[0].elements[g].speed_limits[0].elements.size();
                        if(__aux64__ > 9) __aux64__ = 9;
                        uint16_t* _tmp_7699 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_7699 = __aux64__ - 1;
                        
                        int __ifi = __aux64__;
                        for(int i = 0; i < __ifi; i++) { 
                            
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                // Optional fields bytemap
                                
                                // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(12) span(13) dataType(Int32)
                                uint8_t* _ext_flag_3466 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[g].speed_limits[0].elements[i].type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006920\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].speed_limits[0].elements[i].type.value) << 
                                                 " map.intersections[0].elements[g].speed_limits[0].elements[i].type.value: " << static_cast<int>(ros->map.intersections[0].elements[g].speed_limits[0].elements[i].type.value);
                                }
                                
                                uint8_t* _tmp_7700 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_7700 = ros->map.intersections[0].elements[g].speed_limits[0].elements[i].type.value; 
                                __aux64__ = ros->map.intersections[0].elements[g].speed_limits[0].elements[i].type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].speed_limits[0].elements[i].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].speed_limits[0].elements[i].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Velocity) name(speed) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006921\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].speed_limits[0].elements[i].speed.value) << 
                                                 " map.intersections[0].elements[g].speed_limits[0].elements[i].speed.value: " << ros->map.intersections[0].elements[g].speed_limits[0].elements[i].speed.value;
                                }
                                
                                uint16_t* _tmp_7701 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_7701 = ros->map.intersections[0].elements[g].speed_limits[0].elements[i].speed.value; 
                                __aux64__ = ros->map.intersections[0].elements[g].speed_limits[0].elements[i].speed.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].speed_limits[0].elements[i].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].speed_limits[0].elements[i].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                    return -1;
                                }
                                
                        }
                    }
                    
                    // Field:  type(LaneList) name(lane_set) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255) ext(false)
                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_7702 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_7702 = __aux64__ - 1;
                    
                    int __ifj = __aux64__;
                    for(int j = 0; j < __ifj; j++) { 
                        
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
                            uint8_t* _ext_flag_3468 = (uint8_t*) buffer++;  // Write extension flag for GenericLane
                            *_ext_flag_3468 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_7703 = (char*) buffer++;
                            *_tmp_7703 = (ros->map.intersections[0].elements[g].lane_set.elements[j].name.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006923\033[0m| Optional field name = " << *_tmp_7703;
                            char* _tmp_7704 = (char*) buffer++;
                            *_tmp_7704 = (ros->map.intersections[0].elements[g].lane_set.elements[j].ingress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006924\033[0m| Optional field ingress_approach = " << *_tmp_7704;
                            char* _tmp_7705 = (char*) buffer++;
                            *_tmp_7705 = (ros->map.intersections[0].elements[g].lane_set.elements[j].egress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006925\033[0m| Optional field egress_approach = " << *_tmp_7705;
                            char* _tmp_7706 = (char*) buffer++;
                            *_tmp_7706 = (ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006926\033[0m| Optional field maneuvers = " << *_tmp_7706;
                            char* _tmp_7707 = (char*) buffer++;
                            *_tmp_7707 = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006927\033[0m| Optional field connects_to = " << *_tmp_7707;
                            char* _tmp_7708 = (char*) buffer++;
                            *_tmp_7708 = (ros->map.intersections[0].elements[g].lane_set.elements[j].overlays.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006928\033[0m| Optional field overlays = " << *_tmp_7708;
                            char* _tmp_7709 = (char*) buffer++;
                            *_tmp_7709 = (ros->map.intersections[0].elements[g].lane_set.elements[j].regional.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006929\033[0m| Optional field regional = " << *_tmp_7709;
                            
                            // Field:  type(LaneID) name(lane_id) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006930\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_id.value) << 
                                             " map.intersections[0].elements[g].lane_set.elements[j].lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_id.value);
                            }
                            
                            uint8_t* _tmp_7710 = (uint8_t*) buffer++;
                            *_tmp_7710 = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_id.value; 
                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].name.size() != 0) {
                                // Field:  type(DescriptiveName) name(name) extGroup(0)
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_7711 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].name[0].value.size();
                                
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].name[0].value.size() < 1) {
                                    logger->warning() << "Error: Length of 'map.intersections[0].elements[g].lane_set.elements[j].name[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].name[0].value) << " is less than allowable (1); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].name[0].value.size() > 63) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].name[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].name[0].value) << " exceeds max allowable (63); message dropped.";
                                    return -1;
                                }
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006931\033[0m| map.intersections[0].elements[g].lane_set.elements[j].name[0].value.size(): " << 
                                                static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].name[0].value.size());
                                
                                if(__aux64__ > 63) __aux64__ = 63;
                                *_tmp_7711 = __aux64__ - 1;
                                buffer += 1;
                                
                                int __ifk = __aux64__;
                                for(int k = 0; k < __ifk; k++) {  // 63
                                    char* __tmp__ = (char*)buffer++;
                                    *__tmp__ = ros->map.intersections[0].elements[g].lane_set.elements[j].name[0].value.c_str()[k];
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].ingress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(ingress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006932\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].ingress_approach[0].value) << 
                                                 " map.intersections[0].elements[g].lane_set.elements[j].ingress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].ingress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_7712 = (uint8_t*) buffer++;
                                *_tmp_7712 = ros->map.intersections[0].elements[g].lane_set.elements[j].ingress_approach[0].value; 
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].ingress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].ingress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].ingress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].egress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(egress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006933\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].egress_approach[0].value) << 
                                                 " map.intersections[0].elements[g].lane_set.elements[j].egress_approach[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].egress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_7713 = (uint8_t*) buffer++;
                                *_tmp_7713 = ros->map.intersections[0].elements[g].lane_set.elements[j].egress_approach[0].value; 
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].egress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].egress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].egress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
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
                                char* _tmp_7714 = (char*) buffer++;
                                *_tmp_7714 = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.regional.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006934\033[0m| Optional field regional = " << *_tmp_7714;
                                
                                // Field:  type(LaneDirection) name(directional_use) extGroup(0)
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006935\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.values.size());
                                
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.values.size() < 2) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.values.size()) << " is less than allowable (2); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.values.size() > 2) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.values.size()) << " exceeds max allowable (2); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_7715 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.values.size();
                                if(__aux64__ > 2) __aux64__ = 2;
                                *_tmp_7715 = __aux64__ - 2;
                                buffer += 1;
                                
                                int __ifl = __aux64__;
                                for(int l = 0; l < __ifl; l++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.directional_use.values[l]? 1: 0);
                                }
                                
                                // Field:  type(LaneSharing) name(shared_with) extGroup(0)
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006936\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.values.size());
                                
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.values.size() < 10) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.values.size()) << " is less than allowable (10); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.values.size() > 10) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.values.size()) << " exceeds max allowable (10); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_7716 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.values.size();
                                if(__aux64__ > 10) __aux64__ = 10;
                                *_tmp_7716 = __aux64__ - 10;
                                buffer += 1;
                                
                                int __ifm = __aux64__;
                                for(int m = 0; m < __ifm; m++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.shared_with.values[m]? 1: 0);
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
                                uint8_t* _ext_flag_3472 = (uint8_t*) buffer; 
                                buffer++;
                                *_ext_flag_3472 = 0; 
                                
                                uint8_t* _choice_253 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle.size() != 0) {  // CHOICE 0  fieldType(LaneTypeAttributes) 
                                    *_choice_253 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006937\033[0m| Choice selection: 0";
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006938\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].values.size() < 8) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].values.size()) << " is less than allowable (8); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].values.size() > 8) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].values.size()) << " exceeds max allowable (8); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _ext_flag_3473 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].
                                    *_ext_flag_3473 = 0; 
                                    
                                    uint8_t* _tmp_7717 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].values.size();
                                    if(__aux64__ > 8) __aux64__ = 8;
                                    *_tmp_7717 = __aux64__ - 8;
                                    buffer += 1;
                                    
                                    int __ifn = __aux64__;
                                    for(int n = 0; n < __ifn; n++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.vehicle[0].values[n]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk.size() != 0)  // CHOICE 1  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_253 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006939\033[0m| Choice selection: 1";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006940\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7718 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7718 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifo = __aux64__;
                                    for(int o = 0; o < __ifo; o++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.crosswalk[0].values[o]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane.size() != 0)  // CHOICE 2  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_253 = 2;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006941\033[0m| Choice selection: 2";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006942\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7719 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7719 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifp = __aux64__;
                                    for(int p = 0; p < __ifp; p++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.bike_lane[0].values[p]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk.size() != 0)  // CHOICE 3  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_253 = 3;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006943\033[0m| Choice selection: 3";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006944\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7720 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7720 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifq = __aux64__;
                                    for(int q = 0; q < __ifq; q++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.sidewalk[0].values[q]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median.size() != 0)  // CHOICE 4  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_253 = 4;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006945\033[0m| Choice selection: 4";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006946\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7721 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7721 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifr = __aux64__;
                                    for(int r = 0; r < __ifr; r++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.median[0].values[r]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping.size() != 0)  // CHOICE 5  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_253 = 5;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006947\033[0m| Choice selection: 5";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006948\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7722 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7722 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifs = __aux64__;
                                    for(int s = 0; s < __ifs; s++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.striping[0].values[s]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle.size() != 0)  // CHOICE 6  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_253 = 6;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006949\033[0m| Choice selection: 6";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006950\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7723 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7723 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ift = __aux64__;
                                    for(int t = 0; t < __ift; t++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.tracked_vehicle[0].values[t]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking.size() != 0)  // CHOICE 7  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_253 = 7;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006951\033[0m| Choice selection: 7";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006952\033[0m| map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].values.size());
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7724 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7724 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifu = __aux64__;
                                    for(int u = 0; u < __ifu; u++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type.parking[0].values[u]? 1: 0);
                                    }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_253) << ") selected in CHOICE LaneTypeAttributes in 'map.intersections[0].elements[g].lane_set.elements[j].lane_attributes.lane_type'; message dropped.";
                                    return -1;
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers.size() != 0) {
                                // Field:  type(AllowedManeuvers) name(maneuvers) extGroup(0)
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006953\033[0m| map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].values.size());
                                
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].values.size() < 12) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].values.size()) << " is less than allowable (12); message dropped.";
                                    return -1;
                                }
                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].values.size() > 12) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_7725 = (uint8_t*)buffer;
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].values.size();
                                if(__aux64__ > 12) __aux64__ = 12;
                                *_tmp_7725 = __aux64__ - 12;
                                buffer += 1;
                                
                                int __ifv = __aux64__;
                                for(int v = 0; v < __ifv; v++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].maneuvers[0].values[v]? 1: 0);
                                }
                            }
                            
                            // Field:  type(NodeListXY) name(node_list) extGroup(0)
                            // Choice
                               // #0  nodes   NodeSetXY
                               // #1  computed   ComputedLane
                            uint8_t* _ext_flag_3474 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_3474 = 0; 
                            
                            uint8_t* _choice_254 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes.size() != 0) {  // CHOICE 0  fieldType(NodeListXY) 
                                *_choice_254 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006954\033[0m| Choice selection: 0";
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62) ext(false)
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements.size();
                                if(__aux64__ > 63) __aux64__ = 63;
                                uint16_t* _tmp_7726 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_7726 = __aux64__ - 2;
                                
                                int __ifw = __aux64__;
                                for(int w = 0; w < __ifw; w++) { 
                                    
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_3475 = (uint8_t*) buffer++;  // Write extension flag for NodeXY
                                        *_ext_flag_3475 = 0;  
                                        
                                        // Optional fields bytemap
                                        char* _tmp_7727 = (char*) buffer++;
                                        *_tmp_7727 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m006956\033[0m| Optional field attributes = " << *_tmp_7727;
                                        
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
                                        uint8_t* _choice_255 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1.size() != 0) {  // CHOICE 0  fieldType(NodeOffsetPointXY) 
                                            *_choice_255 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006957\033[0m| Choice selection: 0";
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B10) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006958\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].x.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].x.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].x.value;
                                                }
                                                
                                                float _tmp_7729 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].x.value;
                                                _tmp_7729 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7729);
                                                _tmp_7729 -= -512;
                                                uint16_t* _tmp_7728 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7728 = static_cast<uint16_t>(_tmp_7729);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].x.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].x.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B10) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006959\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].y.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].y.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].y.value;
                                                }
                                                
                                                float _tmp_7731 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].y.value;
                                                _tmp_7731 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7731);
                                                _tmp_7731 -= -512;
                                                uint16_t* _tmp_7730 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7730 = static_cast<uint16_t>(_tmp_7731);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].y.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy1[0].y.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2.size() != 0)  // CHOICE 1  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_255 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006960\033[0m| Choice selection: 1";
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B11) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006961\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].x.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].x.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].x.value;
                                                }
                                                
                                                float _tmp_7733 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].x.value;
                                                _tmp_7733 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7733);
                                                _tmp_7733 -= -1024;
                                                uint16_t* _tmp_7732 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7732 = static_cast<uint16_t>(_tmp_7733);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].x.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].x.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B11) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006962\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].y.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].y.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].y.value;
                                                }
                                                
                                                float _tmp_7735 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].y.value;
                                                _tmp_7735 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7735);
                                                _tmp_7735 -= -1024;
                                                uint16_t* _tmp_7734 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7734 = static_cast<uint16_t>(_tmp_7735);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].y.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy2[0].y.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3.size() != 0)  // CHOICE 2  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_255 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006963\033[0m| Choice selection: 2";
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B12) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006964\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].x.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].x.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].x.value;
                                                }
                                                
                                                float _tmp_7737 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].x.value;
                                                _tmp_7737 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7737);
                                                _tmp_7737 -= -2048;
                                                uint16_t* _tmp_7736 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7736 = static_cast<uint16_t>(_tmp_7737);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].x.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].x.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B12) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006965\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].y.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].y.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].y.value;
                                                }
                                                
                                                float _tmp_7739 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].y.value;
                                                _tmp_7739 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7739);
                                                _tmp_7739 -= -2048;
                                                uint16_t* _tmp_7738 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7738 = static_cast<uint16_t>(_tmp_7739);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].y.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy3[0].y.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4.size() != 0)  // CHOICE 3  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_255 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006966\033[0m| Choice selection: 3";
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B13) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006967\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].x.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].x.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].x.value;
                                                }
                                                
                                                float _tmp_7741 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].x.value;
                                                _tmp_7741 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7741);
                                                _tmp_7741 -= -4096;
                                                uint16_t* _tmp_7740 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7740 = static_cast<uint16_t>(_tmp_7741);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].x.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].x.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B13) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006968\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].y.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].y.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].y.value;
                                                }
                                                
                                                float _tmp_7743 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].y.value;
                                                _tmp_7743 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7743);
                                                _tmp_7743 -= -4096;
                                                uint16_t* _tmp_7742 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7742 = static_cast<uint16_t>(_tmp_7743);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].y.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy4[0].y.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5.size() != 0)  // CHOICE 4  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_255 = 4;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006969\033[0m| Choice selection: 4";
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B14) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006970\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].x.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].x.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].x.value;
                                                }
                                                
                                                float _tmp_7745 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].x.value;
                                                _tmp_7745 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7745);
                                                _tmp_7745 -= -8192;
                                                uint16_t* _tmp_7744 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7744 = static_cast<uint16_t>(_tmp_7745);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].x.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].x.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B14) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006971\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].y.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].y.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].y.value;
                                                }
                                                
                                                float _tmp_7747 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].y.value;
                                                _tmp_7747 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7747);
                                                _tmp_7747 -= -8192;
                                                uint16_t* _tmp_7746 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7746 = static_cast<uint16_t>(_tmp_7747);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].y.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy5[0].y.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6.size() != 0)  // CHOICE 5  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_255 = 5;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006972\033[0m| Choice selection: 5";
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B16) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006973\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].x.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].x.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].x.value;
                                                }
                                                
                                                float _tmp_7749 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].x.value;
                                                _tmp_7749 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7749);
                                                _tmp_7749 -= -32768;
                                                uint16_t* _tmp_7748 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7748 = static_cast<uint16_t>(_tmp_7749);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].x.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].x.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B16) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006974\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].y.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].y.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].y.value;
                                                }
                                                
                                                float _tmp_7751 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].y.value;
                                                _tmp_7751 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7751);
                                                _tmp_7751 -= -32768;
                                                uint16_t* _tmp_7750 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7750 = static_cast<uint16_t>(_tmp_7751);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].y.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_xy6[0].y.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon.size() != 0)  // CHOICE 6  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_255 = 6;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006975\033[0m| Choice selection: 6";
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Longitude) name(lon) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006976\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lon.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lon.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lon.value;
                                                }
                                                
                                                double _tmp_7753 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lon.value;
                                                _tmp_7753 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7753);
                                                _tmp_7753 -= -1800000000;
                                                uint32_t* _tmp_7752 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_7752 = static_cast<uint32_t>(_tmp_7753);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Latitude) name(lat) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m006977\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lat.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lat.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lat.value;
                                                }
                                                
                                                double _tmp_7755 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lat.value;
                                                _tmp_7755 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7755);
                                                _tmp_7755 -= -900000000;
                                                uint32_t* _tmp_7754 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_7754 = static_cast<uint32_t>(_tmp_7755);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_255) << ") selected in CHOICE NodeOffsetPointXY in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].delta'; message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes.size() != 0) {
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
                                                uint8_t* _ext_flag_3491 = (uint8_t*) buffer++;  // Write extension flag for NodeAttributeSetXY
                                                *_ext_flag_3491 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_7756 = (char*) buffer++;
                                                *_tmp_7756 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m006978\033[0m| Optional field local_node = " << *_tmp_7756;
                                                char* _tmp_7757 = (char*) buffer++;
                                                *_tmp_7757 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m006979\033[0m| Optional field disabled = " << *_tmp_7757;
                                                char* _tmp_7758 = (char*) buffer++;
                                                *_tmp_7758 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m006980\033[0m| Optional field enabled = " << *_tmp_7758;
                                                char* _tmp_7759 = (char*) buffer++;
                                                *_tmp_7759 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m006981\033[0m| Optional field data = " << *_tmp_7759;
                                                char* _tmp_7760 = (char*) buffer++;
                                                *_tmp_7760 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m006982\033[0m| Optional field d_width = " << *_tmp_7760;
                                                char* _tmp_7761 = (char*) buffer++;
                                                *_tmp_7761 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m006983\033[0m| Optional field d_elevation = " << *_tmp_7761;
                                                char* _tmp_7762 = (char*) buffer++;
                                                *_tmp_7762 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].regional.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m006984\033[0m| Optional field regional = " << *_tmp_7762;
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node.size() != 0) {
                                                    // Field:  type(NodeAttributeXYList) name(local_node) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7763 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7763 = __aux64__ - 1;
                                                    
                                                    int __ifx = __aux64__;
                                                    for(int x = 0; x < __ifx; x++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) dataType(Int32)
                                                        uint8_t* _ext_flag_3492 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m006986\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].value) << 
                                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_7764 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_7764 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].value; 
                                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].local_node[0].elements[x].value' (" << __aux64__ << ") exceeds max allowable (11); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(disabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7765 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7765 = __aux64__ - 1;
                                                    
                                                    int __ify = __aux64__;
                                                    for(int y = 0; y < __ify; y++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_3493 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m006988\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].value) << 
                                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_7766 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_7766 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].value; 
                                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].disabled[0].elements[y].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(enabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7767 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7767 = __aux64__ - 1;
                                                    
                                                    int __ifz = __aux64__;
                                                    for(int z = 0; z < __ifz; z++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_3494 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m006990\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].value) << 
                                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_7768 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_7768 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].value; 
                                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].enabled[0].elements[z].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data.size() != 0) {
                                                    // Field:  type(LaneDataAttributeList) name(data) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7769 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7769 = __aux64__ - 1;
                                                    
                                                    int __ifa = __aux64__;
                                                    for(int a = 0; a < __ifa; a++) { 
                                                        
                                                        // Choice
                                                           // #0  pathEndPointAngle   DeltaAngle
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle
                                                           // #4  laneAngle   MergeDivergeNodeAngle
                                                           // #5  speedLimits   SpeedLimitList
                                                           // #6  regional   LaneDataAttribute_regional
                                                        uint8_t* _ext_flag_3495 = (uint8_t*) buffer; 
                                                        buffer++;
                                                        *_ext_flag_3495 = 0; 
                                                        
                                                        uint8_t* _choice_256 = (uint8_t*) buffer;
                                                        buffer++;
                                                        
                                                        if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle.size() != 0) {  // CHOICE 0  fieldType(LaneDataAttribute) 
                                                            *_choice_256 = 0;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m006992\033[0m| Choice selection: 0";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-150) max(150) span(301) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m006993\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle[0].value) << 
                                                                             " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_7770 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle[0].value - -150;
                                                            *_tmp_7770 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle[0].value' (" << __aux64__ << ") less than (-150); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].path_end_point_angle[0].value' (" << __aux64__ << ") exceeds max allowable (150); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center.size() != 0)  // CHOICE 1  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_256 = 1;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m006994\033[0m| Choice selection: 1";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m006995\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center[0].value) << 
                                                                             " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_7771 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center[0].value - -128;
                                                            *_tmp_7771 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_center[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left.size() != 0)  // CHOICE 2  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_256 = 2;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m006996\033[0m| Choice selection: 2";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m006997\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left[0].value) << 
                                                                             " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_7772 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left[0].value - -128;
                                                            *_tmp_7772 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_left[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right.size() != 0)  // CHOICE 3  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_256 = 3;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m006998\033[0m| Choice selection: 3";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m006999\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right[0].value) << 
                                                                             " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_7773 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right[0].value - -128;
                                                            *_tmp_7773 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_crown_point_right[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle.size() != 0)  // CHOICE 4  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_256 = 4;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007000\033[0m| Choice selection: 4";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-180) max(180) span(361) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007001\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle[0].value) << 
                                                                             " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_7774 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle[0].value - -180;
                                                            *_tmp_7774 = __aux64__;
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle[0].value' (" << __aux64__ << ") less than (-180); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].lane_angle[0].value' (" << __aux64__ << ") exceeds max allowable (180); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits.size() != 0)  // CHOICE 5  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_256 = 5;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007002\033[0m| Choice selection: 5";
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements.size();
                                                            if(__aux64__ > 9) __aux64__ = 9;
                                                            uint16_t* _tmp_7775 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_7775 = __aux64__ - 1;
                                                            
                                                            int __ifb = __aux64__;
                                                            for(int b = 0; b < __ifb; b++) { 
                                                                
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    // Optional fields bytemap
                                                                    
                                                                    // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) dataType(Int32)
                                                                    uint8_t* _ext_flag_3501 = (uint8_t*) buffer++; // Write extension flag for ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007004\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.value) << 
                                                                                     " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.value);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_7776 = (uint8_t*)buffer;
                                                                    buffer += 1;
                                                                    *_tmp_7776 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.value; 
                                                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.value; 
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(Velocity) name(speed) extGroup(0)
                                                                    // Integer
                                                                    
                                                                    // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007005\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].speed.value) << 
                                                                                     " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].speed.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].speed.value;
                                                                    }
                                                                    
                                                                    uint16_t* _tmp_7777 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_7777 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].speed.value; 
                                                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].speed.value;
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a].speed_limits[0].elements[b].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                            }
                                                        
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_256) << ") selected in CHOICE LaneDataAttribute in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].data[0].elements[a]'; message dropped.";
                                                            return -1;
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_width) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007006\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width[0].value) << 
                                                                     " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width[0].value;
                                                    }
                                                    
                                                    float _tmp_7779 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width[0].value;
                                                    _tmp_7779 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_7779);
                                                    _tmp_7779 -= -512;
                                                    uint16_t* _tmp_7778 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_7778 = static_cast<uint16_t>(_tmp_7779);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_width[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_elevation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007007\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation[0].value) << 
                                                                     " map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation[0].value;
                                                    }
                                                    
                                                    float _tmp_7781 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation[0].value;
                                                    _tmp_7781 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_7781);
                                                    _tmp_7781 -= -512;
                                                    uint16_t* _tmp_7780 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_7780 = static_cast<uint16_t>(_tmp_7781);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.nodes[0].elements[w].attributes[0].d_elevation[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_3491) {
                                                }
                                        }
                                        
                                        if(*_ext_flag_3475) {
                                        }
                                }
                            
                            }
                            else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed.size() != 0)  // CHOICE 1  fieldType(NodeListXY) 
                            {
                                *_choice_254 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007008\033[0m| Choice selection: 1";
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_3505 = (uint8_t*) buffer++;  // Write extension flag for ComputedLane
                                    *_ext_flag_3505 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_7784 = (char*) buffer++;
                                    *_tmp_7784 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007009\033[0m| Optional field rotate_xy = " << *_tmp_7784;
                                    char* _tmp_7785 = (char*) buffer++;
                                    *_tmp_7785 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007010\033[0m| Optional field scale_xaxis = " << *_tmp_7785;
                                    char* _tmp_7786 = (char*) buffer++;
                                    *_tmp_7786 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007011\033[0m| Optional field scale_yaxis = " << *_tmp_7786;
                                    char* _tmp_7787 = (char*) buffer++;
                                    *_tmp_7787 = (ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].regional.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007012\033[0m| Optional field regional = " << *_tmp_7787;
                                    
                                    // Field:  type(LaneID) name(reference_lane_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007013\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    uint8_t* _tmp_7788 = (uint8_t*) buffer++;
                                    *_tmp_7788 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].reference_lane_id.value; 
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].reference_lane_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetXaxis) name(offset_xaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_257 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetXaxis) 
                                        *_choice_257 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007014\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007015\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7789 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small[0].value - -2047;
                                        *_tmp_7789 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetXaxis) 
                                    {
                                        *_choice_257 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007016\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007017\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7790 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large[0].value - -32767;
                                        *_tmp_7790 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_257) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetYaxis) name(offset_yaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_258 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetYaxis) 
                                        *_choice_258 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007018\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007019\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7791 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small[0].value - -2047;
                                        *_tmp_7791 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetYaxis) 
                                    {
                                        *_choice_258 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007020\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007021\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7792 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large[0].value - -32767;
                                        *_tmp_7792 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_258) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field:  type(Angle) name(rotate_xy) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(28800) span(28801) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007022\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7793 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_7793 = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy[0].value; 
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") exceeds max allowable (28800); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_xaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007023\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7794 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis[0].value - -2048;
                                        *_tmp_7794 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_yaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007024\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7795 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis[0].value - -2048;
                                        *_tmp_7795 = __aux64__;
                                        __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_3505) {
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_254) << ") selected in CHOICE NodeListXY in 'map.intersections[0].elements[g].lane_set.elements[j].node_list'; message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to.size() != 0) {
                                // Field:  type(ConnectsToList) name(connects_to) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_7797 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_7797 = __aux64__ - 1;
                                
                                int __ifc = __aux64__;
                                for(int c = 0; c < __ifc; c++) { 
                                    
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_7798 = (char*) buffer++;
                                        *_tmp_7798 = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007026\033[0m| Optional field remote_intersection = " << *_tmp_7798;
                                        char* _tmp_7799 = (char*) buffer++;
                                        *_tmp_7799 = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007027\033[0m| Optional field signal_group = " << *_tmp_7799;
                                        char* _tmp_7800 = (char*) buffer++;
                                        *_tmp_7800 = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007028\033[0m| Optional field user_class = " << *_tmp_7800;
                                        char* _tmp_7801 = (char*) buffer++;
                                        *_tmp_7801 = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007029\033[0m| Optional field connection_id = " << *_tmp_7801;
                                        
                                        // Field:  type(ConnectingLane) name(connecting_lane) extGroup(0)
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_7802 = (char*) buffer++;
                                            *_tmp_7802 = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007030\033[0m| Optional field maneuver = " << *_tmp_7802;
                                            
                                            // Field:  type(LaneID) name(lane) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007031\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.lane.value) << 
                                                             " map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.lane.value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.lane.value);
                                            }
                                            
                                            uint8_t* _tmp_7803 = (uint8_t*) buffer++;
                                            *_tmp_7803 = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.lane.value; 
                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.lane.value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.lane.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.lane.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver.size() != 0) {
                                                // Field:  type(AllowedManeuvers) name(maneuver) extGroup(0)
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007032\033[0m| map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].values.size());
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].values.size() < 12) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].values.size()) << " is less than allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].values.size() > 12) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].value' " << (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                
                                                uint8_t* _tmp_7804 = (uint8_t*)buffer;
                                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].values.size();
                                                if(__aux64__ > 12) __aux64__ = 12;
                                                *_tmp_7804 = __aux64__ - 12;
                                                buffer += 1;
                                                
                                                int __ifd = __aux64__;
                                                for(int d = 0; d < __ifd; d++) {
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    *__b__ = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connecting_lane.maneuver[0].values[d]? 1: 0);
                                                }
                                            }
                                        
                                        if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection.size() != 0) {
                                            // Field:  type(IntersectionReferenceID) name(remote_intersection) extGroup(0)
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                // Optional fields bytemap
                                                char* _tmp_7805 = (char*) buffer++;
                                                *_tmp_7805 = (ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007033\033[0m| Optional field region = " << *_tmp_7805;
                                                
                                                if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region.size() != 0) {
                                                    // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007034\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region[0].value) << 
                                                                     " map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region[0].value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_7806 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_7806 = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region[0].value; 
                                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(IntersectionID) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007035\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].id.value) << 
                                                                 " map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].id.value: " << ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_7807 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7807 = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].id.value; 
                                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].remote_intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group.size() != 0) {
                                            // Field:  type(SignalGroupID) name(signal_group) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007036\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group[0].value) << 
                                                             " map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7808 = (uint8_t*) buffer++;
                                            *_tmp_7808 = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group[0].value; 
                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].signal_group[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class.size() != 0) {
                                            // Field:  type(RestrictionClassID) name(user_class) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007037\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class[0].value) << 
                                                             " map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7809 = (uint8_t*) buffer++;
                                            *_tmp_7809 = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class[0].value; 
                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].user_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id.size() != 0) {
                                            // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007038\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id[0].value) << 
                                                             " map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id[0].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7810 = (uint8_t*) buffer++;
                                            *_tmp_7810 = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id[0].value; 
                                            __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].connects_to[0].elements[c].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                            }
                            
                            if(ros->map.intersections[0].elements[g].lane_set.elements[j].overlays.size() != 0) {
                                // Field:  type(OverlayLaneList) name(overlays) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5) ext(false)
                                __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements.size();
                                if(__aux64__ > 5) __aux64__ = 5;
                                uint16_t* _tmp_7811 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_7811 = __aux64__ - 1;
                                
                                int __ife = __aux64__;
                                for(int e = 0; e < __ife; e++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007040\033[0m| " << tools::getTypeName(ros->map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements[e].value) << 
                                                     " map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements[e].value: " << static_cast<int>(ros->map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements[e].value);
                                    }
                                    
                                    uint8_t* _tmp_7812 = (uint8_t*) buffer++;
                                    *_tmp_7812 = ros->map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements[e].value; 
                                    __aux64__ = ros->map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements[e].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements[e].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.intersections[0].elements[g].lane_set.elements[j].overlays[0].elements[e].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_3468) {
                            }
                    }
                    
                    // Field name: preempt_priority_data  // avoided
                    // Field name: regional  // avoided
                    if(*_ext_flag_3457) {
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
            uint16_t* _tmp_7815 = (uint16_t*)buffer;
            buffer += 2;
            *_tmp_7815 = __aux64__ - 1;
            
            int __iff = __aux64__;
            for(int f = 0; f < __iff; f++) { 
                
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
                    uint8_t* _ext_flag_3523 = (uint8_t*) buffer++;  // Write extension flag for RoadSegment
                    *_ext_flag_3523 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_7816 = (char*) buffer++;
                    *_tmp_7816 = (ros->map.road_segments[0].elements[f].name.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007042\033[0m| Optional field name = " << *_tmp_7816;
                    char* _tmp_7817 = (char*) buffer++;
                    *_tmp_7817 = (ros->map.road_segments[0].elements[f].lane_width.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007043\033[0m| Optional field lane_width = " << *_tmp_7817;
                    char* _tmp_7818 = (char*) buffer++;
                    *_tmp_7818 = (ros->map.road_segments[0].elements[f].speed_limits.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007044\033[0m| Optional field speed_limits = " << *_tmp_7818;
                    char* _tmp_7819 = (char*) buffer++;
                    *_tmp_7819 = (ros->map.road_segments[0].elements[f].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007045\033[0m| Optional field regional = " << *_tmp_7819;
                    
                    if(ros->map.road_segments[0].elements[f].name.size() != 0) {
                        // Field:  type(DescriptiveName) name(name) extGroup(0)
                        // Text
                        
                        // TEXT  min(1) max(63) span(63)
                        uint8_t* _tmp_7820 = (uint8_t*)buffer;
                        __aux64__ = ros->map.road_segments[0].elements[f].name[0].value.size();
                        
                        if(ros->map.road_segments[0].elements[f].name[0].value.size() < 1) {
                            logger->warning() << "Error: Length of 'map.road_segments[0].elements[f].name[0].value' " << (ros->map.road_segments[0].elements[f].name[0].value) << " is less than allowable (1); message dropped.";
                            return -1;
                        }
                        if(ros->map.road_segments[0].elements[f].name[0].value.size() > 63) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].name[0].value' " << (ros->map.road_segments[0].elements[f].name[0].value) << " exceeds max allowable (63); message dropped.";
                            return -1;
                        }
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007046\033[0m| map.road_segments[0].elements[f].name[0].value.size(): " << 
                                        static_cast<int>(ros->map.road_segments[0].elements[f].name[0].value.size());
                        
                        if(__aux64__ > 63) __aux64__ = 63;
                        *_tmp_7820 = __aux64__ - 1;
                        buffer += 1;
                        
                        int __ifg = __aux64__;
                        for(int g = 0; g < __ifg; g++) {  // 63
                            char* __tmp__ = (char*)buffer++;
                            *__tmp__ = ros->map.road_segments[0].elements[f].name[0].value.c_str()[g];
                        }
                    }
                    
                    // Field:  type(RoadSegmentReferenceID) name(id) extGroup(0)
                        // RoadSegmentReferenceID  SEQUENCE
                            //  region     RoadRegulatorID   OPTIONAL  
                            //  id         RoadSegmentID       
                        // Optional fields bytemap
                        char* _tmp_7821 = (char*) buffer++;
                        *_tmp_7821 = (ros->map.road_segments[0].elements[f].id.region.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007047\033[0m| Optional field region = " << *_tmp_7821;
                        
                        if(ros->map.road_segments[0].elements[f].id.region.size() != 0) {
                            // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007048\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].id.region[0].value) << 
                                             " map.road_segments[0].elements[f].id.region[0].value: " << ros->map.road_segments[0].elements[f].id.region[0].value;
                            }
                            
                            uint16_t* _tmp_7822 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7822 = ros->map.road_segments[0].elements[f].id.region[0].value; 
                            __aux64__ = ros->map.road_segments[0].elements[f].id.region[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(RoadSegmentID) name(id) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007049\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].id.id.value) << 
                                         " map.road_segments[0].elements[f].id.id.value: " << ros->map.road_segments[0].elements[f].id.id.value;
                        }
                        
                        uint16_t* _tmp_7823 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7823 = ros->map.road_segments[0].elements[f].id.id.value; 
                        __aux64__ = ros->map.road_segments[0].elements[f].id.id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(MsgCount) name(revision) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(127) span(128) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007050\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].revision.value) << 
                                     " map.road_segments[0].elements[f].revision.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].revision.value);
                    }
                    
                    uint8_t* _tmp_7824 = (uint8_t*) buffer++;
                    *_tmp_7824 = ros->map.road_segments[0].elements[f].revision.value; 
                    __aux64__ = ros->map.road_segments[0].elements[f].revision.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].revision.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].revision.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(Position3D) name(ref_point) extGroup(0)
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3527 = (uint8_t*) buffer++;  // Write extension flag for Position3D
                        *_ext_flag_3527 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_7825 = (char*) buffer++;
                        *_tmp_7825 = (ros->map.road_segments[0].elements[f].ref_point.elevation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007051\033[0m| Optional field elevation = " << *_tmp_7825;
                        char* _tmp_7826 = (char*) buffer++;
                        *_tmp_7826 = (ros->map.road_segments[0].elements[f].ref_point.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007052\033[0m| Optional field regional = " << *_tmp_7826;
                        
                        // Field:  type(Latitude) name(lat) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007053\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].ref_point.lat.value) << 
                                         " map.road_segments[0].elements[f].ref_point.lat.value: " << ros->map.road_segments[0].elements[f].ref_point.lat.value;
                        }
                        
                        double _tmp_7828 = ros->map.road_segments[0].elements[f].ref_point.lat.value;
                        _tmp_7828 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_7828);
                        _tmp_7828 -= -900000000;
                        uint32_t* _tmp_7827 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_7827 = static_cast<uint32_t>(_tmp_7828);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].ref_point.lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].ref_point.lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Longitude) name(longint) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007054\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].ref_point.longint.value) << 
                                         " map.road_segments[0].elements[f].ref_point.longint.value: " << ros->map.road_segments[0].elements[f].ref_point.longint.value;
                        }
                        
                        double _tmp_7830 = ros->map.road_segments[0].elements[f].ref_point.longint.value;
                        _tmp_7830 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_7830);
                        _tmp_7830 -= -1800000000;
                        uint32_t* _tmp_7829 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_7829 = static_cast<uint32_t>(_tmp_7830);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].ref_point.longint.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].ref_point.longint.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                            return -1;
                        }
                        
                        if(ros->map.road_segments[0].elements[f].ref_point.elevation.size() != 0) {
                            // Field:  type(Elevation) name(elevation) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007055\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].ref_point.elevation[0].value) << 
                                             " map.road_segments[0].elements[f].ref_point.elevation[0].value: " << ros->map.road_segments[0].elements[f].ref_point.elevation[0].value;
                            }
                            
                            float _tmp_7832 = ros->map.road_segments[0].elements[f].ref_point.elevation[0].value;
                            _tmp_7832 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_7832);
                            _tmp_7832 -= -4096;
                            uint16_t* _tmp_7831 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7831 = static_cast<uint16_t>(_tmp_7832);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].ref_point.elevation[0].value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].ref_point.elevation[0].value' (" << __aux64__ << ") exceeds max allowable (61439); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3527) {
                        }
                    
                    if(ros->map.road_segments[0].elements[f].lane_width.size() != 0) {
                        // Field:  type(LaneWidth) name(lane_width) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(32767) span(32768) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007056\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].lane_width[0].value) << 
                                         " map.road_segments[0].elements[f].lane_width[0].value: " << ros->map.road_segments[0].elements[f].lane_width[0].value;
                        }
                        
                        uint16_t* _tmp_7834 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7834 = ros->map.road_segments[0].elements[f].lane_width[0].value; 
                        __aux64__ = ros->map.road_segments[0].elements[f].lane_width[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].lane_width[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].lane_width[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->map.road_segments[0].elements[f].speed_limits.size() != 0) {
                        // Field:  type(SpeedLimitList) name(speed_limits) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                        __aux64__ = ros->map.road_segments[0].elements[f].speed_limits[0].elements.size();
                        if(__aux64__ > 9) __aux64__ = 9;
                        uint16_t* _tmp_7835 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_7835 = __aux64__ - 1;
                        
                        int __ifh = __aux64__;
                        for(int h = 0; h < __ifh; h++) { 
                            
                                // RegulatorySpeedLimit  SEQUENCE
                                    //  type       SpeedLimitType     
                                    //  speed      Velocity           
                                // Optional fields bytemap
                                
                                // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(12) span(13) dataType(Int32)
                                uint8_t* _ext_flag_3532 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007058\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].type.value) << 
                                                 " map.road_segments[0].elements[f].speed_limits[0].elements[h].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].type.value);
                                }
                                
                                uint8_t* _tmp_7836 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_7836 = ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].type.value; 
                                __aux64__ = ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].speed_limits[0].elements[h].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].speed_limits[0].elements[h].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Velocity) name(speed) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007059\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].speed.value) << 
                                                 " map.road_segments[0].elements[f].speed_limits[0].elements[h].speed.value: " << ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].speed.value;
                                }
                                
                                uint16_t* _tmp_7837 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_7837 = ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].speed.value; 
                                __aux64__ = ros->map.road_segments[0].elements[f].speed_limits[0].elements[h].speed.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].speed_limits[0].elements[h].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].speed_limits[0].elements[h].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                    return -1;
                                }
                                
                        }
                    }
                    
                    // Field:  type(RoadLaneSetList) name(road_lane_set) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(255) span(255) ext(false)
                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_7838 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_7838 = __aux64__ - 1;
                    
                    int __ifi = __aux64__;
                    for(int i = 0; i < __ifi; i++) { 
                        
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
                            uint8_t* _ext_flag_3534 = (uint8_t*) buffer++;  // Write extension flag for GenericLane
                            *_ext_flag_3534 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_7839 = (char*) buffer++;
                            *_tmp_7839 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007061\033[0m| Optional field name = " << *_tmp_7839;
                            char* _tmp_7840 = (char*) buffer++;
                            *_tmp_7840 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007062\033[0m| Optional field ingress_approach = " << *_tmp_7840;
                            char* _tmp_7841 = (char*) buffer++;
                            *_tmp_7841 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007063\033[0m| Optional field egress_approach = " << *_tmp_7841;
                            char* _tmp_7842 = (char*) buffer++;
                            *_tmp_7842 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007064\033[0m| Optional field maneuvers = " << *_tmp_7842;
                            char* _tmp_7843 = (char*) buffer++;
                            *_tmp_7843 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007065\033[0m| Optional field connects_to = " << *_tmp_7843;
                            char* _tmp_7844 = (char*) buffer++;
                            *_tmp_7844 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].overlays.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007066\033[0m| Optional field overlays = " << *_tmp_7844;
                            char* _tmp_7845 = (char*) buffer++;
                            *_tmp_7845 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].regional.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007067\033[0m| Optional field regional = " << *_tmp_7845;
                            
                            // Field:  type(LaneID) name(lane_id) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007068\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_id.value) << 
                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_id.value);
                            }
                            
                            uint8_t* _tmp_7846 = (uint8_t*) buffer++;
                            *_tmp_7846 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_id.value; 
                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name.size() != 0) {
                                // Field:  type(DescriptiveName) name(name) extGroup(0)
                                // Text
                                
                                // TEXT  min(1) max(63) span(63)
                                uint8_t* _tmp_7847 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value.size();
                                
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value.size() < 1) {
                                    logger->warning() << "Error: Length of 'map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value) << " is less than allowable (1); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value.size() > 63) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value) << " exceeds max allowable (63); message dropped.";
                                    return -1;
                                }
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007069\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value.size(): " << 
                                                static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value.size());
                                
                                if(__aux64__ > 63) __aux64__ = 63;
                                *_tmp_7847 = __aux64__ - 1;
                                buffer += 1;
                                
                                int __ifj = __aux64__;
                                for(int j = 0; j < __ifj; j++) {  // 63
                                    char* __tmp__ = (char*)buffer++;
                                    *__tmp__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].name[0].value.c_str()[j];
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(ingress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007070\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach[0].value) << 
                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_7848 = (uint8_t*) buffer++;
                                *_tmp_7848 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach[0].value; 
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].ingress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach.size() != 0) {
                                // Field:  type(ApproachID) name(egress_approach) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007071\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach[0].value) << 
                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach[0].value);
                                }
                                
                                uint8_t* _tmp_7849 = (uint8_t*) buffer++;
                                *_tmp_7849 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach[0].value; 
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].egress_approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
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
                                char* _tmp_7850 = (char*) buffer++;
                                *_tmp_7850 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.regional.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007072\033[0m| Optional field regional = " << *_tmp_7850;
                                
                                // Field:  type(LaneDirection) name(directional_use) extGroup(0)
                                // BitString
                                // BIT_STRING  min(2) max(2) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007073\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.values.size());
                                
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.values.size() < 2) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.values.size()) << " is less than allowable (2); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.values.size() > 2) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.values.size()) << " exceeds max allowable (2); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_7851 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.values.size();
                                if(__aux64__ > 2) __aux64__ = 2;
                                *_tmp_7851 = __aux64__ - 2;
                                buffer += 1;
                                
                                int __ifk = __aux64__;
                                for(int k = 0; k < __ifk; k++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.directional_use.values[k]? 1: 0);
                                }
                                
                                // Field:  type(LaneSharing) name(shared_with) extGroup(0)
                                // BitString
                                // BIT_STRING  min(10) max(10) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007074\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.values.size());
                                
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.values.size() < 10) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.values.size()) << " is less than allowable (10); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.values.size() > 10) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.values.size()) << " exceeds max allowable (10); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_7852 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.values.size();
                                if(__aux64__ > 10) __aux64__ = 10;
                                *_tmp_7852 = __aux64__ - 10;
                                buffer += 1;
                                
                                int __ifl = __aux64__;
                                for(int l = 0; l < __ifl; l++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.shared_with.values[l]? 1: 0);
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
                                uint8_t* _ext_flag_3538 = (uint8_t*) buffer; 
                                buffer++;
                                *_ext_flag_3538 = 0; 
                                
                                uint8_t* _choice_259 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle.size() != 0) {  // CHOICE 0  fieldType(LaneTypeAttributes) 
                                    *_choice_259 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007075\033[0m| Choice selection: 0";
                                
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007076\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].values.size() < 8) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].values.size()) << " is less than allowable (8); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].values.size() > 8) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].values.size()) << " exceeds max allowable (8); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _ext_flag_3539 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].
                                    *_ext_flag_3539 = 0; 
                                    
                                    uint8_t* _tmp_7853 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].values.size();
                                    if(__aux64__ > 8) __aux64__ = 8;
                                    *_tmp_7853 = __aux64__ - 8;
                                    buffer += 1;
                                    
                                    int __ifm = __aux64__;
                                    for(int m = 0; m < __ifm; m++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.vehicle[0].values[m]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk.size() != 0)  // CHOICE 1  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_259 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007077\033[0m| Choice selection: 1";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007078\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7854 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7854 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifn = __aux64__;
                                    for(int n = 0; n < __ifn; n++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.crosswalk[0].values[n]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane.size() != 0)  // CHOICE 2  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_259 = 2;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007079\033[0m| Choice selection: 2";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007080\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7855 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7855 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifo = __aux64__;
                                    for(int o = 0; o < __ifo; o++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.bike_lane[0].values[o]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk.size() != 0)  // CHOICE 3  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_259 = 3;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007081\033[0m| Choice selection: 3";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007082\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7856 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7856 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifp = __aux64__;
                                    for(int p = 0; p < __ifp; p++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.sidewalk[0].values[p]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median.size() != 0)  // CHOICE 4  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_259 = 4;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007083\033[0m| Choice selection: 4";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007084\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7857 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7857 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifq = __aux64__;
                                    for(int q = 0; q < __ifq; q++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.median[0].values[q]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping.size() != 0)  // CHOICE 5  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_259 = 5;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007085\033[0m| Choice selection: 5";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007086\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7858 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7858 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifr = __aux64__;
                                    for(int r = 0; r < __ifr; r++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.striping[0].values[r]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle.size() != 0)  // CHOICE 6  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_259 = 6;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007087\033[0m| Choice selection: 6";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007088\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7859 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7859 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ifs = __aux64__;
                                    for(int s = 0; s < __ifs; s++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.tracked_vehicle[0].values[s]? 1: 0);
                                    }
                                
                                }
                                else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking.size() != 0)  // CHOICE 7  fieldType(LaneTypeAttributes) 
                                {
                                    *_choice_259 = 7;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007089\033[0m| Choice selection: 7";
                                
                                    // BitString
                                    // BIT_STRING  min(16) max(16) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007090\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].values.size());
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].values.size() < 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].values.size()) << " is less than allowable (16); message dropped.";
                                        return -1;
                                    }
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].values.size() > 16) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].values.size()) << " exceeds max allowable (16); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_7860 = (uint8_t*)buffer;
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].values.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    *_tmp_7860 = __aux64__ - 16;
                                    buffer += 1;
                                    
                                    int __ift = __aux64__;
                                    for(int t = 0; t < __ift; t++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type.parking[0].values[t]? 1: 0);
                                    }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_259) << ") selected in CHOICE LaneTypeAttributes in 'map.road_segments[0].elements[f].road_lane_set.elements[i].lane_attributes.lane_type'; message dropped.";
                                    return -1;
                                }
                                
                                // Field name: regional  // avoided
                            
                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers.size() != 0) {
                                // Field:  type(AllowedManeuvers) name(maneuvers) extGroup(0)
                                // BitString
                                // BIT_STRING  min(12) max(12) span(1)
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007091\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].values.size());
                                
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].values.size() < 12) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].values.size()) << " is less than allowable (12); message dropped.";
                                    return -1;
                                }
                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].values.size() > 12) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                    return -1;
                                }
                                
                                uint8_t* _tmp_7861 = (uint8_t*)buffer;
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].values.size();
                                if(__aux64__ > 12) __aux64__ = 12;
                                *_tmp_7861 = __aux64__ - 12;
                                buffer += 1;
                                
                                int __ifu = __aux64__;
                                for(int u = 0; u < __ifu; u++) {
                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                    *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].maneuvers[0].values[u]? 1: 0);
                                }
                            }
                            
                            // Field:  type(NodeListXY) name(node_list) extGroup(0)
                            // Choice
                               // #0  nodes   NodeSetXY
                               // #1  computed   ComputedLane
                            uint8_t* _ext_flag_3540 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_3540 = 0; 
                            
                            uint8_t* _choice_260 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes.size() != 0) {  // CHOICE 0  fieldType(NodeListXY) 
                                *_choice_260 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007092\033[0m| Choice selection: 0";
                            
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(2) max(63) span(62) ext(false)
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements.size();
                                if(__aux64__ > 63) __aux64__ = 63;
                                uint16_t* _tmp_7862 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_7862 = __aux64__ - 2;
                                
                                int __ifv = __aux64__;
                                for(int v = 0; v < __ifv; v++) { 
                                    
                                        // NodeXY  SEQUENCE
                                            //  delta      NodeOffsetPointXY      
                                            //  attributes NodeAttributeSetXY   OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_3541 = (uint8_t*) buffer++;  // Write extension flag for NodeXY
                                        *_ext_flag_3541 = 0;  
                                        
                                        // Optional fields bytemap
                                        char* _tmp_7863 = (char*) buffer++;
                                        *_tmp_7863 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007094\033[0m| Optional field attributes = " << *_tmp_7863;
                                        
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
                                        uint8_t* _choice_261 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1.size() != 0) {  // CHOICE 0  fieldType(NodeOffsetPointXY) 
                                            *_choice_261 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007095\033[0m| Choice selection: 0";
                                        
                                                // Node_XY_20b  SEQUENCE
                                                    //  x          Offset_B10     
                                                    //  y          Offset_B10     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B10) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007096\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].x.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].x.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].x.value;
                                                }
                                                
                                                float _tmp_7865 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].x.value;
                                                _tmp_7865 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7865);
                                                _tmp_7865 -= -512;
                                                uint16_t* _tmp_7864 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7864 = static_cast<uint16_t>(_tmp_7865);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].x.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].x.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B10) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007097\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].y.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].y.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].y.value;
                                                }
                                                
                                                float _tmp_7867 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].y.value;
                                                _tmp_7867 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7867);
                                                _tmp_7867 -= -512;
                                                uint16_t* _tmp_7866 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7866 = static_cast<uint16_t>(_tmp_7867);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].y.value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy1[0].y.value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2.size() != 0)  // CHOICE 1  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_261 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007098\033[0m| Choice selection: 1";
                                        
                                                // Node_XY_22b  SEQUENCE
                                                    //  x          Offset_B11     
                                                    //  y          Offset_B11     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B11) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007099\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].x.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].x.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].x.value;
                                                }
                                                
                                                float _tmp_7869 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].x.value;
                                                _tmp_7869 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7869);
                                                _tmp_7869 -= -1024;
                                                uint16_t* _tmp_7868 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7868 = static_cast<uint16_t>(_tmp_7869);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].x.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].x.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B11) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-1024) max(1023) span(2048) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007100\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].y.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].y.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].y.value;
                                                }
                                                
                                                float _tmp_7871 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].y.value;
                                                _tmp_7871 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7871);
                                                _tmp_7871 -= -1024;
                                                uint16_t* _tmp_7870 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7870 = static_cast<uint16_t>(_tmp_7871);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1024) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].y.value' (" << __aux64__ << ") less than (-1024); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy2[0].y.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3.size() != 0)  // CHOICE 2  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_261 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007101\033[0m| Choice selection: 2";
                                        
                                                // Node_XY_24b  SEQUENCE
                                                    //  x          Offset_B12     
                                                    //  y          Offset_B12     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B12) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007102\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].x.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].x.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].x.value;
                                                }
                                                
                                                float _tmp_7873 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].x.value;
                                                _tmp_7873 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7873);
                                                _tmp_7873 -= -2048;
                                                uint16_t* _tmp_7872 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7872 = static_cast<uint16_t>(_tmp_7873);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].x.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].x.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B12) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007103\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].y.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].y.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].y.value;
                                                }
                                                
                                                float _tmp_7875 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].y.value;
                                                _tmp_7875 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7875);
                                                _tmp_7875 -= -2048;
                                                uint16_t* _tmp_7874 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7874 = static_cast<uint16_t>(_tmp_7875);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].y.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy3[0].y.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4.size() != 0)  // CHOICE 3  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_261 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007104\033[0m| Choice selection: 3";
                                        
                                                // Node_XY_26b  SEQUENCE
                                                    //  x          Offset_B13     
                                                    //  y          Offset_B13     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B13) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007105\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].x.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].x.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].x.value;
                                                }
                                                
                                                float _tmp_7877 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].x.value;
                                                _tmp_7877 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7877);
                                                _tmp_7877 -= -4096;
                                                uint16_t* _tmp_7876 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7876 = static_cast<uint16_t>(_tmp_7877);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].x.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].x.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B13) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-4096) max(4095) span(8192) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007106\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].y.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].y.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].y.value;
                                                }
                                                
                                                float _tmp_7879 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].y.value;
                                                _tmp_7879 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7879);
                                                _tmp_7879 -= -4096;
                                                uint16_t* _tmp_7878 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7878 = static_cast<uint16_t>(_tmp_7879);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].y.value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy4[0].y.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5.size() != 0)  // CHOICE 4  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_261 = 4;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007107\033[0m| Choice selection: 4";
                                        
                                                // Node_XY_28b  SEQUENCE
                                                    //  x          Offset_B14     
                                                    //  y          Offset_B14     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B14) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007108\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].x.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].x.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].x.value;
                                                }
                                                
                                                float _tmp_7881 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].x.value;
                                                _tmp_7881 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7881);
                                                _tmp_7881 -= -8192;
                                                uint16_t* _tmp_7880 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7880 = static_cast<uint16_t>(_tmp_7881);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].x.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].x.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B14) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-8192) max(8191) span(16384) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007109\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].y.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].y.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].y.value;
                                                }
                                                
                                                float _tmp_7883 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].y.value;
                                                _tmp_7883 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7883);
                                                _tmp_7883 -= -8192;
                                                uint16_t* _tmp_7882 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7882 = static_cast<uint16_t>(_tmp_7883);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -8192) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].y.value' (" << __aux64__ << ") less than (-8192); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy5[0].y.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6.size() != 0)  // CHOICE 5  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_261 = 5;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007110\033[0m| Choice selection: 5";
                                        
                                                // Node_XY_32b  SEQUENCE
                                                    //  x          Offset_B16     
                                                    //  y          Offset_B16     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Offset_B16) name(x) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007111\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].x.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].x.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].x.value;
                                                }
                                                
                                                float _tmp_7885 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].x.value;
                                                _tmp_7885 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7885);
                                                _tmp_7885 -= -32768;
                                                uint16_t* _tmp_7884 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7884 = static_cast<uint16_t>(_tmp_7885);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].x.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].x.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Offset_B16) name(y) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007112\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].y.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].y.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].y.value;
                                                }
                                                
                                                float _tmp_7887 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].y.value;
                                                _tmp_7887 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7887);
                                                _tmp_7887 -= -32768;
                                                uint16_t* _tmp_7886 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7886 = static_cast<uint16_t>(_tmp_7887);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].y.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_xy6[0].y.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon.size() != 0)  // CHOICE 6  fieldType(NodeOffsetPointXY) 
                                        {
                                            *_choice_261 = 6;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007113\033[0m| Choice selection: 6";
                                        
                                                // Node_LLmD_64b  SEQUENCE
                                                    //  lon        Longitude      
                                                    //  lat        Latitude       
                                                // Optional fields bytemap
                                                
                                                // Field:  type(Longitude) name(lon) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007114\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lon.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lon.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lon.value;
                                                }
                                                
                                                double _tmp_7889 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lon.value;
                                                _tmp_7889 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7889);
                                                _tmp_7889 -= -1800000000;
                                                uint32_t* _tmp_7888 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_7888 = static_cast<uint32_t>(_tmp_7889);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lon.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(Latitude) name(lat) extGroup(0)
                                                // Real
                                                
                                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007115\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lat.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lat.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lat.value;
                                                }
                                                
                                                double _tmp_7891 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lat.value;
                                                _tmp_7891 *= 1.0E7;
                                                __aux64__ = static_cast<uint64_t>(_tmp_7891);
                                                _tmp_7891 -= -900000000;
                                                uint32_t* _tmp_7890 = (uint32_t*) buffer; buffer += 4;
                                                *_tmp_7890 = static_cast<uint32_t>(_tmp_7891);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta.node_lat_lon[0].lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        // Field name: regional  // avoided
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_261) << ") selected in CHOICE NodeOffsetPointXY in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].delta'; message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes.size() != 0) {
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
                                                uint8_t* _ext_flag_3557 = (uint8_t*) buffer++;  // Write extension flag for NodeAttributeSetXY
                                                *_ext_flag_3557 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_7892 = (char*) buffer++;
                                                *_tmp_7892 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007116\033[0m| Optional field local_node = " << *_tmp_7892;
                                                char* _tmp_7893 = (char*) buffer++;
                                                *_tmp_7893 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007117\033[0m| Optional field disabled = " << *_tmp_7893;
                                                char* _tmp_7894 = (char*) buffer++;
                                                *_tmp_7894 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007118\033[0m| Optional field enabled = " << *_tmp_7894;
                                                char* _tmp_7895 = (char*) buffer++;
                                                *_tmp_7895 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007119\033[0m| Optional field data = " << *_tmp_7895;
                                                char* _tmp_7896 = (char*) buffer++;
                                                *_tmp_7896 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007120\033[0m| Optional field d_width = " << *_tmp_7896;
                                                char* _tmp_7897 = (char*) buffer++;
                                                *_tmp_7897 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007121\033[0m| Optional field d_elevation = " << *_tmp_7897;
                                                char* _tmp_7898 = (char*) buffer++;
                                                *_tmp_7898 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].regional.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007122\033[0m| Optional field regional = " << *_tmp_7898;
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node.size() != 0) {
                                                    // Field:  type(NodeAttributeXYList) name(local_node) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7899 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7899 = __aux64__ - 1;
                                                    
                                                    int __ifw = __aux64__;
                                                    for(int w = 0; w < __ifw; w++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(11) span(12) dataType(Int32)
                                                        uint8_t* _ext_flag_3558 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007124\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].value) << 
                                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_7900 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_7900 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].value; 
                                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 11) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].local_node[0].elements[w].value' (" << __aux64__ << ") exceeds max allowable (11); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(disabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7901 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7901 = __aux64__ - 1;
                                                    
                                                    int __ifx = __aux64__;
                                                    for(int x = 0; x < __ifx; x++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_3559 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007126\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].value) << 
                                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_7902 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_7902 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].value; 
                                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].disabled[0].elements[x].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled.size() != 0) {
                                                    // Field:  type(SegmentAttributeXYList) name(enabled) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7903 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7903 = __aux64__ - 1;
                                                    
                                                    int __ify = __aux64__;
                                                    for(int y = 0; y < __ify; y++) { 
                                                        
                                                        // Enumerated
                                                        // INT32  min(0) max(37) span(38) dataType(Int32)
                                                        uint8_t* _ext_flag_3560 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m007128\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].value) << 
                                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].value);
                                                        }
                                                        
                                                        uint8_t* _tmp_7904 = (uint8_t*)buffer;
                                                        buffer += 1;
                                                        *_tmp_7904 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].value; 
                                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].value; 
                                                        // MIN validator
                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                            return -1;
                                                        }
                                                        // MAX validator
                                                        if (VALIDATORS_ENABLED && __aux64__ > 37) {
                                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].enabled[0].elements[y].value' (" << __aux64__ << ") exceeds max allowable (37); message dropped.";
                                                            return -1;
                                                        }
                                                        
                                                        
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data.size() != 0) {
                                                    // Field:  type(LaneDataAttributeList) name(data) extGroup(0)
                                                    // SequenceOf
                                                    // Data Type UInt8
                                                    // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements.size();
                                                    if(__aux64__ > 8) __aux64__ = 8;
                                                    uint16_t* _tmp_7905 = (uint16_t*)buffer;
                                                    buffer += 2;
                                                    *_tmp_7905 = __aux64__ - 1;
                                                    
                                                    int __ifz = __aux64__;
                                                    for(int z = 0; z < __ifz; z++) { 
                                                        
                                                        // Choice
                                                           // #0  pathEndPointAngle   DeltaAngle
                                                           // #1  laneCrownPointCenter   RoadwayCrownAngle
                                                           // #2  laneCrownPointLeft   RoadwayCrownAngle
                                                           // #3  laneCrownPointRight   RoadwayCrownAngle
                                                           // #4  laneAngle   MergeDivergeNodeAngle
                                                           // #5  speedLimits   SpeedLimitList
                                                           // #6  regional   LaneDataAttribute_regional
                                                        uint8_t* _ext_flag_3561 = (uint8_t*) buffer; 
                                                        buffer++;
                                                        *_ext_flag_3561 = 0; 
                                                        
                                                        uint8_t* _choice_262 = (uint8_t*) buffer;
                                                        buffer++;
                                                        
                                                        if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle.size() != 0) {  // CHOICE 0  fieldType(LaneDataAttribute) 
                                                            *_choice_262 = 0;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007130\033[0m| Choice selection: 0";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-150) max(150) span(301) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007131\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle[0].value) << 
                                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_7906 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle[0].value - -150;
                                                            *_tmp_7906 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle[0].value' (" << __aux64__ << ") less than (-150); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 150) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].path_end_point_angle[0].value' (" << __aux64__ << ") exceeds max allowable (150); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center.size() != 0)  // CHOICE 1  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_262 = 1;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007132\033[0m| Choice selection: 1";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007133\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center[0].value) << 
                                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_7907 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center[0].value - -128;
                                                            *_tmp_7907 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_center[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left.size() != 0)  // CHOICE 2  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_262 = 2;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007134\033[0m| Choice selection: 2";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007135\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left[0].value) << 
                                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_7908 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left[0].value - -128;
                                                            *_tmp_7908 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_left[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right.size() != 0)  // CHOICE 3  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_262 = 3;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007136\033[0m| Choice selection: 3";
                                                        
                                                            // Integer
                                                            
                                                            // INT8  min(-128) max(127) span(256) dataType(Int8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007137\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right[0].value) << 
                                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right[0].value);
                                                            }
                                                            
                                                            uint8_t* _tmp_7909 = (uint8_t*) buffer++;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right[0].value - -128;
                                                            *_tmp_7909 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -128) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right[0].value' (" << __aux64__ << ") less than (-128); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_crown_point_right[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle.size() != 0)  // CHOICE 4  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_262 = 4;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007138\033[0m| Choice selection: 4";
                                                        
                                                            // Integer
                                                            
                                                            // INT16  min(-180) max(180) span(361) dataType(Int16)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007139\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle[0].value) << 
                                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle[0].value;
                                                            }
                                                            
                                                            uint16_t* _tmp_7910 = (uint16_t*) buffer; buffer += 2;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle[0].value - -180;
                                                            *_tmp_7910 = __aux64__;
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle[0].value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle[0].value' (" << __aux64__ << ") less than (-180); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 180) {
                                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].lane_angle[0].value' (" << __aux64__ << ") exceeds max allowable (180); message dropped.";
                                                                return -1;
                                                            }
                                                        
                                                        }
                                                        else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits.size() != 0)  // CHOICE 5  fieldType(LaneDataAttribute) 
                                                        {
                                                            *_choice_262 = 5;  // Setting choice selection
                                                        
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007140\033[0m| Choice selection: 5";
                                                        
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(9) span(9) ext(false)
                                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements.size();
                                                            if(__aux64__ > 9) __aux64__ = 9;
                                                            uint16_t* _tmp_7911 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_7911 = __aux64__ - 1;
                                                            
                                                            int __ifa = __aux64__;
                                                            for(int a = 0; a < __ifa; a++) { 
                                                                
                                                                    // RegulatorySpeedLimit  SEQUENCE
                                                                        //  type       SpeedLimitType     
                                                                        //  speed      Velocity           
                                                                    // Optional fields bytemap
                                                                    
                                                                    // Field:  type(SpeedLimitType) name(type) extGroup(0)
                                                                    // Enumerated
                                                                    // INT32  min(0) max(12) span(13) dataType(Int32)
                                                                    uint8_t* _ext_flag_3567 = (uint8_t*) buffer++; // Write extension flag for ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007142\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.value) << 
                                                                                     " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.value);
                                                                    }
                                                                    
                                                                    uint8_t* _tmp_7912 = (uint8_t*)buffer;
                                                                    buffer += 1;
                                                                    *_tmp_7912 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.value; 
                                                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.value; 
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].type.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(Velocity) name(speed) extGroup(0)
                                                                    // Integer
                                                                    
                                                                    // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007143\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].speed.value) << 
                                                                                     " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].speed.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].speed.value;
                                                                    }
                                                                    
                                                                    uint16_t* _tmp_7913 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_7913 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].speed.value; 
                                                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].speed.value;
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z].speed_limits[0].elements[a].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                            }
                                                        
                                                        }
                                                        // Field name: regional  // avoided
                                                        else
                                                        {
                                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_262) << ") selected in CHOICE LaneDataAttribute in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].data[0].elements[z]'; message dropped.";
                                                            return -1;
                                                        }
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_width) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007144\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width[0].value) << 
                                                                     " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width[0].value;
                                                    }
                                                    
                                                    float _tmp_7915 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width[0].value;
                                                    _tmp_7915 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_7915);
                                                    _tmp_7915 -= -512;
                                                    uint16_t* _tmp_7914 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_7914 = static_cast<uint16_t>(_tmp_7915);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_width[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation.size() != 0) {
                                                    // Field:  type(Offset_B10) name(d_elevation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(-512) max(511) span(1024) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007145\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation[0].value) << 
                                                                     " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation[0].value;
                                                    }
                                                    
                                                    float _tmp_7917 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation[0].value;
                                                    _tmp_7917 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_7917);
                                                    _tmp_7917 -= -512;
                                                    uint16_t* _tmp_7916 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_7916 = static_cast<uint16_t>(_tmp_7917);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -512) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation[0].value' (" << __aux64__ << ") less than (-512); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.nodes[0].elements[v].attributes[0].d_elevation[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field name: regional  // avoided
                                                if(*_ext_flag_3557) {
                                                }
                                        }
                                        
                                        if(*_ext_flag_3541) {
                                        }
                                }
                            
                            }
                            else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed.size() != 0)  // CHOICE 1  fieldType(NodeListXY) 
                            {
                                *_choice_260 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007146\033[0m| Choice selection: 1";
                            
                                    // ComputedLane  SEQUENCE
                                        //  referenceLaneId LaneID                       
                                        //  offsetXaxis     ComputedLane_offsetXaxis     
                                        //  offsetYaxis     ComputedLane_offsetYaxis     
                                        //  rotateXY        Angle                      OPTIONAL  
                                        //  scaleXaxis      Scale_B12                  OPTIONAL  
                                        //  scaleYaxis      Scale_B12                  OPTIONAL  
                                        //  regional        ComputedLane_regional      OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_3571 = (uint8_t*) buffer++;  // Write extension flag for ComputedLane
                                    *_ext_flag_3571 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_7920 = (char*) buffer++;
                                    *_tmp_7920 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007147\033[0m| Optional field rotate_xy = " << *_tmp_7920;
                                    char* _tmp_7921 = (char*) buffer++;
                                    *_tmp_7921 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007148\033[0m| Optional field scale_xaxis = " << *_tmp_7921;
                                    char* _tmp_7922 = (char*) buffer++;
                                    *_tmp_7922 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007149\033[0m| Optional field scale_yaxis = " << *_tmp_7922;
                                    char* _tmp_7923 = (char*) buffer++;
                                    *_tmp_7923 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].regional.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007150\033[0m| Optional field regional = " << *_tmp_7923;
                                    
                                    // Field:  type(LaneID) name(reference_lane_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007151\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].reference_lane_id.value) << 
                                                     " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].reference_lane_id.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].reference_lane_id.value);
                                    }
                                    
                                    uint8_t* _tmp_7924 = (uint8_t*) buffer++;
                                    *_tmp_7924 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].reference_lane_id.value; 
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].reference_lane_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].reference_lane_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetXaxis) name(offset_xaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_263 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetXaxis) 
                                        *_choice_263 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007152\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007153\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7925 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small[0].value - -2047;
                                        *_tmp_7925 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetXaxis) 
                                    {
                                        *_choice_263 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007154\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007155\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7926 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large[0].value - -32767;
                                        *_tmp_7926 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_263) << ") selected in CHOICE ComputedLane_offsetXaxis in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_xaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ComputedLane_offsetYaxis) name(offset_yaxis) extGroup(0)
                                    // Choice
                                       // #0  small   DrivenLineOffsetSm
                                       // #1  large   DrivenLineOffsetLg
                                    uint8_t* _choice_264 = (uint8_t*) buffer;
                                    buffer++;
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small.size() != 0) {  // CHOICE 0  fieldType(ComputedLane_offsetYaxis) 
                                        *_choice_264 = 0;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007156\033[0m| Choice selection: 0";
                                    
                                        // Integer
                                        
                                        // INT16  min(-2047) max(2047) span(4095) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007157\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small[0].value) << 
                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7927 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small[0].value - -2047;
                                        *_tmp_7927 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") less than (-2047); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.small[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large.size() != 0)  // CHOICE 1  fieldType(ComputedLane_offsetYaxis) 
                                    {
                                        *_choice_264 = 1;  // Setting choice selection
                                    
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007158\033[0m| Choice selection: 1";
                                    
                                        // Integer
                                        
                                        // INT16  min(-32767) max(32767) span(65535) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007159\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large[0].value) << 
                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7928 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large[0].value - -32767;
                                        *_tmp_7928 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") less than (-32767); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis.large[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                    
                                    }
                                    else
                                    {
                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_264) << ") selected in CHOICE ComputedLane_offsetYaxis in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].offset_yaxis'; message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy.size() != 0) {
                                        // Field:  type(Angle) name(rotate_xy) extGroup(0)
                                        // Integer
                                        
                                        // UINT16  min(0) max(28800) span(28801) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007160\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy[0].value) << 
                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7929 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_7929 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy[0].value; 
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 28800) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].rotate_xy[0].value' (" << __aux64__ << ") exceeds max allowable (28800); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_xaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007161\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis[0].value) << 
                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7930 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis[0].value - -2048;
                                        *_tmp_7930 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_xaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis.size() != 0) {
                                        // Field:  type(Scale_B12) name(scale_yaxis) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-2048) max(2047) span(4096) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007162\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis[0].value) << 
                                                         " map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis[0].value;
                                        }
                                        
                                        uint16_t* _tmp_7931 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis[0].value - -2048;
                                        *_tmp_7931 = __aux64__;
                                        __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                            logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list.computed[0].scale_yaxis[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field name: regional  // avoided
                                    if(*_ext_flag_3571) {
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_260) << ") selected in CHOICE NodeListXY in 'map.road_segments[0].elements[f].road_lane_set.elements[i].node_list'; message dropped.";
                                return -1;
                            }
                            
                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to.size() != 0) {
                                // Field:  type(ConnectsToList) name(connects_to) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_7933 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_7933 = __aux64__ - 1;
                                
                                int __ifb = __aux64__;
                                for(int b = 0; b < __ifb; b++) { 
                                    
                                        // Connection  SEQUENCE
                                            //  connectingLane     ConnectingLane              
                                            //  remoteIntersection IntersectionReferenceID   OPTIONAL  
                                            //  signalGroup        SignalGroupID             OPTIONAL  
                                            //  userClass          RestrictionClassID        OPTIONAL  
                                            //  connectionID       LaneConnectionID          OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_7934 = (char*) buffer++;
                                        *_tmp_7934 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007164\033[0m| Optional field remote_intersection = " << *_tmp_7934;
                                        char* _tmp_7935 = (char*) buffer++;
                                        *_tmp_7935 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007165\033[0m| Optional field signal_group = " << *_tmp_7935;
                                        char* _tmp_7936 = (char*) buffer++;
                                        *_tmp_7936 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007166\033[0m| Optional field user_class = " << *_tmp_7936;
                                        char* _tmp_7937 = (char*) buffer++;
                                        *_tmp_7937 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007167\033[0m| Optional field connection_id = " << *_tmp_7937;
                                        
                                        // Field:  type(ConnectingLane) name(connecting_lane) extGroup(0)
                                            // ConnectingLane  SEQUENCE
                                                //  lane       LaneID               
                                                //  maneuver   AllowedManeuvers   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_7938 = (char*) buffer++;
                                            *_tmp_7938 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007168\033[0m| Optional field maneuver = " << *_tmp_7938;
                                            
                                            // Field:  type(LaneID) name(lane) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007169\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.lane.value) << 
                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.lane.value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.lane.value);
                                            }
                                            
                                            uint8_t* _tmp_7939 = (uint8_t*) buffer++;
                                            *_tmp_7939 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.lane.value; 
                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.lane.value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.lane.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.lane.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver.size() != 0) {
                                                // Field:  type(AllowedManeuvers) name(maneuver) extGroup(0)
                                                // BitString
                                                // BIT_STRING  min(12) max(12) span(1)
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007170\033[0m| map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].values.size());
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].values.size() < 12) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].values.size()) << " is less than allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].values.size() > 12) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].value' " << (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].values.size()) << " exceeds max allowable (12); message dropped.";
                                                    return -1;
                                                }
                                                
                                                uint8_t* _tmp_7940 = (uint8_t*)buffer;
                                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].values.size();
                                                if(__aux64__ > 12) __aux64__ = 12;
                                                *_tmp_7940 = __aux64__ - 12;
                                                buffer += 1;
                                                
                                                int __ifc = __aux64__;
                                                for(int c = 0; c < __ifc; c++) {
                                                    uint8_t* __b__ = (uint8_t*)buffer++;
                                                    *__b__ = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connecting_lane.maneuver[0].values[c]? 1: 0);
                                                }
                                            }
                                        
                                        if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection.size() != 0) {
                                            // Field:  type(IntersectionReferenceID) name(remote_intersection) extGroup(0)
                                                // IntersectionReferenceID  SEQUENCE
                                                    //  region     RoadRegulatorID   OPTIONAL  
                                                    //  id         IntersectionID      
                                                // Optional fields bytemap
                                                char* _tmp_7941 = (char*) buffer++;
                                                *_tmp_7941 = (ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007171\033[0m| Optional field region = " << *_tmp_7941;
                                                
                                                if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region.size() != 0) {
                                                    // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007172\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region[0].value) << 
                                                                     " map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region[0].value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_7942 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_7942 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region[0].value; 
                                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(IntersectionID) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007173\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].id.value) << 
                                                                 " map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].id.value: " << ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_7943 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_7943 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].id.value; 
                                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].remote_intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group.size() != 0) {
                                            // Field:  type(SignalGroupID) name(signal_group) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007174\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group[0].value) << 
                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7944 = (uint8_t*) buffer++;
                                            *_tmp_7944 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group[0].value; 
                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].signal_group[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class.size() != 0) {
                                            // Field:  type(RestrictionClassID) name(user_class) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007175\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class[0].value) << 
                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7945 = (uint8_t*) buffer++;
                                            *_tmp_7945 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class[0].value; 
                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].user_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id.size() != 0) {
                                            // Field:  type(LaneConnectionID) name(connection_id) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007176\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id[0].value) << 
                                                             " map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id[0].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7946 = (uint8_t*) buffer++;
                                            *_tmp_7946 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id[0].value; 
                                            __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].connects_to[0].elements[b].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                            }
                            
                            if(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].overlays.size() != 0) {
                                // Field:  type(OverlayLaneList) name(overlays) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(5) span(5) ext(false)
                                __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements.size();
                                if(__aux64__ > 5) __aux64__ = 5;
                                uint16_t* _tmp_7947 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_7947 = __aux64__ - 1;
                                
                                int __ifd = __aux64__;
                                for(int d = 0; d < __ifd; d++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007178\033[0m| " << tools::getTypeName(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements[d].value) << 
                                                     " map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements[d].value: " << static_cast<int>(ros->map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements[d].value);
                                    }
                                    
                                    uint8_t* _tmp_7948 = (uint8_t*) buffer++;
                                    *_tmp_7948 = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements[d].value; 
                                    __aux64__ = ros->map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements[d].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements[d].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'map.road_segments[0].elements[f].road_lane_set.elements[i].overlays[0].elements[d].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            // Field name: regional  // avoided
                            if(*_ext_flag_3534) {
                            }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_3523) {
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
                uint8_t* _ext_flag_3589 = (uint8_t*) buffer++;  // Write extension flag for DataParameters
                *_ext_flag_3589 = 0;  
                
                // Optional fields bytemap
                char* _tmp_7951 = (char*) buffer++;
                *_tmp_7951 = (ros->map.data_parameters[0].process_method.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m007179\033[0m| Optional field process_method = " << *_tmp_7951;
                char* _tmp_7952 = (char*) buffer++;
                *_tmp_7952 = (ros->map.data_parameters[0].process_agency.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m007180\033[0m| Optional field process_agency = " << *_tmp_7952;
                char* _tmp_7953 = (char*) buffer++;
                *_tmp_7953 = (ros->map.data_parameters[0].last_checked_date.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m007181\033[0m| Optional field last_checked_date = " << *_tmp_7953;
                char* _tmp_7954 = (char*) buffer++;
                *_tmp_7954 = (ros->map.data_parameters[0].geoid_used.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m007182\033[0m| Optional field geoid_used = " << *_tmp_7954;
                
                if(ros->map.data_parameters[0].process_method.size() != 0) {
                    // Field:  type(DataParameters_processMethod) name(process_method) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_7955 = (uint8_t*)buffer;
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
                        logger->debug() << "|\033[38;5;94m007183\033[0m| map.data_parameters[0].process_method[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].process_method[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_7955 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ife = __aux64__;
                    for(int e = 0; e < __ife; e++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].process_method[0].value.c_str()[e];
                    }
                }
                
                if(ros->map.data_parameters[0].process_agency.size() != 0) {
                    // Field:  type(DataParameters_processAgency) name(process_agency) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_7956 = (uint8_t*)buffer;
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
                        logger->debug() << "|\033[38;5;94m007184\033[0m| map.data_parameters[0].process_agency[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].process_agency[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_7956 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __iff = __aux64__;
                    for(int f = 0; f < __iff; f++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].process_agency[0].value.c_str()[f];
                    }
                }
                
                if(ros->map.data_parameters[0].last_checked_date.size() != 0) {
                    // Field:  type(DataParameters_lastCheckedDate) name(last_checked_date) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_7957 = (uint8_t*)buffer;
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
                        logger->debug() << "|\033[38;5;94m007185\033[0m| map.data_parameters[0].last_checked_date[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].last_checked_date[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_7957 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ifg = __aux64__;
                    for(int g = 0; g < __ifg; g++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].last_checked_date[0].value.c_str()[g];
                    }
                }
                
                if(ros->map.data_parameters[0].geoid_used.size() != 0) {
                    // Field:  type(DataParameters_geoidUsed) name(geoid_used) extGroup(0)
                    // Text
                    
                    // TEXT  min(1) max(255) span(255)
                    uint8_t* _tmp_7958 = (uint8_t*)buffer;
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
                        logger->debug() << "|\033[38;5;94m007186\033[0m| map.data_parameters[0].geoid_used[0].value.size(): " << 
                                    static_cast<int>(ros->map.data_parameters[0].geoid_used[0].value.size());
                    
                    if(__aux64__ > 255) __aux64__ = 255;
                    *_tmp_7958 = __aux64__ - 1;
                    buffer += 1;
                    
                    int __ifh = __aux64__;
                    for(int h = 0; h < __ifh; h++) {  // 255
                        char* __tmp__ = (char*)buffer++;
                        *__tmp__ = ros->map.data_parameters[0].geoid_used[0].value.c_str()[h];
                    }
                }
                
                if(*_ext_flag_3589) {
                }
        }
        
        // Field name: restriction_list  // avoided
        // Field name: regional  // avoided
        if(*_ext_flag_3452) {
        }
    
	
            return buffer - start;
        }
    } 
}