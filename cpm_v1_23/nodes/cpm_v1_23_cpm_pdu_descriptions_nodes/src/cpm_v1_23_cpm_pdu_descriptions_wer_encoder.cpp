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
#include <cpm_v1_23_cpm_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_cpm_v1_23_cpm_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const cpm_v1_23_cpm_pdu_descriptions_msgs::CollectivePerceptionMessage::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<cpm_v1_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const cpm_v1_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // CollectivePerceptionMessage  SEQUENCE
        //  its_header ItsPduHeader     
        //  payload    CpmPayload       
    // Optional fields bytemap
    
    // Field:  type(ItsPduHeader) name(its_header) extGroup(0)
        // ItsPduHeader  SEQUENCE
            //  protocolVersion OrdinalNumber1B     
            //  messageId       MessageId           
            //  stationId       StationId           
        // Optional fields bytemap
        
        // Field:  type(OrdinalNumber1B) name(protocol_version) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m000823\033[0m| " << tools::getTypeName(ros->its_header.protocol_version.value) << 
                         " its_header.protocol_version.value: " << static_cast<int>(ros->its_header.protocol_version.value);
        }
        
        uint8_t* _tmp_1015 = (uint8_t*) buffer++;
        *_tmp_1015 = ros->its_header.protocol_version.value; 
        __aux64__ = ros->its_header.protocol_version.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'its_header.protocol_version.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'its_header.protocol_version.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(MessageId) name(message_id) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m000824\033[0m| " << tools::getTypeName(ros->its_header.message_id.value) << 
                         " its_header.message_id.value: " << static_cast<int>(ros->its_header.message_id.value);
        }
        
        uint8_t* _tmp_1016 = (uint8_t*) buffer++;
        *_tmp_1016 = ros->its_header.message_id.value; 
        __aux64__ = ros->its_header.message_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'its_header.message_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'its_header.message_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(StationId) name(station_id) extGroup(0)
        // Integer
        
        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
        if(debug) {
            logger->debug() << "|\033[38;5;94m000825\033[0m| " << tools::getTypeName(ros->its_header.station_id.value) << 
                         " its_header.station_id.value: " << ros->its_header.station_id.value;
        }
        
        uint32_t* _tmp_1017 = (uint32_t*) buffer; buffer += 4;
        *_tmp_1017 = ros->its_header.station_id.value; 
        __aux64__ = ros->its_header.station_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'its_header.station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->warning() << "Error: Value in 'its_header.station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
            return -1;
        }
    
    // Field:  type(CpmPayload) name(payload) extGroup(0)
        // CpmPayload  SEQUENCE
            //  managementContainer ManagementContainer                
            //  cpmContainers       ConstraintWrappedCpmContainers     
            //  ...
        uint8_t* _ext_flag_514 = (uint8_t*) buffer++;  // Write extension flag for CpmPayload
        *_ext_flag_514 = 0;  
        
        // Optional fields bytemap
        
        // Field:  type(ManagementContainer) name(management_container) extGroup(0)
            // ManagementContainer  SEQUENCE
                //  referenceTime     TimestampIts                
                //  referencePosition ReferencePosition           
                //  segmentationInfo  MessageSegmentationInfo   OPTIONAL  
                //  messageRateRange  MessageRateRange          OPTIONAL  
                //  ...
            uint8_t* _ext_flag_515 = (uint8_t*) buffer++;  // Write extension flag for ManagementContainer
            *_ext_flag_515 = 0;  
            
            // Optional fields bytemap
            char* _tmp_1018 = (char*) buffer++;
            *_tmp_1018 = (ros->payload.management_container.segmentation_info.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000826\033[0m| Optional field segmentation_info = " << *_tmp_1018;
            char* _tmp_1019 = (char*) buffer++;
            *_tmp_1019 = (ros->payload.management_container.message_rate_range.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000827\033[0m| Optional field message_rate_range = " << *_tmp_1019;
            
            // Field:  type(TimestampIts) name(reference_time) extGroup(0)
            // Real
            
            // FLOAT  min(0) max(4398046511103) span(4398046511104) scaleDivisor(1000.0) dataType(Float)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000828\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_time.value) << 
                             " payload.management_container.reference_time.value: " << ros->payload.management_container.reference_time.value;
            }
            
            float _tmp_1021 = ros->payload.management_container.reference_time.value;
            _tmp_1021 *= 1000.0;
            __aux64__ = static_cast<uint64_t>(_tmp_1021);
            uint64_t* _tmp_1020 = (uint64_t*) buffer; buffer += 8;
            *_tmp_1020 = static_cast<uint64_t>(_tmp_1021);
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'payload.management_container.reference_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                logger->warning() << "Error: Value in 'payload.management_container.reference_time.value' (" << __aux64__ << ") exceeds max allowable (4398046511103); message dropped.";
                return -1;
            }
            
            // Field:  type(ReferencePosition) name(reference_position) extGroup(0)
                // ReferencePosition  SEQUENCE
                    //  latitude                  Latitude                 
                    //  longitude                 Longitude                
                    //  positionConfidenceEllipse PosConfidenceEllipse     
                    //  altitude                  Altitude                 
                // Optional fields bytemap
                
                // Field:  type(Latitude) name(latitude) extGroup(0)
                // Real
                
                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000829\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.latitude.value) << 
                                 " payload.management_container.reference_position.latitude.value: " << ros->payload.management_container.reference_position.latitude.value;
                }
                
                double _tmp_1023 = ros->payload.management_container.reference_position.latitude.value;
                _tmp_1023 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_1023);
                _tmp_1023 -= -900000000;
                uint32_t* _tmp_1022 = (uint32_t*) buffer; buffer += 4;
                *_tmp_1022 = static_cast<uint32_t>(_tmp_1023);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                    return -1;
                }
                
                // Field:  type(Longitude) name(longitude) extGroup(0)
                // Real
                
                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000830\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.longitude.value) << 
                                 " payload.management_container.reference_position.longitude.value: " << ros->payload.management_container.reference_position.longitude.value;
                }
                
                double _tmp_1025 = ros->payload.management_container.reference_position.longitude.value;
                _tmp_1025 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_1025);
                _tmp_1025 -= -1800000000;
                uint32_t* _tmp_1024 = (uint32_t*) buffer; buffer += 4;
                *_tmp_1024 = static_cast<uint32_t>(_tmp_1025);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                    return -1;
                }
                
                // Field:  type(PosConfidenceEllipse) name(position_confidence_ellipse) extGroup(0)
                    // PosConfidenceEllipse  SEQUENCE
                        //  semiMajorConfidence  SemiAxisLength     
                        //  semiMinorConfidence  SemiAxisLength     
                        //  semiMajorOrientation HeadingValue       
                    // Optional fields bytemap
                    
                    // Field:  type(SemiAxisLength) name(semi_major_confidence) extGroup(0)
                    // Real
                    
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000831\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    }
                    
                    float _tmp_1027 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    _tmp_1027 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_1027);
                    uint16_t* _tmp_1026 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_1026 = static_cast<uint16_t>(_tmp_1027);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                    // Real
                    
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000832\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    }
                    
                    float _tmp_1029 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    _tmp_1029 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_1029);
                    uint16_t* _tmp_1028 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_1028 = static_cast<uint16_t>(_tmp_1029);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(3601) span(3602) dataType(UInt16)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000833\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    }
                    
                    uint16_t* _tmp_1030 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_1030 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value; 
                    __aux64__ = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                        return -1;
                    }
                
                // Field:  type(Altitude) name(altitude) extGroup(0)
                    // Altitude  SEQUENCE
                        //  altitudeValue      AltitudeValue          
                        //  altitudeConfidence AltitudeConfidence     
                    // Optional fields bytemap
                    
                    // Field:  type(AltitudeValue) name(altitude_value) extGroup(0)
                    // Real
                    
                    // FLOAT  min(-100000) max(800001) span(900002) scaleDivisor(100.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000834\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_value.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_value.value: " << ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    }
                    
                    float _tmp_1032 = ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    _tmp_1032 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_1032);
                    _tmp_1032 -= -100000;
                    uint32_t* _tmp_1031 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_1031 = static_cast<uint32_t>(_tmp_1032);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -100000) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") less than (-100000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 800001) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") exceeds max allowable (800001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(15) span(16) dataType(Int32)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000835\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->payload.management_container.reference_position.altitude.altitude_confidence.value);
                    }
                    
                    uint8_t* _tmp_1033 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_1033 = ros->payload.management_container.reference_position.altitude.altitude_confidence.value; 
                    __aux64__ = ros->payload.management_container.reference_position.altitude.altitude_confidence.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 15) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                        return -1;
                    }
            
            if(ros->payload.management_container.segmentation_info.size() != 0) {
                // Field:  type(MessageSegmentationInfo) name(segmentation_info) extGroup(0)
                    // MessageSegmentationInfo  SEQUENCE
                        //  totalMsgNo CardinalNumber3b     
                        //  thisMsgNo  OrdinalNumber3b      
                    // Optional fields bytemap
                    
                    // Field:  type(CardinalNumber3b) name(total_msg_no) extGroup(0)
                    // Integer
                    
                    // UINT8  min(1) max(8) span(8) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000836\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].total_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].total_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].total_msg_no.value);
                    }
                    
                    uint8_t* _tmp_1034 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].total_msg_no.value - 1;
                    *_tmp_1034 = __aux64__;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].total_msg_no.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].total_msg_no.value' (" << __aux64__ << ") less than (1); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 8) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].total_msg_no.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(OrdinalNumber3b) name(this_msg_no) extGroup(0)
                    // Integer
                    
                    // UINT8  min(1) max(8) span(8) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000837\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].this_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].this_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].this_msg_no.value);
                    }
                    
                    uint8_t* _tmp_1035 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].this_msg_no.value - 1;
                    *_tmp_1035 = __aux64__;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].this_msg_no.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].this_msg_no.value' (" << __aux64__ << ") less than (1); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 8) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].this_msg_no.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                        return -1;
                    }
            }
            
            if(ros->payload.management_container.message_rate_range.size() != 0) {
                // Field:  type(MessageRateRange) name(message_rate_range) extGroup(0)
                    // MessageRateRange  SEQUENCE
                        //  messageRateMin MessageRateHz     
                        //  messageRateMax MessageRateHz     
                    // Optional fields bytemap
                    
                    // Field:  type(MessageRateHz) name(message_rate_min) extGroup(0)
                        // MessageRateHz  SEQUENCE
                            //  mantissa   MessageRateHz_mantissa     
                            //  exponent   MessageRateHz_exponent     
                        // Optional fields bytemap
                        
                        // Field:  type(MessageRateHz_mantissa) name(mantissa) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(100) span(100) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000838\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value);
                        }
                        
                        uint8_t* _tmp_1036 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value - 1;
                        *_tmp_1036 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.mantissa.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 100) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.mantissa.value' (" << __aux64__ << ") exceeds max allowable (100); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MessageRateHz_exponent) name(exponent) extGroup(0)
                        // Integer
                        
                        // INT8  min(-5) max(2) span(8) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000839\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value);
                        }
                        
                        uint8_t* _tmp_1037 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value - -5;
                        *_tmp_1037 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -5) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.exponent.value' (" << __aux64__ << ") less than (-5); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.exponent.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(MessageRateHz) name(message_rate_max) extGroup(0)
                        // MessageRateHz  SEQUENCE
                            //  mantissa   MessageRateHz_mantissa     
                            //  exponent   MessageRateHz_exponent     
                        // Optional fields bytemap
                        
                        // Field:  type(MessageRateHz_mantissa) name(mantissa) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(100) span(100) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000840\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value);
                        }
                        
                        uint8_t* _tmp_1038 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value - 1;
                        *_tmp_1038 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.mantissa.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 100) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.mantissa.value' (" << __aux64__ << ") exceeds max allowable (100); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MessageRateHz_exponent) name(exponent) extGroup(0)
                        // Integer
                        
                        // INT8  min(-5) max(2) span(8) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000841\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value);
                        }
                        
                        uint8_t* _tmp_1039 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value - -5;
                        *_tmp_1039 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -5) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.exponent.value' (" << __aux64__ << ") less than (-5); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.exponent.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                            return -1;
                        }
            }
            
            if(*_ext_flag_515) {
            }
        
        // Field:  type(ConstraintWrappedCpmContainers) name(cpm_containers) extGroup(0)
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(8) span(8) ext(true)
        uint8_t* _ext_flag_530 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.
        *_ext_flag_530 = 0; 
        
        __aux64__ = ros->payload.cpm_containers.elements.size();
        if(__aux64__ > 8) __aux64__ = 8;
        uint16_t* _tmp_1041 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_1041 = __aux64__ - 1;
        
        int __ifo = __aux64__;
        for(int o = 0; o < __ifo; o++) { 
            
            // Choice
               // #0  originatingVehicleContainer   OriginatingVehicleContainer
               // #1  originatingRsuContainer   OriginatingRsuContainer
               // #2  sensorInformationContainer   SensorInformationContainer
               // #3  perceptionRegionContainer   PerceptionRegionContainer
               // #4  perceivedObjectContainer   PerceivedObjectContainer
            uint8_t* _choice_21 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->payload.cpm_containers.elements[o].originating_vehicle_container.size() != 0) {  // CHOICE 0  fieldType(WrappedCpmContainer) 
                *_choice_21 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000843\033[0m| Choice selection: 0";
            
                    // OriginatingVehicleContainer  SEQUENCE
                        //  orientationAngle Wgs84Angle         
                        //  pitchAngle       CartesianAngle   OPTIONAL  
                        //  rollAngle        CartesianAngle   OPTIONAL  
                        //  trailerDataSet   TrailerDataSet   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_532 = (uint8_t*) buffer++;  // Write extension flag for OriginatingVehicleContainer
                    *_ext_flag_532 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_1042 = (char*) buffer++;
                    *_tmp_1042 = (ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000844\033[0m| Optional field pitch_angle = " << *_tmp_1042;
                    char* _tmp_1043 = (char*) buffer++;
                    *_tmp_1043 = (ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000845\033[0m| Optional field roll_angle = " << *_tmp_1043;
                    char* _tmp_1044 = (char*) buffer++;
                    *_tmp_1044 = (ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000846\033[0m| Optional field trailer_data_set = " << *_tmp_1044;
                    
                    // Field:  type(Wgs84Angle) name(orientation_angle) extGroup(0)
                        // Wgs84Angle  SEQUENCE
                            //  value      Wgs84AngleValue          
                            //  confidence Wgs84AngleConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(Wgs84AngleValue) name(value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000847\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.value.value) << 
                                         " payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.value.value: " << ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.value.value;
                        }
                        
                        float _tmp_1046 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.value.value;
                        _tmp_1046 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_1046);
                        uint16_t* _tmp_1045 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_1045 = static_cast<uint16_t>(_tmp_1046);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Wgs84AngleConfidence) name(confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000848\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.confidence.value) << 
                                         " payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.confidence.value);
                        }
                        
                        float _tmp_1048 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.confidence.value;
                        _tmp_1048 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_1048);
                        _tmp_1048 -= 1;
                        uint8_t* _tmp_1047 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_1047 = static_cast<uint8_t>(_tmp_1048);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    if(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(pitch_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000849\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].value.value: " << ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].value.value;
                            }
                            
                            float _tmp_1050 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].value.value;
                            _tmp_1050 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_1050);
                            uint16_t* _tmp_1049 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_1049 = static_cast<uint16_t>(_tmp_1050);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000850\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].confidence.value);
                            }
                            
                            float _tmp_1052 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].confidence.value;
                            _tmp_1052 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_1052);
                            _tmp_1052 -= 1;
                            uint8_t* _tmp_1051 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_1051 = static_cast<uint8_t>(_tmp_1052);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(roll_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000851\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].value.value: " << ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].value.value;
                            }
                            
                            float _tmp_1054 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].value.value;
                            _tmp_1054 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_1054);
                            uint16_t* _tmp_1053 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_1053 = static_cast<uint16_t>(_tmp_1054);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000852\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].confidence.value);
                            }
                            
                            float _tmp_1056 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].confidence.value;
                            _tmp_1056 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_1056);
                            _tmp_1056 -= 1;
                            uint8_t* _tmp_1055 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_1055 = static_cast<uint8_t>(_tmp_1056);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set.size() != 0) {
                        // Field:  type(TrailerDataSet) name(trailer_data_set) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(8) span(8) ext(true)
                        uint8_t* _ext_flag_539 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].
                        *_ext_flag_539 = 0; 
                        
                        __aux64__ = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        uint16_t* _tmp_1057 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_1057 = __aux64__ - 1;
                        
                        int __ifp = __aux64__;
                        for(int p = 0; p < __ifp; p++) { 
                            
                                // TrailerData  SEQUENCE
                                    //  refPointId       Identifier1B         
                                    //  hitchPointOffset StandardLength1B     
                                    //  frontOverhang    StandardLength1B   OPTIONAL  
                                    //  rearOverhang     StandardLength1B   OPTIONAL  
                                    //  trailerWidth     VehicleWidth       OPTIONAL  
                                    //  hitchAngle       CartesianAngle       
                                    //  ...
                                uint8_t* _ext_flag_540 = (uint8_t*) buffer++;  // Write extension flag for TrailerData
                                *_ext_flag_540 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_1058 = (char*) buffer++;
                                *_tmp_1058 = (ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000854\033[0m| Optional field front_overhang = " << *_tmp_1058;
                                char* _tmp_1059 = (char*) buffer++;
                                *_tmp_1059 = (ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000855\033[0m| Optional field rear_overhang = " << *_tmp_1059;
                                char* _tmp_1060 = (char*) buffer++;
                                *_tmp_1060 = (ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000856\033[0m| Optional field trailer_width = " << *_tmp_1060;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000857\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_1061 = (uint8_t*) buffer++;
                                *_tmp_1061 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(hitch_point_offset) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000858\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_point_offset.value) << 
                                                 " payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_point_offset.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_point_offset.value);
                                }
                                
                                float _tmp_1063 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_point_offset.value;
                                _tmp_1063 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1063);
                                uint8_t* _tmp_1062 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_1062 = static_cast<uint8_t>(_tmp_1063);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_point_offset.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_point_offset.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(front_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000859\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang[0].value);
                                    }
                                    
                                    float _tmp_1065 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang[0].value;
                                    _tmp_1065 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1065);
                                    uint8_t* _tmp_1064 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1064 = static_cast<uint8_t>(_tmp_1065);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].front_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(rear_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000860\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang[0].value);
                                    }
                                    
                                    float _tmp_1067 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang[0].value;
                                    _tmp_1067 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1067);
                                    uint8_t* _tmp_1066 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1066 = static_cast<uint8_t>(_tmp_1067);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].rear_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width.size() != 0) {
                                    // Field:  type(VehicleWidth) name(trailer_width) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000861\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width[0].value) << 
                                                     " payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width[0].value);
                                    }
                                    
                                    float _tmp_1069 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width[0].value;
                                    _tmp_1069 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1069);
                                    _tmp_1069 -= 1;
                                    uint8_t* _tmp_1068 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1068 = static_cast<uint8_t>(_tmp_1069);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].trailer_width[0].value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(CartesianAngle) name(hitch_angle) extGroup(0)
                                    // CartesianAngle  SEQUENCE
                                        //  value      CartesianAngleValue     
                                        //  confidence AngleConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000862\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.value.value) << 
                                                     " payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.value.value: " << ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.value.value;
                                    }
                                    
                                    float _tmp_1071 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.value.value;
                                    _tmp_1071 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1071);
                                    uint16_t* _tmp_1070 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1070 = static_cast<uint16_t>(_tmp_1071);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000863\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.confidence.value) << 
                                                     " payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.confidence.value);
                                    }
                                    
                                    float _tmp_1073 = ros->payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.confidence.value;
                                    _tmp_1073 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1073);
                                    _tmp_1073 -= 1;
                                    uint8_t* _tmp_1072 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1072 = static_cast<uint8_t>(_tmp_1073);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_vehicle_container[0].trailer_data_set[0].elements[p].hitch_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                        return -1;
                                    }
                                
                                if(*_ext_flag_540) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_532) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[o].originating_rsu_container.size() != 0)  // CHOICE 1  fieldType(WrappedCpmContainer) 
            {
                *_choice_21 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000864\033[0m| Choice selection: 1";
            
                    // OriginatingRsuContainer  SEQUENCE
                        //  mapReference MapReference   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_548 = (uint8_t*) buffer++;  // Write extension flag for OriginatingRsuContainer
                    *_ext_flag_548 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_1076 = (char*) buffer++;
                    *_tmp_1076 = (ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000865\033[0m| Optional field map_reference = " << *_tmp_1076;
                    
                    if(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference.size() != 0) {
                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                        // Choice
                           // #0  roadsegment   RoadSegmentReferenceId
                           // #1  intersection   IntersectionReferenceId
                        uint8_t* _choice_22 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                            *_choice_22 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000866\033[0m| Choice selection: 0";
                        
                                // RoadSegmentReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_1077 = (char*) buffer++;
                                *_tmp_1077 = (ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000867\033[0m| Optional field region = " << *_tmp_1077;
                                
                                if(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000868\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_1078 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1078 = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000869\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value) << 
                                                 " payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                }
                                
                                uint16_t* _tmp_1079 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1079 = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                        {
                            *_choice_22 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000870\033[0m| Choice selection: 1";
                        
                                // IntersectionReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_1080 = (char*) buffer++;
                                *_tmp_1080 = (ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000871\033[0m| Optional field region = " << *_tmp_1080;
                                
                                if(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000872\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_1081 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1081 = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000873\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].id.value) << 
                                                 " payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                }
                                
                                uint16_t* _tmp_1082 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1082 = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_22) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[o].originating_rsu_container[0].map_reference[0]'; message dropped.";
                            return -1;
                        }
                    }
                    
                    if(*_ext_flag_548) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[o].sensor_information_container.size() != 0)  // CHOICE 2  fieldType(WrappedCpmContainer) 
            {
                *_choice_21 = 2;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000874\033[0m| Choice selection: 2";
            
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                uint8_t* _ext_flag_554 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].sensor_information_container[0].
                *_ext_flag_554 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements.size();
                if(__aux64__ > 128) __aux64__ = 128;
                uint16_t* _tmp_1084 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_1084 = __aux64__ - 1;
                
                int __ifq = __aux64__;
                for(int q = 0; q < __ifq; q++) { 
                    
                        // SensorInformation  SEQUENCE
                            //  sensorId                   Identifier1B                           
                            //  sensorType                 SensorType                             
                            //  perceptionRegionShape      Shape                                OPTIONAL  
                            //  perceptionRegionConfidence ConfidenceLevel                      OPTIONAL  
                            //  shadowingApplies           SensorInformation_shadowingApplies     
                            //  ...
                        uint8_t* _ext_flag_555 = (uint8_t*) buffer++;  // Write extension flag for SensorInformation
                        *_ext_flag_555 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_1085 = (char*) buffer++;
                        *_tmp_1085 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000876\033[0m| Optional field perception_region_shape = " << *_tmp_1085;
                        char* _tmp_1086 = (char*) buffer++;
                        *_tmp_1086 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000877\033[0m| Optional field perception_region_confidence = " << *_tmp_1086;
                        
                        // Field:  type(Identifier1B) name(sensor_id) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000878\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_id.value) << 
                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_id.value);
                        }
                        
                        uint8_t* _tmp_1087 = (uint8_t*) buffer++;
                        *_tmp_1087 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_id.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SensorType) name(sensor_type) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(31) span(32) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000879\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_type.value) << 
                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_type.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_type.value);
                        }
                        
                        uint8_t* _tmp_1088 = (uint8_t*) buffer++;
                        *_tmp_1088 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_type.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_type.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 31) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].sensor_type.value' (" << __aux64__ << ") exceeds max allowable (31); message dropped.";
                            return -1;
                        }
                        
                        if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape.size() != 0) {
                            // Field:  type(Shape) name(perception_region_shape) extGroup(0)
                            // Choice
                               // #0  rectangular   RectangularShape
                               // #1  circular   CircularShape
                               // #2  polygonal   PolygonalShape
                               // #3  elliptical   EllipticalShape
                               // #4  radial   RadialShape
                               // #5  radialShapes   RadialShapes
                            uint8_t* _ext_flag_558 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_558 = 0; 
                            
                            uint8_t* _choice_23 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                *_choice_23 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000880\033[0m| Choice selection: 0";
                            
                                    // RectangularShape  SEQUENCE
                                        //  centerPoint CartesianPosition3d   OPTIONAL  
                                        //  semiLength  StandardLength12b       
                                        //  semiBreadth StandardLength12b       
                                        //  orientation Wgs84AngleValue       OPTIONAL  
                                        //  height      StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_1089 = (char*) buffer++;
                                    *_tmp_1089 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000881\033[0m| Optional field center_point = " << *_tmp_1089;
                                    char* _tmp_1090 = (char*) buffer++;
                                    *_tmp_1090 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000882\033[0m| Optional field orientation = " << *_tmp_1090;
                                    char* _tmp_1091 = (char*) buffer++;
                                    *_tmp_1091 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000883\033[0m| Optional field height = " << *_tmp_1091;
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_1092 = (char*) buffer++;
                                            *_tmp_1092 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000884\033[0m| Optional field z_coordinate = " << *_tmp_1092;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000885\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_1094 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            _tmp_1094 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1094);
                                            _tmp_1094 -= -32768;
                                            uint16_t* _tmp_1093 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1093 = static_cast<uint16_t>(_tmp_1094);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000886\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_1096 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            _tmp_1096 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1096);
                                            _tmp_1096 -= -32768;
                                            uint16_t* _tmp_1095 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1095 = static_cast<uint16_t>(_tmp_1096);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000887\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_1098 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                _tmp_1098 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1098);
                                                _tmp_1098 -= -32768;
                                                uint16_t* _tmp_1097 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1097 = static_cast<uint16_t>(_tmp_1098);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000888\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_length.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_length.value;
                                    }
                                    
                                    float _tmp_1100 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_length.value;
                                    _tmp_1100 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1100);
                                    uint16_t* _tmp_1099 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1099 = static_cast<uint16_t>(_tmp_1100);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000889\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_breadth.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    }
                                    
                                    float _tmp_1102 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    _tmp_1102 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1102);
                                    uint16_t* _tmp_1101 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1101 = static_cast<uint16_t>(_tmp_1102);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000890\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_1104 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        _tmp_1104 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1104);
                                        uint16_t* _tmp_1103 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1103 = static_cast<uint16_t>(_tmp_1104);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000891\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height[0].value;
                                        }
                                        
                                        float _tmp_1106 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height[0].value;
                                        _tmp_1106 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1106);
                                        uint16_t* _tmp_1105 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1105 = static_cast<uint16_t>(_tmp_1106);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                            {
                                *_choice_23 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000892\033[0m| Choice selection: 1";
                            
                                    // CircularShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  radius              StandardLength12b       
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_1107 = (char*) buffer++;
                                    *_tmp_1107 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000893\033[0m| Optional field shape_reference_point = " << *_tmp_1107;
                                    char* _tmp_1108 = (char*) buffer++;
                                    *_tmp_1108 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000894\033[0m| Optional field height = " << *_tmp_1108;
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_1109 = (char*) buffer++;
                                            *_tmp_1109 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000895\033[0m| Optional field z_coordinate = " << *_tmp_1109;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000896\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_1111 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_1111 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1111);
                                            _tmp_1111 -= -32768;
                                            uint16_t* _tmp_1110 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1110 = static_cast<uint16_t>(_tmp_1111);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000897\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_1113 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_1113 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1113);
                                            _tmp_1113 -= -32768;
                                            uint16_t* _tmp_1112 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1112 = static_cast<uint16_t>(_tmp_1113);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000898\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_1115 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_1115 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1115);
                                                _tmp_1115 -= -32768;
                                                uint16_t* _tmp_1114 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1114 = static_cast<uint16_t>(_tmp_1115);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000899\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].radius.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].radius.value;
                                    }
                                    
                                    float _tmp_1117 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].radius.value;
                                    _tmp_1117 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1117);
                                    uint16_t* _tmp_1116 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1116 = static_cast<uint16_t>(_tmp_1117);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000900\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height[0].value;
                                        }
                                        
                                        float _tmp_1119 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height[0].value;
                                        _tmp_1119 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1119);
                                        uint16_t* _tmp_1118 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1118 = static_cast<uint16_t>(_tmp_1119);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                            {
                                *_choice_23 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000901\033[0m| Choice selection: 2";
                            
                                    // PolygonalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                        //  polygon             SequenceOfCartesianPosition3d     
                                        //  height              StandardLength12b               OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_1120 = (char*) buffer++;
                                    *_tmp_1120 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000902\033[0m| Optional field shape_reference_point = " << *_tmp_1120;
                                    char* _tmp_1121 = (char*) buffer++;
                                    *_tmp_1121 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000903\033[0m| Optional field height = " << *_tmp_1121;
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_1122 = (char*) buffer++;
                                            *_tmp_1122 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000904\033[0m| Optional field z_coordinate = " << *_tmp_1122;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000905\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_1124 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_1124 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1124);
                                            _tmp_1124 -= -32768;
                                            uint16_t* _tmp_1123 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1123 = static_cast<uint16_t>(_tmp_1124);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000906\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_1126 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_1126 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1126);
                                            _tmp_1126 -= -32768;
                                            uint16_t* _tmp_1125 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1125 = static_cast<uint16_t>(_tmp_1126);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000907\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_1128 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_1128 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1128);
                                                _tmp_1128 -= -32768;
                                                uint16_t* _tmp_1127 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1127 = static_cast<uint16_t>(_tmp_1128);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_574 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.
                                    *_ext_flag_574 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_1129 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_1129 = __aux64__ - 1;
                                    
                                    int __ifr = __aux64__;
                                    for(int r = 0; r < __ifr; r++) { 
                                        
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_1130 = (char*) buffer++;
                                            *_tmp_1130 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000909\033[0m| Optional field z_coordinate = " << *_tmp_1130;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000910\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value;
                                            }
                                            
                                            float _tmp_1132 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value;
                                            _tmp_1132 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1132);
                                            _tmp_1132 -= -32768;
                                            uint16_t* _tmp_1131 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1131 = static_cast<uint16_t>(_tmp_1132);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000911\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value;
                                            }
                                            
                                            float _tmp_1134 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value;
                                            _tmp_1134 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1134);
                                            _tmp_1134 -= -32768;
                                            uint16_t* _tmp_1133 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1133 = static_cast<uint16_t>(_tmp_1134);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000912\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_1136 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value;
                                                _tmp_1136 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1136);
                                                _tmp_1136 -= -32768;
                                                uint16_t* _tmp_1135 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1135 = static_cast<uint16_t>(_tmp_1136);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000913\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height[0].value;
                                        }
                                        
                                        float _tmp_1138 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height[0].value;
                                        _tmp_1138 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1138);
                                        uint16_t* _tmp_1137 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1137 = static_cast<uint16_t>(_tmp_1138);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                            {
                                *_choice_23 = 3;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000914\033[0m| Choice selection: 3";
                            
                                    // EllipticalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  semiMajorAxisLength StandardLength12b       
                                        //  semiMinorAxisLength StandardLength12b       
                                        //  orientation         Wgs84AngleValue       OPTIONAL  
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_1139 = (char*) buffer++;
                                    *_tmp_1139 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000915\033[0m| Optional field shape_reference_point = " << *_tmp_1139;
                                    char* _tmp_1140 = (char*) buffer++;
                                    *_tmp_1140 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000916\033[0m| Optional field orientation = " << *_tmp_1140;
                                    char* _tmp_1141 = (char*) buffer++;
                                    *_tmp_1141 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000917\033[0m| Optional field height = " << *_tmp_1141;
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_1142 = (char*) buffer++;
                                            *_tmp_1142 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000918\033[0m| Optional field z_coordinate = " << *_tmp_1142;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000919\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_1144 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_1144 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1144);
                                            _tmp_1144 -= -32768;
                                            uint16_t* _tmp_1143 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1143 = static_cast<uint16_t>(_tmp_1144);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000920\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_1146 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_1146 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1146);
                                            _tmp_1146 -= -32768;
                                            uint16_t* _tmp_1145 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1145 = static_cast<uint16_t>(_tmp_1146);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000921\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_1148 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_1148 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1148);
                                                _tmp_1148 -= -32768;
                                                uint16_t* _tmp_1147 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1147 = static_cast<uint16_t>(_tmp_1148);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000922\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    }
                                    
                                    float _tmp_1150 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    _tmp_1150 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1150);
                                    uint16_t* _tmp_1149 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1149 = static_cast<uint16_t>(_tmp_1150);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000923\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    }
                                    
                                    float _tmp_1152 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    _tmp_1152 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1152);
                                    uint16_t* _tmp_1151 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1151 = static_cast<uint16_t>(_tmp_1152);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000924\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_1154 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        _tmp_1154 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1154);
                                        uint16_t* _tmp_1153 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1153 = static_cast<uint16_t>(_tmp_1154);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000925\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height[0].value;
                                        }
                                        
                                        float _tmp_1156 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height[0].value;
                                        _tmp_1156 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1156);
                                        uint16_t* _tmp_1155 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1155 = static_cast<uint16_t>(_tmp_1156);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                            {
                                *_choice_23 = 4;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000926\033[0m| Choice selection: 4";
                            
                                    // RadialShape  SEQUENCE
                                        //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                        //  range                                 StandardLength12b       
                                        //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                        //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                        //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                        //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_1157 = (char*) buffer++;
                                    *_tmp_1157 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000927\033[0m| Optional field shape_reference_point = " << *_tmp_1157;
                                    char* _tmp_1158 = (char*) buffer++;
                                    *_tmp_1158 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000928\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_1158;
                                    char* _tmp_1159 = (char*) buffer++;
                                    *_tmp_1159 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000929\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_1159;
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_1160 = (char*) buffer++;
                                            *_tmp_1160 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000930\033[0m| Optional field z_coordinate = " << *_tmp_1160;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000931\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_1162 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_1162 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1162);
                                            _tmp_1162 -= -32768;
                                            uint16_t* _tmp_1161 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1161 = static_cast<uint16_t>(_tmp_1162);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000932\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_1164 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_1164 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1164);
                                            _tmp_1164 -= -32768;
                                            uint16_t* _tmp_1163 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1163 = static_cast<uint16_t>(_tmp_1164);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000933\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_1166 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_1166 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1166);
                                                _tmp_1166 -= -32768;
                                                uint16_t* _tmp_1165 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1165 = static_cast<uint16_t>(_tmp_1166);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000934\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].range.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].range.value;
                                    }
                                    
                                    float _tmp_1168 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].range.value;
                                    _tmp_1168 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1168);
                                    uint16_t* _tmp_1167 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1167 = static_cast<uint16_t>(_tmp_1168);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000935\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    }
                                    
                                    float _tmp_1170 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    _tmp_1170 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1170);
                                    uint16_t* _tmp_1169 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1169 = static_cast<uint16_t>(_tmp_1170);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000936\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    }
                                    
                                    float _tmp_1172 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    _tmp_1172 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1172);
                                    uint16_t* _tmp_1171 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1171 = static_cast<uint16_t>(_tmp_1172);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000937\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        }
                                        
                                        float _tmp_1174 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        _tmp_1174 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1174);
                                        uint16_t* _tmp_1173 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1173 = static_cast<uint16_t>(_tmp_1174);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000938\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        }
                                        
                                        float _tmp_1176 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        _tmp_1176 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1176);
                                        uint16_t* _tmp_1175 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1175 = static_cast<uint16_t>(_tmp_1176);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                            {
                                *_choice_23 = 5;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000939\033[0m| Choice selection: 5";
                            
                                    // RadialShapes  SEQUENCE
                                        //  refPointId       Identifier1B                 
                                        //  xCoordinate      CartesianCoordinateSmall     
                                        //  yCoordinate      CartesianCoordinateSmall     
                                        //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                        //  radialShapesList RadialShapesList             
                                    // Optional fields bytemap
                                    char* _tmp_1177 = (char*) buffer++;
                                    *_tmp_1177 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000940\033[0m| Optional field z_coordinate = " << *_tmp_1177;
                                    
                                    // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000941\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].ref_point_id.value);
                                    }
                                    
                                    uint8_t* _tmp_1178 = (uint8_t*) buffer++;
                                    *_tmp_1178 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].ref_point_id.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].ref_point_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000942\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    }
                                    
                                    float _tmp_1180 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    _tmp_1180 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1180);
                                    _tmp_1180 -= -3094;
                                    uint16_t* _tmp_1179 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1179 = static_cast<uint16_t>(_tmp_1180);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000943\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                     " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    }
                                    
                                    float _tmp_1182 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    _tmp_1182 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1182);
                                    _tmp_1182 -= -3094;
                                    uint16_t* _tmp_1181 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1181 = static_cast<uint16_t>(_tmp_1182);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                        // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000944\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                         " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        }
                                        
                                        float _tmp_1184 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        _tmp_1184 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1184);
                                        _tmp_1184 -= -3094;
                                        uint16_t* _tmp_1183 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1183 = static_cast<uint16_t>(_tmp_1184);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_598 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.
                                    *_ext_flag_598 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_1185 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_1185 = __aux64__ - 1;
                                    
                                    int __ifs = __aux64__;
                                    for(int s = 0; s < __ifs; s++) { 
                                        
                                            // RadialShapeDetails  SEQUENCE
                                                //  range                       StandardLength12b       
                                                //  horizontalOpeningAngleStart CartesianAngleValue     
                                                //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_1186 = (char*) buffer++;
                                            *_tmp_1186 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000946\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_1186;
                                            char* _tmp_1187 = (char*) buffer++;
                                            *_tmp_1187 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000947\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_1187;
                                            
                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000948\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value;
                                            }
                                            
                                            float _tmp_1189 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value;
                                            _tmp_1189 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1189);
                                            uint16_t* _tmp_1188 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1188 = static_cast<uint16_t>(_tmp_1189);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000949\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value;
                                            }
                                            
                                            float _tmp_1191 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value;
                                            _tmp_1191 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1191);
                                            uint16_t* _tmp_1190 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1190 = static_cast<uint16_t>(_tmp_1191);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000950\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value) << 
                                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value;
                                            }
                                            
                                            float _tmp_1193 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value;
                                            _tmp_1193 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1193);
                                            uint16_t* _tmp_1192 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1192 = static_cast<uint16_t>(_tmp_1193);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000951\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value;
                                                }
                                                
                                                float _tmp_1195 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value;
                                                _tmp_1195 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1195);
                                                uint16_t* _tmp_1194 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1194 = static_cast<uint16_t>(_tmp_1195);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000952\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value) << 
                                                                 " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value;
                                                }
                                                
                                                float _tmp_1197 = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value;
                                                _tmp_1197 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1197);
                                                uint16_t* _tmp_1196 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1196 = static_cast<uint16_t>(_tmp_1197);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_23) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_shape[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence.size() != 0) {
                            // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(101) span(101) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000953\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence[0].value) << 
                                             " payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence[0].value);
                            }
                            
                            uint8_t* _tmp_1198 = (uint8_t*) buffer++;
                            __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence[0].value - 1;
                            *_tmp_1198 = __aux64__;
                            __aux64__ = ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].perception_region_confidence[0].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(SensorInformation_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_1199 = (uint8_t*)buffer++;
                        *_tmp_1199 = (ros->payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000954\033[0m| payload.cpm_containers.elements[o].sensor_information_container[0].elements[q].shadowing_applies: " << (*_tmp_1199);
                        
                        if(*_ext_flag_555) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[o].perception_region_container.size() != 0)  // CHOICE 3  fieldType(WrappedCpmContainer) 
            {
                *_choice_21 = 3;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000955\033[0m| Choice selection: 3";
            
                // SequenceOf
                // Data Type UInt16
                // SEQUENCE_OF  min(1) max(256) span(256) ext(true)
                uint8_t* _ext_flag_605 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perception_region_container[0].
                *_ext_flag_605 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements.size();
                if(__aux64__ > 256) __aux64__ = 256;
                uint16_t* _tmp_1201 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_1201 = __aux64__ - 1;
                
                int __ift = __aux64__;
                for(int t = 0; t < __ift; t++) { 
                    
                        // PerceptionRegion  SEQUENCE
                            //  measurementDeltaTime       DeltaTimeMilliSecondSigned            
                            //  perceptionRegionConfidence ConfidenceLevel                       
                            //  perceptionRegionShape      Shape                                 
                            //  shadowingApplies           PerceptionRegion_shadowingApplies     
                            //  sensorIdList               SequenceOfIdentifier1B              OPTIONAL  
                            //  numberOfPerceivedObjects   CardinalNumber1B                    OPTIONAL  
                            //  perceivedObjectIds         PerceivedObjectIds                  OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_606 = (uint8_t*) buffer++;  // Write extension flag for PerceptionRegion
                        *_ext_flag_606 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_1202 = (char*) buffer++;
                        *_tmp_1202 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000957\033[0m| Optional field sensor_id_list = " << *_tmp_1202;
                        char* _tmp_1203 = (char*) buffer++;
                        *_tmp_1203 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000958\033[0m| Optional field number_of_perceived_objects = " << *_tmp_1203;
                        char* _tmp_1204 = (char*) buffer++;
                        *_tmp_1204 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000959\033[0m| Optional field perceived_object_ids = " << *_tmp_1204;
                        
                        // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000960\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].measurement_delta_time.value) << 
                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].measurement_delta_time.value;
                        }
                        
                        float _tmp_1206 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].measurement_delta_time.value;
                        _tmp_1206 *= 1000.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_1206);
                        _tmp_1206 -= -2048;
                        uint16_t* _tmp_1205 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_1205 = static_cast<uint16_t>(_tmp_1206);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000961\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_confidence.value) << 
                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_confidence.value);
                        }
                        
                        uint8_t* _tmp_1207 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_confidence.value - 1;
                        *_tmp_1207 = __aux64__;
                        __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_confidence.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Shape) name(perception_region_shape) extGroup(0)
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_609 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_609 = 0; 
                        
                        uint8_t* _choice_24 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_24 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000962\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  centerPoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength  StandardLength12b       
                                    //  semiBreadth StandardLength12b       
                                    //  orientation Wgs84AngleValue       OPTIONAL  
                                    //  height      StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_1208 = (char*) buffer++;
                                *_tmp_1208 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000963\033[0m| Optional field center_point = " << *_tmp_1208;
                                char* _tmp_1209 = (char*) buffer++;
                                *_tmp_1209 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000964\033[0m| Optional field orientation = " << *_tmp_1209;
                                char* _tmp_1210 = (char*) buffer++;
                                *_tmp_1210 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000965\033[0m| Optional field height = " << *_tmp_1210;
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1211 = (char*) buffer++;
                                        *_tmp_1211 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000966\033[0m| Optional field z_coordinate = " << *_tmp_1211;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000967\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_1213 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        _tmp_1213 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1213);
                                        _tmp_1213 -= -32768;
                                        uint16_t* _tmp_1212 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1212 = static_cast<uint16_t>(_tmp_1213);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000968\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_1215 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        _tmp_1215 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1215);
                                        _tmp_1215 -= -32768;
                                        uint16_t* _tmp_1214 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1214 = static_cast<uint16_t>(_tmp_1215);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000969\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_1217 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            _tmp_1217 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1217);
                                            _tmp_1217 -= -32768;
                                            uint16_t* _tmp_1216 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1216 = static_cast<uint16_t>(_tmp_1217);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000970\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_length.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_1219 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_length.value;
                                _tmp_1219 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1219);
                                uint16_t* _tmp_1218 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1218 = static_cast<uint16_t>(_tmp_1219);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000971\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_breadth.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_1221 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_breadth.value;
                                _tmp_1221 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1221);
                                uint16_t* _tmp_1220 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1220 = static_cast<uint16_t>(_tmp_1221);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000972\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_1223 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation[0].value;
                                    _tmp_1223 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1223);
                                    uint16_t* _tmp_1222 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1222 = static_cast<uint16_t>(_tmp_1223);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000973\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_1225 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height[0].value;
                                    _tmp_1225 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1225);
                                    uint16_t* _tmp_1224 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1224 = static_cast<uint16_t>(_tmp_1225);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_24 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000974\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_1226 = (char*) buffer++;
                                *_tmp_1226 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000975\033[0m| Optional field shape_reference_point = " << *_tmp_1226;
                                char* _tmp_1227 = (char*) buffer++;
                                *_tmp_1227 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000976\033[0m| Optional field height = " << *_tmp_1227;
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1228 = (char*) buffer++;
                                        *_tmp_1228 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000977\033[0m| Optional field z_coordinate = " << *_tmp_1228;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000978\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_1230 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_1230 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1230);
                                        _tmp_1230 -= -32768;
                                        uint16_t* _tmp_1229 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1229 = static_cast<uint16_t>(_tmp_1230);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000979\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_1232 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_1232 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1232);
                                        _tmp_1232 -= -32768;
                                        uint16_t* _tmp_1231 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1231 = static_cast<uint16_t>(_tmp_1232);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000980\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_1234 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_1234 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1234);
                                            _tmp_1234 -= -32768;
                                            uint16_t* _tmp_1233 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1233 = static_cast<uint16_t>(_tmp_1234);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000981\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].radius.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].radius.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].radius.value;
                                }
                                
                                float _tmp_1236 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].radius.value;
                                _tmp_1236 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1236);
                                uint16_t* _tmp_1235 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1235 = static_cast<uint16_t>(_tmp_1236);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000982\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_1238 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height[0].value;
                                    _tmp_1238 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1238);
                                    uint16_t* _tmp_1237 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1237 = static_cast<uint16_t>(_tmp_1238);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_24 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000983\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_1239 = (char*) buffer++;
                                *_tmp_1239 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000984\033[0m| Optional field shape_reference_point = " << *_tmp_1239;
                                char* _tmp_1240 = (char*) buffer++;
                                *_tmp_1240 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000985\033[0m| Optional field height = " << *_tmp_1240;
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1241 = (char*) buffer++;
                                        *_tmp_1241 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000986\033[0m| Optional field z_coordinate = " << *_tmp_1241;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000987\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_1243 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_1243 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1243);
                                        _tmp_1243 -= -32768;
                                        uint16_t* _tmp_1242 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1242 = static_cast<uint16_t>(_tmp_1243);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000988\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_1245 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_1245 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1245);
                                        _tmp_1245 -= -32768;
                                        uint16_t* _tmp_1244 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1244 = static_cast<uint16_t>(_tmp_1245);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000989\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_1247 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_1247 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1247);
                                            _tmp_1247 -= -32768;
                                            uint16_t* _tmp_1246 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1246 = static_cast<uint16_t>(_tmp_1247);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_625 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.
                                *_ext_flag_625 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_1248 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_1248 = __aux64__ - 1;
                                
                                int __ifu = __aux64__;
                                for(int u = 0; u < __ifu; u++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1249 = (char*) buffer++;
                                        *_tmp_1249 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000991\033[0m| Optional field z_coordinate = " << *_tmp_1249;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000992\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].x_coordinate.value;
                                        }
                                        
                                        float _tmp_1251 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].x_coordinate.value;
                                        _tmp_1251 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1251);
                                        _tmp_1251 -= -32768;
                                        uint16_t* _tmp_1250 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1250 = static_cast<uint16_t>(_tmp_1251);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000993\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].y_coordinate.value;
                                        }
                                        
                                        float _tmp_1253 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].y_coordinate.value;
                                        _tmp_1253 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1253);
                                        _tmp_1253 -= -32768;
                                        uint16_t* _tmp_1252 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1252 = static_cast<uint16_t>(_tmp_1253);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000994\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_1255 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate[0].value;
                                            _tmp_1255 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1255);
                                            _tmp_1255 -= -32768;
                                            uint16_t* _tmp_1254 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1254 = static_cast<uint16_t>(_tmp_1255);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].polygon.elements[u].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000995\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_1257 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height[0].value;
                                    _tmp_1257 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1257);
                                    uint16_t* _tmp_1256 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1256 = static_cast<uint16_t>(_tmp_1257);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_24 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000996\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         Wgs84AngleValue       OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_1258 = (char*) buffer++;
                                *_tmp_1258 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000997\033[0m| Optional field shape_reference_point = " << *_tmp_1258;
                                char* _tmp_1259 = (char*) buffer++;
                                *_tmp_1259 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000998\033[0m| Optional field orientation = " << *_tmp_1259;
                                char* _tmp_1260 = (char*) buffer++;
                                *_tmp_1260 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000999\033[0m| Optional field height = " << *_tmp_1260;
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1261 = (char*) buffer++;
                                        *_tmp_1261 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001000\033[0m| Optional field z_coordinate = " << *_tmp_1261;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001001\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_1263 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_1263 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1263);
                                        _tmp_1263 -= -32768;
                                        uint16_t* _tmp_1262 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1262 = static_cast<uint16_t>(_tmp_1263);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001002\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_1265 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_1265 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1265);
                                        _tmp_1265 -= -32768;
                                        uint16_t* _tmp_1264 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1264 = static_cast<uint16_t>(_tmp_1265);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001003\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_1267 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_1267 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1267);
                                            _tmp_1267 -= -32768;
                                            uint16_t* _tmp_1266 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1266 = static_cast<uint16_t>(_tmp_1267);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001004\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_major_axis_length.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_1269 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                _tmp_1269 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1269);
                                uint16_t* _tmp_1268 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1268 = static_cast<uint16_t>(_tmp_1269);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001005\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_minor_axis_length.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_1271 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                _tmp_1271 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1271);
                                uint16_t* _tmp_1270 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1270 = static_cast<uint16_t>(_tmp_1271);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001006\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_1273 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation[0].value;
                                    _tmp_1273 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1273);
                                    uint16_t* _tmp_1272 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1272 = static_cast<uint16_t>(_tmp_1273);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001007\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_1275 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height[0].value;
                                    _tmp_1275 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1275);
                                    uint16_t* _tmp_1274 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1274 = static_cast<uint16_t>(_tmp_1275);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_24 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001008\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                    //  range                                 StandardLength12b       
                                    //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                    //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                    //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_1276 = (char*) buffer++;
                                *_tmp_1276 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m001009\033[0m| Optional field shape_reference_point = " << *_tmp_1276;
                                char* _tmp_1277 = (char*) buffer++;
                                *_tmp_1277 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m001010\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_1277;
                                char* _tmp_1278 = (char*) buffer++;
                                *_tmp_1278 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m001011\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_1278;
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1279 = (char*) buffer++;
                                        *_tmp_1279 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001012\033[0m| Optional field z_coordinate = " << *_tmp_1279;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001013\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_1281 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_1281 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1281);
                                        _tmp_1281 -= -32768;
                                        uint16_t* _tmp_1280 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1280 = static_cast<uint16_t>(_tmp_1281);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001014\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_1283 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_1283 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1283);
                                        _tmp_1283 -= -32768;
                                        uint16_t* _tmp_1282 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1282 = static_cast<uint16_t>(_tmp_1283);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001015\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_1285 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_1285 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1285);
                                            _tmp_1285 -= -32768;
                                            uint16_t* _tmp_1284 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1284 = static_cast<uint16_t>(_tmp_1285);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001016\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].range.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].range.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].range.value;
                                }
                                
                                float _tmp_1287 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].range.value;
                                _tmp_1287 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1287);
                                uint16_t* _tmp_1286 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1286 = static_cast<uint16_t>(_tmp_1287);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001017\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_1289 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                _tmp_1289 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1289);
                                uint16_t* _tmp_1288 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1288 = static_cast<uint16_t>(_tmp_1289);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001018\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_1291 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                _tmp_1291 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1291);
                                uint16_t* _tmp_1290 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1290 = static_cast<uint16_t>(_tmp_1291);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001019\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_1293 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_1293 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1293);
                                    uint16_t* _tmp_1292 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1292 = static_cast<uint16_t>(_tmp_1293);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001020\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_1295 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_1295 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1295);
                                    uint16_t* _tmp_1294 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1294 = static_cast<uint16_t>(_tmp_1295);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_24 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001021\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_1296 = (char*) buffer++;
                                *_tmp_1296 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m001022\033[0m| Optional field z_coordinate = " << *_tmp_1296;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001023\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_1297 = (uint8_t*) buffer++;
                                *_tmp_1297 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001024\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].x_coordinate.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_1299 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                _tmp_1299 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1299);
                                _tmp_1299 -= -3094;
                                uint16_t* _tmp_1298 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1298 = static_cast<uint16_t>(_tmp_1299);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001025\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].y_coordinate.value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_1301 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                _tmp_1301 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1301);
                                _tmp_1301 -= -3094;
                                uint16_t* _tmp_1300 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1300 = static_cast<uint16_t>(_tmp_1301);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001026\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate[0].value) << 
                                                     " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_1303 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    _tmp_1303 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1303);
                                    _tmp_1303 -= -3094;
                                    uint16_t* _tmp_1302 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1302 = static_cast<uint16_t>(_tmp_1303);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_649 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.
                                *_ext_flag_649 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_1304 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_1304 = __aux64__ - 1;
                                
                                int __ifv = __aux64__;
                                for(int v = 0; v < __ifv; v++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1305 = (char*) buffer++;
                                        *_tmp_1305 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001028\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_1305;
                                        char* _tmp_1306 = (char*) buffer++;
                                        *_tmp_1306 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001029\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_1306;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001030\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].range.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].range.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].range.value;
                                        }
                                        
                                        float _tmp_1308 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].range.value;
                                        _tmp_1308 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1308);
                                        uint16_t* _tmp_1307 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1307 = static_cast<uint16_t>(_tmp_1308);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001031\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_start.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_1310 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_start.value;
                                        _tmp_1310 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1310);
                                        uint16_t* _tmp_1309 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1309 = static_cast<uint16_t>(_tmp_1310);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001032\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_end.value) << 
                                                         " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_1312 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_end.value;
                                        _tmp_1312 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1312);
                                        uint16_t* _tmp_1311 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1311 = static_cast<uint16_t>(_tmp_1312);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001033\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_1314 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start[0].value;
                                            _tmp_1314 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1314);
                                            uint16_t* _tmp_1313 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1313 = static_cast<uint16_t>(_tmp_1314);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001034\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end[0].value) << 
                                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_1316 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end[0].value;
                                            _tmp_1316 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1316);
                                            uint16_t* _tmp_1315 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1315 = static_cast<uint16_t>(_tmp_1316);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[v].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_24) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perception_region_shape'; message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(PerceptionRegion_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_1317 = (uint8_t*)buffer++;
                        *_tmp_1317 = (ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m001035\033[0m| payload.cpm_containers.elements[o].perception_region_container[0].elements[t].shadowing_applies: " << (*_tmp_1317);
                        
                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list.size() != 0) {
                            // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                            uint8_t* _ext_flag_655 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].
                            *_ext_flag_655 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements.size();
                            if(__aux64__ > 128) __aux64__ = 128;
                            uint16_t* _tmp_1318 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_1318 = __aux64__ - 1;
                            
                            int __ifw = __aux64__;
                            for(int w = 0; w < __ifw; w++) { 
                                
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001037\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements[w].value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements[w].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements[w].value);
                                }
                                
                                uint8_t* _tmp_1319 = (uint8_t*) buffer++;
                                *_tmp_1319 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements[w].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements[w].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements[w].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].sensor_id_list[0].elements[w].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects.size() != 0) {
                            // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m001038\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects[0].value) << 
                                             " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects[0].value);
                            }
                            
                            uint8_t* _tmp_1320 = (uint8_t*) buffer++;
                            *_tmp_1320 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects[0].value; 
                            __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].number_of_perceived_objects[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids.size() != 0) {
                            // Field:  type(PerceivedObjectIds) name(perceived_object_ids) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                            uint8_t* _ext_flag_658 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].
                            *_ext_flag_658 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements.size();
                            if(__aux64__ > 255) __aux64__ = 255;
                            uint16_t* _tmp_1321 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_1321 = __aux64__;
                            
                            int __ifx = __aux64__;
                            for(int x = 0; x < __ifx; x++) { 
                                
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001040\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements[x].value) << 
                                                 " payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements[x].value: " << ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements[x].value;
                                }
                                
                                uint16_t* _tmp_1322 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1322 = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements[x].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements[x].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements[x].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perception_region_container[0].elements[t].perceived_object_ids[0].elements[x].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(*_ext_flag_606) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[o].perceived_object_container.size() != 0)  // CHOICE 4  fieldType(WrappedCpmContainer) 
            {
                *_choice_21 = 4;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m001041\033[0m| Choice selection: 4";
            
                    // PerceivedObjectContainer  SEQUENCE
                        //  numberOfPerceivedObjects CardinalNumber1B     
                        //  perceivedObjects         PerceivedObjects     
                        //  ...
                    uint8_t* _ext_flag_660 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObjectContainer
                    *_ext_flag_660 = 0;  
                    
                    // Optional fields bytemap
                    
                    // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m001042\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].number_of_perceived_objects.value) << 
                                     " payload.cpm_containers.elements[o].perceived_object_container[0].number_of_perceived_objects.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].number_of_perceived_objects.value);
                    }
                    
                    uint8_t* _tmp_1324 = (uint8_t*) buffer++;
                    *_tmp_1324 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].number_of_perceived_objects.value; 
                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].number_of_perceived_objects.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(PerceivedObjects) name(perceived_objects) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                    uint8_t* _ext_flag_662 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.
                    *_ext_flag_662 = 0; 
                    
                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_1325 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_1325 = __aux64__;
                    
                    int __ify = __aux64__;
                    for(int y = 0; y < __ify; y++) { 
                        
                            // PerceivedObject  SEQUENCE
                                //  objectId                           Identifier2B                                           OPTIONAL  
                                //  measurementDeltaTime               DeltaTimeMilliSecondSigned                               
                                //  position                           CartesianPosition3dWithConfidence                        
                                //  velocity                           Velocity3dWithConfidence                               OPTIONAL  
                                //  acceleration                       Acceleration3dWithConfidence                           OPTIONAL  
                                //  angles                             EulerAnglesWithConfidence                              OPTIONAL  
                                //  zAngularVelocity                   CartesianAngularVelocityComponent                      OPTIONAL  
                                //  lowerTriangularCorrelationMatrices LowerTriangularPositiveSemidefiniteMatrices            OPTIONAL  
                                //  objectDimensionZ                   ObjectDimension                                        OPTIONAL  
                                //  objectDimensionY                   ObjectDimension                                        OPTIONAL  
                                //  objectDimensionX                   ObjectDimension                                        OPTIONAL  
                                //  objectAge                          PerceivedObject_DeltaTimeMilliSecondSigned_objectAge   OPTIONAL  
                                //  objectPerceptionQuality            ObjectPerceptionQuality                                OPTIONAL  
                                //  sensorIdList                       SequenceOfIdentifier1B                                 OPTIONAL  
                                //  classification                     ObjectClassDescription                                 OPTIONAL  
                                //  mapPosition                        MapPosition                                            OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_663 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObject
                            *_ext_flag_663 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_1326 = (char*) buffer++;
                            *_tmp_1326 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001044\033[0m| Optional field object_id = " << *_tmp_1326;
                            char* _tmp_1327 = (char*) buffer++;
                            *_tmp_1327 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001045\033[0m| Optional field velocity = " << *_tmp_1327;
                            char* _tmp_1328 = (char*) buffer++;
                            *_tmp_1328 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001046\033[0m| Optional field acceleration = " << *_tmp_1328;
                            char* _tmp_1329 = (char*) buffer++;
                            *_tmp_1329 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001047\033[0m| Optional field angles = " << *_tmp_1329;
                            char* _tmp_1330 = (char*) buffer++;
                            *_tmp_1330 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001048\033[0m| Optional field z_angular_velocity = " << *_tmp_1330;
                            char* _tmp_1331 = (char*) buffer++;
                            *_tmp_1331 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001049\033[0m| Optional field lower_triangular_correlation_matrices = " << *_tmp_1331;
                            char* _tmp_1332 = (char*) buffer++;
                            *_tmp_1332 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001050\033[0m| Optional field object_dimension_z = " << *_tmp_1332;
                            char* _tmp_1333 = (char*) buffer++;
                            *_tmp_1333 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001051\033[0m| Optional field object_dimension_y = " << *_tmp_1333;
                            char* _tmp_1334 = (char*) buffer++;
                            *_tmp_1334 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001052\033[0m| Optional field object_dimension_x = " << *_tmp_1334;
                            char* _tmp_1335 = (char*) buffer++;
                            *_tmp_1335 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001053\033[0m| Optional field object_age = " << *_tmp_1335;
                            char* _tmp_1336 = (char*) buffer++;
                            *_tmp_1336 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001054\033[0m| Optional field object_perception_quality = " << *_tmp_1336;
                            char* _tmp_1337 = (char*) buffer++;
                            *_tmp_1337 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001055\033[0m| Optional field sensor_id_list = " << *_tmp_1337;
                            char* _tmp_1338 = (char*) buffer++;
                            *_tmp_1338 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001056\033[0m| Optional field classification = " << *_tmp_1338;
                            char* _tmp_1339 = (char*) buffer++;
                            *_tmp_1339 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m001057\033[0m| Optional field map_position = " << *_tmp_1339;
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id.size() != 0) {
                                // Field:  type(Identifier2B) name(object_id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001058\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id[0].value) << 
                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id[0].value;
                                }
                                
                                uint16_t* _tmp_1340 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1340 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_id[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m001059\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].measurement_delta_time.value) << 
                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].measurement_delta_time.value;
                            }
                            
                            float _tmp_1342 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].measurement_delta_time.value;
                            _tmp_1342 *= 1000.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_1342);
                            _tmp_1342 -= -2048;
                            uint16_t* _tmp_1341 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_1341 = static_cast<uint16_t>(_tmp_1342);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CartesianPosition3dWithConfidence) name(position) extGroup(0)
                                // CartesianPosition3dWithConfidence  SEQUENCE
                                    //  xCoordinate CartesianCoordinateWithConfidence     
                                    //  yCoordinate CartesianCoordinateWithConfidence     
                                    //  zCoordinate CartesianCoordinateWithConfidence   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_1343 = (char*) buffer++;
                                *_tmp_1343 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m001060\033[0m| Optional field z_coordinate = " << *_tmp_1343;
                                
                                // Field:  type(CartesianCoordinateWithConfidence) name(x_coordinate) extGroup(0)
                                    // CartesianCoordinateWithConfidence  SEQUENCE
                                        //  value      CartesianCoordinateLarge     
                                        //  confidence CoordinateConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001061\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.value.value;
                                    }
                                    
                                    float _tmp_1345 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.value.value;
                                    _tmp_1345 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1345);
                                    _tmp_1345 -= -131072;
                                    uint32_t* _tmp_1344 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_1344 = static_cast<uint32_t>(_tmp_1345);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001062\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_1347 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.confidence.value;
                                    _tmp_1347 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1347);
                                    _tmp_1347 -= 1;
                                    uint16_t* _tmp_1346 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1346 = static_cast<uint16_t>(_tmp_1347);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.x_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(CartesianCoordinateWithConfidence) name(y_coordinate) extGroup(0)
                                    // CartesianCoordinateWithConfidence  SEQUENCE
                                        //  value      CartesianCoordinateLarge     
                                        //  confidence CoordinateConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001063\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.value.value;
                                    }
                                    
                                    float _tmp_1349 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.value.value;
                                    _tmp_1349 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1349);
                                    _tmp_1349 -= -131072;
                                    uint32_t* _tmp_1348 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_1348 = static_cast<uint32_t>(_tmp_1349);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001064\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_1351 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.confidence.value;
                                    _tmp_1351 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1351);
                                    _tmp_1351 -= 1;
                                    uint16_t* _tmp_1350 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_1350 = static_cast<uint16_t>(_tmp_1351);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.y_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateWithConfidence) name(z_coordinate) extGroup(0)
                                        // CartesianCoordinateWithConfidence  SEQUENCE
                                            //  value      CartesianCoordinateLarge     
                                            //  confidence CoordinateConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001065\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].value.value) << 
                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].value.value;
                                        }
                                        
                                        float _tmp_1353 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].value.value;
                                        _tmp_1353 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1353);
                                        _tmp_1353 -= -131072;
                                        uint32_t* _tmp_1352 = (uint32_t*) buffer; buffer += 4;
                                        *_tmp_1352 = static_cast<uint32_t>(_tmp_1353);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001066\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].confidence.value) << 
                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].confidence.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].confidence.value;
                                        }
                                        
                                        float _tmp_1355 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].confidence.value;
                                        _tmp_1355 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1355);
                                        _tmp_1355 -= 1;
                                        uint16_t* _tmp_1354 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1354 = static_cast<uint16_t>(_tmp_1355);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                            return -1;
                                        }
                                }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity.size() != 0) {
                                // Field:  type(Velocity3dWithConfidence) name(velocity) extGroup(0)
                                // Choice
                                   // #0  polarVelocity   VelocityPolarWithZ
                                   // #1  cartesianVelocity   VelocityCartesian
                                uint8_t* _choice_25 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity.size() != 0) {  // CHOICE 0  fieldType(Velocity3dWithConfidence) 
                                    *_choice_25 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001067\033[0m| Choice selection: 0";
                                
                                        // VelocityPolarWithZ  SEQUENCE
                                            //  velocityMagnitude Speed                 
                                            //  velocityDirection CartesianAngle        
                                            //  zVelocity         VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1356 = (char*) buffer++;
                                        *_tmp_1356 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001068\033[0m| Optional field z_velocity = " << *_tmp_1356;
                                        
                                        // Field:  type(Speed) name(velocity_magnitude) extGroup(0)
                                            // Speed  SEQUENCE
                                                //  speedValue      SpeedValue          
                                                //  speedConfidence SpeedConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001069\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            }
                                            
                                            float _tmp_1358 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            _tmp_1358 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1358);
                                            uint16_t* _tmp_1357 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1357 = static_cast<uint16_t>(_tmp_1358);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001070\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value);
                                            }
                                            
                                            float _tmp_1360 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value;
                                            _tmp_1360 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1360);
                                            _tmp_1360 -= 1;
                                            uint8_t* _tmp_1359 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1359 = static_cast<uint8_t>(_tmp_1360);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(CartesianAngle) name(velocity_direction) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001071\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            }
                                            
                                            float _tmp_1362 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            _tmp_1362 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1362);
                                            uint16_t* _tmp_1361 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1361 = static_cast<uint16_t>(_tmp_1362);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001072\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.confidence.value);
                                            }
                                            
                                            float _tmp_1364 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.confidence.value;
                                            _tmp_1364 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1364);
                                            _tmp_1364 -= 1;
                                            uint8_t* _tmp_1363 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1363 = static_cast<uint8_t>(_tmp_1364);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001073\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_1366 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                _tmp_1366 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1366);
                                                _tmp_1366 -= -16383;
                                                uint16_t* _tmp_1365 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1365 = static_cast<uint16_t>(_tmp_1366);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001074\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_1368 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_1368 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1368);
                                                _tmp_1368 -= 1;
                                                uint8_t* _tmp_1367 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_1367 = static_cast<uint8_t>(_tmp_1368);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity.size() != 0)  // CHOICE 1  fieldType(Velocity3dWithConfidence) 
                                {
                                    *_choice_25 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001075\033[0m| Choice selection: 1";
                                
                                        // VelocityCartesian  SEQUENCE
                                            //  xVelocity  VelocityComponent     
                                            //  yVelocity  VelocityComponent     
                                            //  zVelocity  VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1369 = (char*) buffer++;
                                        *_tmp_1369 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001076\033[0m| Optional field z_velocity = " << *_tmp_1369;
                                        
                                        // Field:  type(VelocityComponent) name(x_velocity) extGroup(0)
                                            // VelocityComponent  SEQUENCE
                                                //  value      VelocityComponentValue     
                                                //  confidence SpeedConfidence            
                                            // Optional fields bytemap
                                            
                                            // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001077\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            }
                                            
                                            float _tmp_1371 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            _tmp_1371 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1371);
                                            _tmp_1371 -= -16383;
                                            uint16_t* _tmp_1370 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1370 = static_cast<uint16_t>(_tmp_1371);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001078\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_1373 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.confidence.value;
                                            _tmp_1373 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1373);
                                            _tmp_1373 -= 1;
                                            uint8_t* _tmp_1372 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1372 = static_cast<uint8_t>(_tmp_1373);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(VelocityComponent) name(y_velocity) extGroup(0)
                                            // VelocityComponent  SEQUENCE
                                                //  value      VelocityComponentValue     
                                                //  confidence SpeedConfidence            
                                            // Optional fields bytemap
                                            
                                            // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001079\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            }
                                            
                                            float _tmp_1375 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            _tmp_1375 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1375);
                                            _tmp_1375 -= -16383;
                                            uint16_t* _tmp_1374 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1374 = static_cast<uint16_t>(_tmp_1375);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001080\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_1377 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.confidence.value;
                                            _tmp_1377 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1377);
                                            _tmp_1377 -= 1;
                                            uint8_t* _tmp_1376 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1376 = static_cast<uint8_t>(_tmp_1377);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001081\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_1379 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                _tmp_1379 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1379);
                                                _tmp_1379 -= -16383;
                                                uint16_t* _tmp_1378 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1378 = static_cast<uint16_t>(_tmp_1379);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001082\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_1381 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_1381 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1381);
                                                _tmp_1381 -= 1;
                                                uint8_t* _tmp_1380 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_1380 = static_cast<uint8_t>(_tmp_1381);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_25) << ") selected in CHOICE Velocity3dWithConfidence in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].velocity[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration.size() != 0) {
                                // Field:  type(Acceleration3dWithConfidence) name(acceleration) extGroup(0)
                                // Choice
                                   // #0  polarAcceleration   AccelerationPolarWithZ
                                   // #1  cartesianAcceleration   AccelerationCartesian
                                uint8_t* _choice_26 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration.size() != 0) {  // CHOICE 0  fieldType(Acceleration3dWithConfidence) 
                                    *_choice_26 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001083\033[0m| Choice selection: 0";
                                
                                        // AccelerationPolarWithZ  SEQUENCE
                                            //  accelerationMagnitude AccelerationMagnitude     
                                            //  accelerationDirection CartesianAngle            
                                            //  zAcceleration         AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1382 = (char*) buffer++;
                                        *_tmp_1382 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001084\033[0m| Optional field z_acceleration = " << *_tmp_1382;
                                        
                                        // Field:  type(AccelerationMagnitude) name(acceleration_magnitude) extGroup(0)
                                            // AccelerationMagnitude  SEQUENCE
                                                //  accelerationMagnitudeValue AccelerationMagnitudeValue     
                                                //  accelerationConfidence     AccelerationConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationMagnitudeValue) name(acceleration_magnitude_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(161) span(162) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001085\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value);
                                            }
                                            
                                            float _tmp_1384 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value;
                                            _tmp_1384 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1384);
                                            uint8_t* _tmp_1383 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1383 = static_cast<uint8_t>(_tmp_1384);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(acceleration_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001086\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value);
                                            }
                                            
                                            float _tmp_1386 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value;
                                            _tmp_1386 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1386);
                                            uint8_t* _tmp_1385 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1385 = static_cast<uint8_t>(_tmp_1386);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(CartesianAngle) name(acceleration_direction) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001087\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            }
                                            
                                            float _tmp_1388 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            _tmp_1388 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1388);
                                            uint16_t* _tmp_1387 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1387 = static_cast<uint16_t>(_tmp_1388);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001088\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value);
                                            }
                                            
                                            float _tmp_1390 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value;
                                            _tmp_1390 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1390);
                                            _tmp_1390 -= 1;
                                            uint8_t* _tmp_1389 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1389 = static_cast<uint8_t>(_tmp_1390);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001089\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_1392 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_1392 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1392);
                                                _tmp_1392 -= -160;
                                                uint16_t* _tmp_1391 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1391 = static_cast<uint16_t>(_tmp_1392);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001090\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_1394 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_1394 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1394);
                                                uint8_t* _tmp_1393 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_1393 = static_cast<uint8_t>(_tmp_1394);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration.size() != 0)  // CHOICE 1  fieldType(Acceleration3dWithConfidence) 
                                {
                                    *_choice_26 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001091\033[0m| Choice selection: 1";
                                
                                        // AccelerationCartesian  SEQUENCE
                                            //  xAcceleration AccelerationComponent     
                                            //  yAcceleration AccelerationComponent     
                                            //  zAcceleration AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_1395 = (char*) buffer++;
                                        *_tmp_1395 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001092\033[0m| Optional field z_acceleration = " << *_tmp_1395;
                                        
                                        // Field:  type(AccelerationComponent) name(x_acceleration) extGroup(0)
                                            // AccelerationComponent  SEQUENCE
                                                //  value      AccelerationValue          
                                                //  confidence AccelerationConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001093\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            }
                                            
                                            float _tmp_1397 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            _tmp_1397 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1397);
                                            _tmp_1397 -= -160;
                                            uint16_t* _tmp_1396 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1396 = static_cast<uint16_t>(_tmp_1397);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001094\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_1399 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value;
                                            _tmp_1399 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1399);
                                            uint8_t* _tmp_1398 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1398 = static_cast<uint8_t>(_tmp_1399);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(AccelerationComponent) name(y_acceleration) extGroup(0)
                                            // AccelerationComponent  SEQUENCE
                                                //  value      AccelerationValue          
                                                //  confidence AccelerationConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001095\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            }
                                            
                                            float _tmp_1401 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            _tmp_1401 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1401);
                                            _tmp_1401 -= -160;
                                            uint16_t* _tmp_1400 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1400 = static_cast<uint16_t>(_tmp_1401);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001096\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_1403 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value;
                                            _tmp_1403 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1403);
                                            uint8_t* _tmp_1402 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1402 = static_cast<uint8_t>(_tmp_1403);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001097\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_1405 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_1405 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1405);
                                                _tmp_1405 -= -160;
                                                uint16_t* _tmp_1404 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1404 = static_cast<uint16_t>(_tmp_1405);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001098\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_1407 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_1407 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_1407);
                                                uint8_t* _tmp_1406 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_1406 = static_cast<uint8_t>(_tmp_1407);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_26) << ") selected in CHOICE Acceleration3dWithConfidence in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].acceleration[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles.size() != 0) {
                                // Field:  type(EulerAnglesWithConfidence) name(angles) extGroup(0)
                                    // EulerAnglesWithConfidence  SEQUENCE
                                        //  zAngle     CartesianAngle     
                                        //  yAngle     CartesianAngle   OPTIONAL  
                                        //  xAngle     CartesianAngle   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_1408 = (char*) buffer++;
                                    *_tmp_1408 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001099\033[0m| Optional field y_angle = " << *_tmp_1408;
                                    char* _tmp_1409 = (char*) buffer++;
                                    *_tmp_1409 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001100\033[0m| Optional field x_angle = " << *_tmp_1409;
                                    
                                    // Field:  type(CartesianAngle) name(z_angle) extGroup(0)
                                        // CartesianAngle  SEQUENCE
                                            //  value      CartesianAngleValue     
                                            //  confidence AngleConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001101\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.value.value) << 
                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.value.value;
                                        }
                                        
                                        float _tmp_1411 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.value.value;
                                        _tmp_1411 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1411);
                                        uint16_t* _tmp_1410 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_1410 = static_cast<uint16_t>(_tmp_1411);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001102\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.confidence.value) << 
                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.confidence.value);
                                        }
                                        
                                        float _tmp_1413 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.confidence.value;
                                        _tmp_1413 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_1413);
                                        _tmp_1413 -= 1;
                                        uint8_t* _tmp_1412 = (uint8_t*) buffer; buffer += 1;
                                        *_tmp_1412 = static_cast<uint8_t>(_tmp_1413);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].z_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                            return -1;
                                        }
                                    
                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(y_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001103\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].value.value;
                                            }
                                            
                                            float _tmp_1415 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].value.value;
                                            _tmp_1415 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1415);
                                            uint16_t* _tmp_1414 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1414 = static_cast<uint16_t>(_tmp_1415);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001104\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_1417 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].confidence.value;
                                            _tmp_1417 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1417);
                                            _tmp_1417 -= 1;
                                            uint8_t* _tmp_1416 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1416 = static_cast<uint8_t>(_tmp_1417);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(x_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001105\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].value.value;
                                            }
                                            
                                            float _tmp_1419 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].value.value;
                                            _tmp_1419 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1419);
                                            uint16_t* _tmp_1418 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1418 = static_cast<uint16_t>(_tmp_1419);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001106\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_1421 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].confidence.value;
                                            _tmp_1421 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1421);
                                            _tmp_1421 -= 1;
                                            uint8_t* _tmp_1420 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_1420 = static_cast<uint8_t>(_tmp_1421);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity.size() != 0) {
                                // Field:  type(CartesianAngularVelocityComponent) name(z_angular_velocity) extGroup(0)
                                    // CartesianAngularVelocityComponent  SEQUENCE
                                        //  value      CartesianAngularVelocityComponentValue     
                                        //  confidence AngularSpeedConfidence                     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianAngularVelocityComponentValue) name(value) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-255) max(256) span(512) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001107\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].value.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].value.value;
                                    }
                                    
                                    uint16_t* _tmp_1422 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].value.value - -255;
                                    *_tmp_1422 = __aux64__;
                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].value.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].value.value' (" << __aux64__ << ") less than (-255); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngularSpeedConfidence) name(confidence) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(7) span(8) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001108\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].confidence.value);
                                    }
                                    
                                    uint8_t* _tmp_1423 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_1423 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].confidence.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].confidence.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices.size() != 0) {
                                // Field:  type(LowerTriangularPositiveSemidefiniteMatrices) name(lower_triangular_correlation_matrices) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(4) span(4) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements.size();
                                if(__aux64__ > 4) __aux64__ = 4;
                                uint16_t* _tmp_1424 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_1424 = __aux64__ - 1;
                                
                                int __ifz = __aux64__;
                                for(int z = 0; z < __ifz; z++) { 
                                    
                                        // LowerTriangularPositiveSemidefiniteMatrix  SEQUENCE
                                            //  componentsIncludedIntheMatrix MatrixIncludedComponents                             
                                            //  matrix                        LowerTriangularPositiveSemidefiniteMatrixColumns     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(MatrixIncludedComponents) name(components_included_inthe_matrix) extGroup(0)
                                        // BitString
                                        // BIT_STRING  min(13) max(13) span(1)
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m001110\033[0m| payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.values.size());
                                        
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.values.size() < 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.values.size()) << " is less than allowable (13); message dropped.";
                                            return -1;
                                        }
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.values.size() > 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.values.size()) << " exceeds max allowable (13); message dropped.";
                                            return -1;
                                        }
                                        
                                        uint8_t* _ext_flag_706 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.
                                        *_ext_flag_706 = 0; 
                                        
                                        uint8_t* _tmp_1425 = (uint8_t*)buffer;
                                        __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.values.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        *_tmp_1425 = __aux64__ - 13;
                                        buffer += 1;
                                        
                                        int __ifa = __aux64__;
                                        for(int a = 0; a < __ifa; a++) {
                                            uint8_t* __b__ = (uint8_t*)buffer++;
                                            *__b__ = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].components_included_inthe_matrix.values[a]? 1: 0);
                                        }
                                        
                                        // Field:  type(LowerTriangularPositiveSemidefiniteMatrixColumns) name(matrix) extGroup(0)
                                        // SequenceOf
                                        // Data Type UInt8
                                        // SEQUENCE_OF  min(1) max(13) span(13) ext(false)
                                        __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        uint16_t* _tmp_1426 = (uint16_t*)buffer;
                                        buffer += 2;
                                        *_tmp_1426 = __aux64__ - 1;
                                        
                                        int __ifb = __aux64__;
                                        for(int b = 0; b < __ifb; b++) { 
                                            
                                            // SequenceOf
                                            // Data Type UInt8
                                            // SEQUENCE_OF  min(1) max(13) span(13) ext(true)
                                            uint8_t* _ext_flag_707 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].
                                            *_ext_flag_707 = 0; 
                                            
                                            __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements.size();
                                            if(__aux64__ > 13) __aux64__ = 13;
                                            uint16_t* _tmp_1427 = (uint16_t*)buffer;
                                            buffer += 2;
                                            *_tmp_1427 = __aux64__ - 1;
                                            
                                            int __ifc = __aux64__;
                                            for(int c = 0; c < __ifc; c++) { 
                                                
                                                // Integer
                                                
                                                // INT8  min(-100) max(101) span(202) dataType(Int8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001113\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements[c].value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements[c].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements[c].value);
                                                }
                                                
                                                uint8_t* _tmp_1428 = (uint8_t*) buffer++;
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements[c].value - -100;
                                                *_tmp_1428 = __aux64__;
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements[c].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -100) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements[c].value' (" << __aux64__ << ") less than (-100); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].lower_triangular_correlation_matrices[0].elements[z].matrix.elements[b].elements[c].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                                    return -1;
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_z) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001114\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].value.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].value.value);
                                    }
                                    
                                    float _tmp_1430 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].value.value;
                                    _tmp_1430 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1430);
                                    _tmp_1430 -= 1;
                                    uint8_t* _tmp_1429 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1429 = static_cast<uint8_t>(_tmp_1430);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001115\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].confidence.value);
                                    }
                                    
                                    float _tmp_1432 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].confidence.value;
                                    _tmp_1432 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1432);
                                    _tmp_1432 -= 1;
                                    uint8_t* _tmp_1431 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1431 = static_cast<uint8_t>(_tmp_1432);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_z[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_y) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001116\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].value.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].value.value);
                                    }
                                    
                                    float _tmp_1434 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].value.value;
                                    _tmp_1434 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1434);
                                    _tmp_1434 -= 1;
                                    uint8_t* _tmp_1433 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1433 = static_cast<uint8_t>(_tmp_1434);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001117\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].confidence.value);
                                    }
                                    
                                    float _tmp_1436 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].confidence.value;
                                    _tmp_1436 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1436);
                                    _tmp_1436 -= 1;
                                    uint8_t* _tmp_1435 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1435 = static_cast<uint8_t>(_tmp_1436);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_y[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_x) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001118\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].value.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].value.value);
                                    }
                                    
                                    float _tmp_1438 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].value.value;
                                    _tmp_1438 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1438);
                                    _tmp_1438 -= 1;
                                    uint8_t* _tmp_1437 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1437 = static_cast<uint8_t>(_tmp_1438);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001119\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].confidence.value);
                                    }
                                    
                                    float _tmp_1440 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].confidence.value;
                                    _tmp_1440 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_1440);
                                    _tmp_1440 -= 1;
                                    uint8_t* _tmp_1439 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_1439 = static_cast<uint8_t>(_tmp_1440);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_dimension_x[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age.size() != 0) {
                                // Field:  type(PerceivedObject_DeltaTimeMilliSecondSigned_objectAge) name(object_age) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(2047) span(2048) scaleDivisor(1000.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001120\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age[0].value) << 
                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age[0].value;
                                }
                                
                                float _tmp_1442 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age[0].value;
                                _tmp_1442 *= 1000.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_1442);
                                uint16_t* _tmp_1441 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_1441 = static_cast<uint16_t>(_tmp_1442);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_age[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality.size() != 0) {
                                // Field:  type(ObjectPerceptionQuality) name(object_perception_quality) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m001121\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality[0].value) << 
                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality[0].value);
                                }
                                
                                uint8_t* _tmp_1443 = (uint8_t*) buffer++;
                                *_tmp_1443 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].object_perception_quality[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list.size() != 0) {
                                // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                                uint8_t* _ext_flag_717 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].
                                *_ext_flag_717 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements.size();
                                if(__aux64__ > 128) __aux64__ = 128;
                                uint16_t* _tmp_1444 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_1444 = __aux64__ - 1;
                                
                                int __ifd = __aux64__;
                                for(int d = 0; d < __ifd; d++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m001123\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements[d].value) << 
                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements[d].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements[d].value);
                                    }
                                    
                                    uint8_t* _tmp_1445 = (uint8_t*) buffer++;
                                    *_tmp_1445 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements[d].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements[d].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements[d].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].sensor_id_list[0].elements[d].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification.size() != 0) {
                                // Field:  type(ObjectClassDescription) name(classification) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements.size();
                                if(__aux64__ > 8) __aux64__ = 8;
                                uint16_t* _tmp_1446 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_1446 = __aux64__ - 1;
                                
                                int __ife = __aux64__;
                                for(int e = 0; e < __ife; e++) { 
                                    
                                        // ObjectClassWithConfidence  SEQUENCE
                                            //  objectClass ObjectClass         
                                            //  confidence  ConfidenceLevel     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(ObjectClass) name(object_class) extGroup(0)
                                        // Choice
                                           // #0  vehicleSubClass   TrafficParticipantType
                                           // #1  vruSubClass   VruProfileAndSubprofile
                                           // #2  groupSubClass   VruClusterInformation
                                           // #3  otherSubClass   OtherSubClass
                                        uint8_t* _ext_flag_719 = (uint8_t*) buffer; 
                                        buffer++;
                                        *_ext_flag_719 = 0; 
                                        
                                        uint8_t* _choice_27 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class.size() != 0) {  // CHOICE 0  fieldType(ObjectClass) 
                                            *_choice_27 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m001125\033[0m| Choice selection: 0";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001126\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_1447 = (uint8_t*) buffer++;
                                            *_tmp_1447 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class.size() != 0)  // CHOICE 1  fieldType(ObjectClass) 
                                        {
                                            *_choice_27 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m001127\033[0m| Choice selection: 1";
                                        
                                            // Choice
                                               // #0  pedestrian   VruSubProfilePedestrian
                                               // #1  bicyclistAndLightVruVehicle   VruSubProfileBicyclist
                                               // #2  motorcyclist   VruSubProfileMotorcyclist
                                               // #3  animal   VruSubProfileAnimal
                                            uint8_t* _ext_flag_721 = (uint8_t*) buffer; 
                                            buffer++;
                                            *_ext_flag_721 = 0; 
                                            
                                            uint8_t* _choice_28 = (uint8_t*) buffer;
                                            buffer++;
                                            
                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian.size() != 0) {  // CHOICE 0  fieldType(VruProfileAndSubprofile) 
                                                *_choice_28 = 0;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001128\033[0m| Choice selection: 0";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001129\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian[0].value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian[0].value);
                                                }
                                                
                                                uint8_t* _tmp_1448 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_1448 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle.size() != 0)  // CHOICE 1  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_28 = 1;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001130\033[0m| Choice selection: 1";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001131\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value);
                                                }
                                                
                                                uint8_t* _tmp_1449 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_1449 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist.size() != 0)  // CHOICE 2  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_28 = 2;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001132\033[0m| Choice selection: 2";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001133\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist[0].value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist[0].value);
                                                }
                                                
                                                uint8_t* _tmp_1450 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_1450 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal.size() != 0)  // CHOICE 3  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_28 = 3;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001134\033[0m| Choice selection: 3";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001135\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal[0].value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal[0].value);
                                                }
                                                
                                                uint8_t* _tmp_1451 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_1451 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else
                                            {
                                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_28) << ") selected in CHOICE VruProfileAndSubprofile in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.vru_sub_class[0]'; message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class.size() != 0)  // CHOICE 2  fieldType(ObjectClass) 
                                        {
                                            *_choice_27 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m001136\033[0m| Choice selection: 2";
                                        
                                                // VruClusterInformation  SEQUENCE
                                                    //  clusterId               Identifier1B         OPTIONAL  
                                                    //  clusterBoundingBoxShape Shape                OPTIONAL  
                                                    //  clusterCardinalitySize  CardinalNumber1B       
                                                    //  clusterProfiles         VruClusterProfiles   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_726 = (uint8_t*) buffer++;  // Write extension flag for VruClusterInformation
                                                *_ext_flag_726 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_1452 = (char*) buffer++;
                                                *_tmp_1452 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001137\033[0m| Optional field cluster_id = " << *_tmp_1452;
                                                char* _tmp_1453 = (char*) buffer++;
                                                *_tmp_1453 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001138\033[0m| Optional field cluster_bounding_box_shape = " << *_tmp_1453;
                                                char* _tmp_1454 = (char*) buffer++;
                                                *_tmp_1454 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001139\033[0m| Optional field cluster_profiles = " << *_tmp_1454;
                                                
                                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id.size() != 0) {
                                                    // Field:  type(Identifier1B) name(cluster_id) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m001140\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id[0].value) << 
                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id[0].value);
                                                    }
                                                    
                                                    uint8_t* _tmp_1455 = (uint8_t*) buffer++;
                                                    *_tmp_1455 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0) {
                                                    // Field:  type(Shape) name(cluster_bounding_box_shape) extGroup(0)
                                                    // Choice
                                                       // #0  rectangular   RectangularShape
                                                       // #1  circular   CircularShape
                                                       // #2  polygonal   PolygonalShape
                                                       // #3  elliptical   EllipticalShape
                                                       // #4  radial   RadialShape
                                                       // #5  radialShapes   RadialShapes
                                                    uint8_t* _ext_flag_728 = (uint8_t*) buffer; 
                                                    buffer++;
                                                    *_ext_flag_728 = 0; 
                                                    
                                                    uint8_t* _choice_29 = (uint8_t*) buffer;
                                                    buffer++;
                                                    
                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                                        *_choice_29 = 0;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m001141\033[0m| Choice selection: 0";
                                                    
                                                            // RectangularShape  SEQUENCE
                                                                //  centerPoint CartesianPosition3d   OPTIONAL  
                                                                //  semiLength  StandardLength12b       
                                                                //  semiBreadth StandardLength12b       
                                                                //  orientation Wgs84AngleValue       OPTIONAL  
                                                                //  height      StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_1456 = (char*) buffer++;
                                                            *_tmp_1456 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001142\033[0m| Optional field center_point = " << *_tmp_1456;
                                                            char* _tmp_1457 = (char*) buffer++;
                                                            *_tmp_1457 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001143\033[0m| Optional field orientation = " << *_tmp_1457;
                                                            char* _tmp_1458 = (char*) buffer++;
                                                            *_tmp_1458 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001144\033[0m| Optional field height = " << *_tmp_1458;
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_1459 = (char*) buffer++;
                                                                    *_tmp_1459 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001145\033[0m| Optional field z_coordinate = " << *_tmp_1459;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001146\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1461 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    _tmp_1461 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1461);
                                                                    _tmp_1461 -= -32768;
                                                                    uint16_t* _tmp_1460 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1460 = static_cast<uint16_t>(_tmp_1461);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001147\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1463 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    _tmp_1463 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1463);
                                                                    _tmp_1463 -= -32768;
                                                                    uint16_t* _tmp_1462 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1462 = static_cast<uint16_t>(_tmp_1463);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001148\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1465 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        _tmp_1465 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1465);
                                                                        _tmp_1465 -= -32768;
                                                                        uint16_t* _tmp_1464 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1464 = static_cast<uint16_t>(_tmp_1465);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001149\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            }
                                                            
                                                            float _tmp_1467 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            _tmp_1467 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1467);
                                                            uint16_t* _tmp_1466 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1466 = static_cast<uint16_t>(_tmp_1467);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001150\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            }
                                                            
                                                            float _tmp_1469 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            _tmp_1469 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1469);
                                                            uint16_t* _tmp_1468 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1468 = static_cast<uint16_t>(_tmp_1469);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001151\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_1471 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                _tmp_1471 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1471);
                                                                uint16_t* _tmp_1470 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1470 = static_cast<uint16_t>(_tmp_1471);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001152\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_1473 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                _tmp_1473 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1473);
                                                                uint16_t* _tmp_1472 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1472 = static_cast<uint16_t>(_tmp_1473);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                                                    {
                                                        *_choice_29 = 1;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m001153\033[0m| Choice selection: 1";
                                                    
                                                            // CircularShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  radius              StandardLength12b       
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_1474 = (char*) buffer++;
                                                            *_tmp_1474 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001154\033[0m| Optional field shape_reference_point = " << *_tmp_1474;
                                                            char* _tmp_1475 = (char*) buffer++;
                                                            *_tmp_1475 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001155\033[0m| Optional field height = " << *_tmp_1475;
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_1476 = (char*) buffer++;
                                                                    *_tmp_1476 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001156\033[0m| Optional field z_coordinate = " << *_tmp_1476;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001157\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1478 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_1478 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1478);
                                                                    _tmp_1478 -= -32768;
                                                                    uint16_t* _tmp_1477 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1477 = static_cast<uint16_t>(_tmp_1478);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001158\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1480 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_1480 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1480);
                                                                    _tmp_1480 -= -32768;
                                                                    uint16_t* _tmp_1479 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1479 = static_cast<uint16_t>(_tmp_1480);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001159\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1482 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_1482 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1482);
                                                                        _tmp_1482 -= -32768;
                                                                        uint16_t* _tmp_1481 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1481 = static_cast<uint16_t>(_tmp_1482);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001160\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            }
                                                            
                                                            float _tmp_1484 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            _tmp_1484 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1484);
                                                            uint16_t* _tmp_1483 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1483 = static_cast<uint16_t>(_tmp_1484);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001161\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_1486 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                _tmp_1486 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1486);
                                                                uint16_t* _tmp_1485 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1485 = static_cast<uint16_t>(_tmp_1486);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                                                    {
                                                        *_choice_29 = 2;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m001162\033[0m| Choice selection: 2";
                                                    
                                                            // PolygonalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                                                //  polygon             SequenceOfCartesianPosition3d     
                                                                //  height              StandardLength12b               OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_1487 = (char*) buffer++;
                                                            *_tmp_1487 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001163\033[0m| Optional field shape_reference_point = " << *_tmp_1487;
                                                            char* _tmp_1488 = (char*) buffer++;
                                                            *_tmp_1488 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001164\033[0m| Optional field height = " << *_tmp_1488;
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_1489 = (char*) buffer++;
                                                                    *_tmp_1489 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001165\033[0m| Optional field z_coordinate = " << *_tmp_1489;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001166\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1491 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_1491 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1491);
                                                                    _tmp_1491 -= -32768;
                                                                    uint16_t* _tmp_1490 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1490 = static_cast<uint16_t>(_tmp_1491);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001167\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1493 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_1493 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1493);
                                                                    _tmp_1493 -= -32768;
                                                                    uint16_t* _tmp_1492 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1492 = static_cast<uint16_t>(_tmp_1493);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001168\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1495 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_1495 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1495);
                                                                        _tmp_1495 -= -32768;
                                                                        uint16_t* _tmp_1494 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1494 = static_cast<uint16_t>(_tmp_1495);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_744 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.
                                                            *_ext_flag_744 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_1496 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_1496 = __aux64__ - 1;
                                                            
                                                            int __iff = __aux64__;
                                                            for(int f = 0; f < __iff; f++) { 
                                                                
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_1497 = (char*) buffer++;
                                                                    *_tmp_1497 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001170\033[0m| Optional field z_coordinate = " << *_tmp_1497;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001171\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1499 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].x_coordinate.value;
                                                                    _tmp_1499 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1499);
                                                                    _tmp_1499 -= -32768;
                                                                    uint16_t* _tmp_1498 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1498 = static_cast<uint16_t>(_tmp_1499);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001172\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1501 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].y_coordinate.value;
                                                                    _tmp_1501 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1501);
                                                                    _tmp_1501 -= -32768;
                                                                    uint16_t* _tmp_1500 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1500 = static_cast<uint16_t>(_tmp_1501);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001173\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1503 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate[0].value;
                                                                        _tmp_1503 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1503);
                                                                        _tmp_1503 -= -32768;
                                                                        uint16_t* _tmp_1502 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1502 = static_cast<uint16_t>(_tmp_1503);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[f].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001174\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_1505 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                _tmp_1505 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1505);
                                                                uint16_t* _tmp_1504 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1504 = static_cast<uint16_t>(_tmp_1505);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                                                    {
                                                        *_choice_29 = 3;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m001175\033[0m| Choice selection: 3";
                                                    
                                                            // EllipticalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  semiMajorAxisLength StandardLength12b       
                                                                //  semiMinorAxisLength StandardLength12b       
                                                                //  orientation         Wgs84AngleValue       OPTIONAL  
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_1506 = (char*) buffer++;
                                                            *_tmp_1506 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001176\033[0m| Optional field shape_reference_point = " << *_tmp_1506;
                                                            char* _tmp_1507 = (char*) buffer++;
                                                            *_tmp_1507 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001177\033[0m| Optional field orientation = " << *_tmp_1507;
                                                            char* _tmp_1508 = (char*) buffer++;
                                                            *_tmp_1508 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001178\033[0m| Optional field height = " << *_tmp_1508;
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_1509 = (char*) buffer++;
                                                                    *_tmp_1509 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001179\033[0m| Optional field z_coordinate = " << *_tmp_1509;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001180\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1511 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_1511 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1511);
                                                                    _tmp_1511 -= -32768;
                                                                    uint16_t* _tmp_1510 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1510 = static_cast<uint16_t>(_tmp_1511);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001181\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1513 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_1513 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1513);
                                                                    _tmp_1513 -= -32768;
                                                                    uint16_t* _tmp_1512 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1512 = static_cast<uint16_t>(_tmp_1513);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001182\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1515 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_1515 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1515);
                                                                        _tmp_1515 -= -32768;
                                                                        uint16_t* _tmp_1514 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1514 = static_cast<uint16_t>(_tmp_1515);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001183\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_1517 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            _tmp_1517 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1517);
                                                            uint16_t* _tmp_1516 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1516 = static_cast<uint16_t>(_tmp_1517);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001184\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_1519 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            _tmp_1519 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1519);
                                                            uint16_t* _tmp_1518 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1518 = static_cast<uint16_t>(_tmp_1519);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001185\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_1521 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                _tmp_1521 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1521);
                                                                uint16_t* _tmp_1520 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1520 = static_cast<uint16_t>(_tmp_1521);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001186\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_1523 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                _tmp_1523 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1523);
                                                                uint16_t* _tmp_1522 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1522 = static_cast<uint16_t>(_tmp_1523);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                                                    {
                                                        *_choice_29 = 4;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m001187\033[0m| Choice selection: 4";
                                                    
                                                            // RadialShape  SEQUENCE
                                                                //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                                                //  range                                 StandardLength12b       
                                                                //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                                                //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                                                //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                                                //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_1524 = (char*) buffer++;
                                                            *_tmp_1524 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001188\033[0m| Optional field shape_reference_point = " << *_tmp_1524;
                                                            char* _tmp_1525 = (char*) buffer++;
                                                            *_tmp_1525 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001189\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_1525;
                                                            char* _tmp_1526 = (char*) buffer++;
                                                            *_tmp_1526 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001190\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_1526;
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_1527 = (char*) buffer++;
                                                                    *_tmp_1527 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001191\033[0m| Optional field z_coordinate = " << *_tmp_1527;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001192\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1529 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_1529 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1529);
                                                                    _tmp_1529 -= -32768;
                                                                    uint16_t* _tmp_1528 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1528 = static_cast<uint16_t>(_tmp_1529);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001193\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_1531 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_1531 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1531);
                                                                    _tmp_1531 -= -32768;
                                                                    uint16_t* _tmp_1530 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1530 = static_cast<uint16_t>(_tmp_1531);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001194\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1533 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_1533 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1533);
                                                                        _tmp_1533 -= -32768;
                                                                        uint16_t* _tmp_1532 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1532 = static_cast<uint16_t>(_tmp_1533);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001195\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            }
                                                            
                                                            float _tmp_1535 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            _tmp_1535 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1535);
                                                            uint16_t* _tmp_1534 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1534 = static_cast<uint16_t>(_tmp_1535);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001196\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            }
                                                            
                                                            float _tmp_1537 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            _tmp_1537 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1537);
                                                            uint16_t* _tmp_1536 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1536 = static_cast<uint16_t>(_tmp_1537);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001197\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            }
                                                            
                                                            float _tmp_1539 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            _tmp_1539 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1539);
                                                            uint16_t* _tmp_1538 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1538 = static_cast<uint16_t>(_tmp_1539);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001198\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                }
                                                                
                                                                float _tmp_1541 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                _tmp_1541 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1541);
                                                                uint16_t* _tmp_1540 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1540 = static_cast<uint16_t>(_tmp_1541);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001199\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                }
                                                                
                                                                float _tmp_1543 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                _tmp_1543 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1543);
                                                                uint16_t* _tmp_1542 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1542 = static_cast<uint16_t>(_tmp_1543);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                                                    {
                                                        *_choice_29 = 5;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m001200\033[0m| Choice selection: 5";
                                                    
                                                            // RadialShapes  SEQUENCE
                                                                //  refPointId       Identifier1B                 
                                                                //  xCoordinate      CartesianCoordinateSmall     
                                                                //  yCoordinate      CartesianCoordinateSmall     
                                                                //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                                                //  radialShapesList RadialShapesList             
                                                            // Optional fields bytemap
                                                            char* _tmp_1544 = (char*) buffer++;
                                                            *_tmp_1544 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m001201\033[0m| Optional field z_coordinate = " << *_tmp_1544;
                                                            
                                                            // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                                            // Integer
                                                            
                                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001202\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value);
                                                            }
                                                            
                                                            uint8_t* _tmp_1545 = (uint8_t*) buffer++;
                                                            *_tmp_1545 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value; 
                                                            __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001203\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_1547 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            _tmp_1547 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1547);
                                                            _tmp_1547 -= -3094;
                                                            uint16_t* _tmp_1546 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1546 = static_cast<uint16_t>(_tmp_1547);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m001204\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_1549 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            _tmp_1549 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_1549);
                                                            _tmp_1549 -= -3094;
                                                            uint16_t* _tmp_1548 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_1548 = static_cast<uint16_t>(_tmp_1549);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                                                // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m001205\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                }
                                                                
                                                                float _tmp_1551 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                _tmp_1551 *= 100.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_1551);
                                                                _tmp_1551 -= -3094;
                                                                uint16_t* _tmp_1550 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_1550 = static_cast<uint16_t>(_tmp_1551);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_768 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.
                                                            *_ext_flag_768 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_1552 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_1552 = __aux64__ - 1;
                                                            
                                                            int __ifg = __aux64__;
                                                            for(int g = 0; g < __ifg; g++) { 
                                                                
                                                                    // RadialShapeDetails  SEQUENCE
                                                                        //  range                       StandardLength12b       
                                                                        //  horizontalOpeningAngleStart CartesianAngleValue     
                                                                        //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                                        //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                                        //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_1553 = (char*) buffer++;
                                                                    *_tmp_1553 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001207\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_1553;
                                                                    char* _tmp_1554 = (char*) buffer++;
                                                                    *_tmp_1554 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m001208\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_1554;
                                                                    
                                                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001209\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].range.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].range.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].range.value;
                                                                    }
                                                                    
                                                                    float _tmp_1556 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].range.value;
                                                                    _tmp_1556 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1556);
                                                                    uint16_t* _tmp_1555 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1555 = static_cast<uint16_t>(_tmp_1556);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001210\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_start.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_start.value;
                                                                    }
                                                                    
                                                                    float _tmp_1558 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_start.value;
                                                                    _tmp_1558 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1558);
                                                                    uint16_t* _tmp_1557 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1557 = static_cast<uint16_t>(_tmp_1558);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m001211\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_end.value) << 
                                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_end.value;
                                                                    }
                                                                    
                                                                    float _tmp_1560 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_end.value;
                                                                    _tmp_1560 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_1560);
                                                                    uint16_t* _tmp_1559 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_1559 = static_cast<uint16_t>(_tmp_1560);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001212\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1562 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start[0].value;
                                                                        _tmp_1562 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1562);
                                                                        uint16_t* _tmp_1561 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1561 = static_cast<uint16_t>(_tmp_1562);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m001213\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end[0].value) << 
                                                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_1564 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end[0].value;
                                                                        _tmp_1564 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_1564);
                                                                        uint16_t* _tmp_1563 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_1563 = static_cast<uint16_t>(_tmp_1564);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[g].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                    
                                                    }
                                                    else
                                                    {
                                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_29) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_bounding_box_shape[0]'; message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(CardinalNumber1B) name(cluster_cardinality_size) extGroup(0)
                                                // Integer
                                                
                                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001214\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_cardinality_size.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_cardinality_size.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_cardinality_size.value);
                                                }
                                                
                                                uint8_t* _tmp_1565 = (uint8_t*) buffer++;
                                                *_tmp_1565 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_cardinality_size.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_cardinality_size.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                    return -1;
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles.size() != 0) {
                                                    // Field:  type(VruClusterProfiles) name(cluster_profiles) extGroup(0)
                                                    // BitString
                                                    // BIT_STRING  min(4) max(4) span(1)
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m001215\033[0m| payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].values.size());
                                                    
                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].values.size() < 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " is less than allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].values.size() > 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " exceeds max allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    uint8_t* _tmp_1566 = (uint8_t*)buffer;
                                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].values.size();
                                                    if(__aux64__ > 4) __aux64__ = 4;
                                                    *_tmp_1566 = __aux64__ - 4;
                                                    buffer += 1;
                                                    
                                                    int __ifh = __aux64__;
                                                    for(int h = 0; h < __ifh; h++) {
                                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                                        *__b__ = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.group_sub_class[0].cluster_profiles[0].values[h]? 1: 0);
                                                    }
                                                }
                                                
                                                if(*_ext_flag_726) {
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class.size() != 0)  // CHOICE 3  fieldType(ObjectClass) 
                                        {
                                            *_choice_27 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m001216\033[0m| Choice selection: 3";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001217\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_1568 = (uint8_t*) buffer++;
                                            *_tmp_1568 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class.other_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_27) << ") selected in CHOICE ObjectClass in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].object_class'; message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(ConfidenceLevel) name(confidence) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001218\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].confidence.value) << 
                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].confidence.value);
                                        }
                                        
                                        uint8_t* _tmp_1569 = (uint8_t*) buffer++;
                                        __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].confidence.value - 1;
                                        *_tmp_1569 = __aux64__;
                                        __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].confidence.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].classification[0].elements[e].confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                            return -1;
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position.size() != 0) {
                                // Field:  type(MapPosition) name(map_position) extGroup(0)
                                    // MapPosition  SEQUENCE
                                        //  mapReference             MapReference               OPTIONAL  
                                        //  laneId                   Identifier1B               OPTIONAL  
                                        //  connectionId             Identifier1B               OPTIONAL  
                                        //  longitudinalLanePosition LongitudinalLanePosition   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_777 = (uint8_t*) buffer++;  // Write extension flag for MapPosition
                                    *_ext_flag_777 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_1570 = (char*) buffer++;
                                    *_tmp_1570 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001219\033[0m| Optional field map_reference = " << *_tmp_1570;
                                    char* _tmp_1571 = (char*) buffer++;
                                    *_tmp_1571 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001220\033[0m| Optional field lane_id = " << *_tmp_1571;
                                    char* _tmp_1572 = (char*) buffer++;
                                    *_tmp_1572 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001221\033[0m| Optional field connection_id = " << *_tmp_1572;
                                    char* _tmp_1573 = (char*) buffer++;
                                    *_tmp_1573 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m001222\033[0m| Optional field longitudinal_lane_position = " << *_tmp_1573;
                                    
                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference.size() != 0) {
                                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                                        // Choice
                                           // #0  roadsegment   RoadSegmentReferenceId
                                           // #1  intersection   IntersectionReferenceId
                                        uint8_t* _choice_30 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                                            *_choice_30 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m001223\033[0m| Choice selection: 0";
                                        
                                                // RoadSegmentReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_1574 = (char*) buffer++;
                                                *_tmp_1574 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001224\033[0m| Optional field region = " << *_tmp_1574;
                                                
                                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m001225\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_1575 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_1575 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001226\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].id.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_1576 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1576 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                                        {
                                            *_choice_30 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m001227\033[0m| Choice selection: 1";
                                        
                                                // IntersectionReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_1577 = (char*) buffer++;
                                                *_tmp_1577 = (ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m001228\033[0m| Optional field region = " << *_tmp_1577;
                                                
                                                if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m001229\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_1578 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_1578 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m001230\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].id.value) << 
                                                                 " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_1579 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_1579 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_30) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].map_reference[0]'; message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(lane_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001231\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id[0].value) << 
                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_1580 = (uint8_t*) buffer++;
                                        *_tmp_1580 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].lane_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(connection_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m001232\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id[0].value) << 
                                                         " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_1581 = (uint8_t*) buffer++;
                                        *_tmp_1581 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position.size() != 0) {
                                        // Field:  type(LongitudinalLanePosition) name(longitudinal_lane_position) extGroup(0)
                                            // LongitudinalLanePosition  SEQUENCE
                                                //  longitudinalLanePositionValue      LongitudinalLanePositionValue          
                                                //  longitudinalLanePositionConfidence LongitudinalLanePositionConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(LongitudinalLanePositionValue) name(longitudinal_lane_position_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(32767) span(32768) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001233\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            }
                                            
                                            float _tmp_1583 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            _tmp_1583 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1583);
                                            uint16_t* _tmp_1582 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1582 = static_cast<uint16_t>(_tmp_1583);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(LongitudinalLanePositionConfidence) name(longitudinal_lane_position_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(1023) span(1024) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m001234\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value) << 
                                                             " payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value: " << ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            }
                                            
                                            float _tmp_1585 = ros->payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            _tmp_1585 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_1585);
                                            uint16_t* _tmp_1584 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_1584 = static_cast<uint16_t>(_tmp_1585);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[o].perceived_object_container[0].perceived_objects.elements[y].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(*_ext_flag_777) {
                                    }
                            }
                            
                            if(*_ext_flag_663) {
                            }
                    }
                    
                    if(*_ext_flag_660) {
                    }
            
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_21) << ") selected in CHOICE WrappedCpmContainer in 'payload.cpm_containers.elements[o]'; message dropped.";
                return -1;
            }
        }
        
        if(*_ext_flag_514) {
        }
    
	
            return buffer - start;
        }
    } 
}