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
            logger->debug() << "|\033[38;5;94m000000\033[0m| " << tools::getTypeName(ros->its_header.protocol_version.value) << 
                         " its_header.protocol_version.value: " << static_cast<int>(ros->its_header.protocol_version.value);
        }
        
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        *_tmp_1 = ros->its_header.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m000001\033[0m| " << tools::getTypeName(ros->its_header.message_id.value) << 
                         " its_header.message_id.value: " << static_cast<int>(ros->its_header.message_id.value);
        }
        
        uint8_t* _tmp_2 = (uint8_t*) buffer++;
        *_tmp_2 = ros->its_header.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m000002\033[0m| " << tools::getTypeName(ros->its_header.station_id.value) << 
                         " its_header.station_id.value: " << ros->its_header.station_id.value;
        }
        
        uint32_t* _tmp_3 = (uint32_t*) buffer; buffer += 4;
        *_tmp_3 = ros->its_header.station_id.value; 
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
        uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Write extension flag for CpmPayload
        *_ext_flag_4 = 0;  
        
        // Optional fields bytemap
        
        // Field:  type(ManagementContainer) name(management_container) extGroup(0)
            // ManagementContainer  SEQUENCE
                //  referenceTime     TimestampIts                
                //  referencePosition ReferencePosition           
                //  segmentationInfo  MessageSegmentationInfo   OPTIONAL  
                //  messageRateRange  MessageRateRange          OPTIONAL  
                //  ...
            uint8_t* _ext_flag_5 = (uint8_t*) buffer++;  // Write extension flag for ManagementContainer
            *_ext_flag_5 = 0;  
            
            // Optional fields bytemap
            char* _tmp_4 = (char*) buffer++;
            *_tmp_4 = (ros->payload.management_container.segmentation_info.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000003\033[0m| Optional field segmentation_info = " << *_tmp_4;
            char* _tmp_5 = (char*) buffer++;
            *_tmp_5 = (ros->payload.management_container.message_rate_range.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000004\033[0m| Optional field message_rate_range = " << *_tmp_5;
            
            // Field:  type(TimestampIts) name(reference_time) extGroup(0)
            // Real
            
            // DOUBLE  min(0) max(4398046511103) span(4398046511104) scaleDivisor(1000.0) dataType(Double)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000005\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_time.value) << 
                             " payload.management_container.reference_time.value: " << ros->payload.management_container.reference_time.value;
            }
            
            double _tmp_7 = ros->payload.management_container.reference_time.value;
            _tmp_7 *= 1000.0;
            __aux64__ = static_cast<uint64_t>(_tmp_7);
            uint64_t* _tmp_6 = (uint64_t*) buffer; buffer += 8;
            *_tmp_6 = static_cast<uint64_t>(_tmp_7);
            
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
                    logger->debug() << "|\033[38;5;94m000006\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.latitude.value) << 
                                 " payload.management_container.reference_position.latitude.value: " << ros->payload.management_container.reference_position.latitude.value;
                }
                
                double _tmp_9 = ros->payload.management_container.reference_position.latitude.value;
                _tmp_9 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_9);
                _tmp_9 -= -900000000;
                uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
                *_tmp_8 = static_cast<uint32_t>(_tmp_9);
                
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
                    logger->debug() << "|\033[38;5;94m000007\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.longitude.value) << 
                                 " payload.management_container.reference_position.longitude.value: " << ros->payload.management_container.reference_position.longitude.value;
                }
                
                double _tmp_11 = ros->payload.management_container.reference_position.longitude.value;
                _tmp_11 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_11);
                _tmp_11 -= -1800000000;
                uint32_t* _tmp_10 = (uint32_t*) buffer; buffer += 4;
                *_tmp_10 = static_cast<uint32_t>(_tmp_11);
                
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
                        logger->debug() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    }
                    
                    float _tmp_13 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    _tmp_13 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_13);
                    uint16_t* _tmp_12 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_12 = static_cast<uint16_t>(_tmp_13);
                    
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
                        logger->debug() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    }
                    
                    float _tmp_15 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    _tmp_15 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_15);
                    uint16_t* _tmp_14 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_14 = static_cast<uint16_t>(_tmp_15);
                    
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
                        logger->debug() << "|\033[38;5;94m000010\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    }
                    
                    uint16_t* _tmp_16 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_16 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value; 
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
                        logger->debug() << "|\033[38;5;94m000011\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_value.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_value.value: " << ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    }
                    
                    float _tmp_18 = ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    _tmp_18 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_18);
                    _tmp_18 -= -100000;
                    uint32_t* _tmp_17 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_17 = static_cast<uint32_t>(_tmp_18);
                    
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
                        logger->debug() << "|\033[38;5;94m000012\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->payload.management_container.reference_position.altitude.altitude_confidence.value);
                    }
                    
                    uint8_t* _tmp_19 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_19 = ros->payload.management_container.reference_position.altitude.altitude_confidence.value; 
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
                        logger->debug() << "|\033[38;5;94m000013\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].total_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].total_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].total_msg_no.value);
                    }
                    
                    uint8_t* _tmp_20 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].total_msg_no.value - 1;
                    *_tmp_20 = __aux64__;
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
                        logger->debug() << "|\033[38;5;94m000014\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].this_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].this_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].this_msg_no.value);
                    }
                    
                    uint8_t* _tmp_21 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].this_msg_no.value - 1;
                    *_tmp_21 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m000015\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value);
                        }
                        
                        uint8_t* _tmp_22 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value - 1;
                        *_tmp_22 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m000016\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value);
                        }
                        
                        uint8_t* _tmp_23 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value - -5;
                        *_tmp_23 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m000017\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value);
                        }
                        
                        uint8_t* _tmp_24 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value - 1;
                        *_tmp_24 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m000018\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value);
                        }
                        
                        uint8_t* _tmp_25 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value - -5;
                        *_tmp_25 = __aux64__;
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
            
            if(*_ext_flag_5) {
            }
        
        // Field:  type(ConstraintWrappedCpmContainers) name(cpm_containers) extGroup(0)
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(8) span(8) ext(true)
        uint8_t* _ext_flag_20 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.
        *_ext_flag_20 = 0; 
        
        __aux64__ = ros->payload.cpm_containers.elements.size();
        if(__aux64__ > 8) __aux64__ = 8;
        uint16_t* _tmp_27 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_27 = __aux64__ - 1;
        
        int __ifa = __aux64__;
        for(int a = 0; a < __ifa; a++) { 
            
            // Choice
               // #0  originatingVehicleContainer   OriginatingVehicleContainer
               // #1  originatingRsuContainer   OriginatingRsuContainer
               // #2  sensorInformationContainer   SensorInformationContainer
               // #3  perceptionRegionContainer   PerceptionRegionContainer
               // #4  perceivedObjectContainer   PerceivedObjectContainer
            uint8_t* _choice_1 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->payload.cpm_containers.elements[a].originating_vehicle_container.size() != 0) {  // CHOICE 0  fieldType(WrappedCpmContainer) 
                *_choice_1 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000020\033[0m| Choice selection: 0";
            
                    // OriginatingVehicleContainer  SEQUENCE
                        //  orientationAngle Wgs84Angle         
                        //  pitchAngle       CartesianAngle   OPTIONAL  
                        //  rollAngle        CartesianAngle   OPTIONAL  
                        //  trailerDataSet   TrailerDataSet   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_22 = (uint8_t*) buffer++;  // Write extension flag for OriginatingVehicleContainer
                    *_ext_flag_22 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_28 = (char*) buffer++;
                    *_tmp_28 = (ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000021\033[0m| Optional field pitch_angle = " << *_tmp_28;
                    char* _tmp_29 = (char*) buffer++;
                    *_tmp_29 = (ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000022\033[0m| Optional field roll_angle = " << *_tmp_29;
                    char* _tmp_30 = (char*) buffer++;
                    *_tmp_30 = (ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000023\033[0m| Optional field trailer_data_set = " << *_tmp_30;
                    
                    // Field:  type(Wgs84Angle) name(orientation_angle) extGroup(0)
                        // Wgs84Angle  SEQUENCE
                            //  value      Wgs84AngleValue          
                            //  confidence Wgs84AngleConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(Wgs84AngleValue) name(value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000024\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.value.value) << 
                                         " payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.value.value: " << ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.value.value;
                        }
                        
                        float _tmp_32 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.value.value;
                        _tmp_32 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_32);
                        uint16_t* _tmp_31 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_31 = static_cast<uint16_t>(_tmp_32);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Wgs84AngleConfidence) name(confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000025\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.confidence.value) << 
                                         " payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.confidence.value);
                        }
                        
                        float _tmp_34 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.confidence.value;
                        _tmp_34 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_34);
                        _tmp_34 -= 1;
                        uint8_t* _tmp_33 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_33 = static_cast<uint8_t>(_tmp_34);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    if(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(pitch_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000026\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].value.value: " << ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].value.value;
                            }
                            
                            float _tmp_36 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].value.value;
                            _tmp_36 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_36);
                            uint16_t* _tmp_35 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_35 = static_cast<uint16_t>(_tmp_36);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000027\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].confidence.value);
                            }
                            
                            float _tmp_38 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].confidence.value;
                            _tmp_38 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_38);
                            _tmp_38 -= 1;
                            uint8_t* _tmp_37 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_37 = static_cast<uint8_t>(_tmp_38);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(roll_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].value.value: " << ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].value.value;
                            }
                            
                            float _tmp_40 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].value.value;
                            _tmp_40 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_40);
                            uint16_t* _tmp_39 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_39 = static_cast<uint16_t>(_tmp_40);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].confidence.value);
                            }
                            
                            float _tmp_42 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].confidence.value;
                            _tmp_42 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_42);
                            _tmp_42 -= 1;
                            uint8_t* _tmp_41 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_41 = static_cast<uint8_t>(_tmp_42);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set.size() != 0) {
                        // Field:  type(TrailerDataSet) name(trailer_data_set) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(8) span(8) ext(true)
                        uint8_t* _ext_flag_29 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].
                        *_ext_flag_29 = 0; 
                        
                        __aux64__ = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        uint16_t* _tmp_43 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_43 = __aux64__ - 1;
                        
                        int __ifb = __aux64__;
                        for(int b = 0; b < __ifb; b++) { 
                            
                                // TrailerData  SEQUENCE
                                    //  refPointId       Identifier1B         
                                    //  hitchPointOffset StandardLength1B     
                                    //  frontOverhang    StandardLength1B   OPTIONAL  
                                    //  rearOverhang     StandardLength1B   OPTIONAL  
                                    //  trailerWidth     VehicleWidth       OPTIONAL  
                                    //  hitchAngle       CartesianAngle       
                                    //  ...
                                uint8_t* _ext_flag_30 = (uint8_t*) buffer++;  // Write extension flag for TrailerData
                                *_ext_flag_30 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_44 = (char*) buffer++;
                                *_tmp_44 = (ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000031\033[0m| Optional field front_overhang = " << *_tmp_44;
                                char* _tmp_45 = (char*) buffer++;
                                *_tmp_45 = (ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000032\033[0m| Optional field rear_overhang = " << *_tmp_45;
                                char* _tmp_46 = (char*) buffer++;
                                *_tmp_46 = (ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000033\033[0m| Optional field trailer_width = " << *_tmp_46;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000034\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_47 = (uint8_t*) buffer++;
                                *_tmp_47 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(hitch_point_offset) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000035\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_point_offset.value) << 
                                                 " payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_point_offset.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_point_offset.value);
                                }
                                
                                float _tmp_49 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_point_offset.value;
                                _tmp_49 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_49);
                                uint8_t* _tmp_48 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_48 = static_cast<uint8_t>(_tmp_49);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_point_offset.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_point_offset.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(front_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000036\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang[0].value);
                                    }
                                    
                                    float _tmp_51 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang[0].value;
                                    _tmp_51 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_51);
                                    uint8_t* _tmp_50 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_50 = static_cast<uint8_t>(_tmp_51);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].front_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(rear_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000037\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang[0].value);
                                    }
                                    
                                    float _tmp_53 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang[0].value;
                                    _tmp_53 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_53);
                                    uint8_t* _tmp_52 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_52 = static_cast<uint8_t>(_tmp_53);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].rear_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width.size() != 0) {
                                    // Field:  type(VehicleWidth) name(trailer_width) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000038\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width[0].value) << 
                                                     " payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width[0].value);
                                    }
                                    
                                    float _tmp_55 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width[0].value;
                                    _tmp_55 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_55);
                                    _tmp_55 -= 1;
                                    uint8_t* _tmp_54 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_54 = static_cast<uint8_t>(_tmp_55);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].trailer_width[0].value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
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
                                        logger->debug() << "|\033[38;5;94m000039\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.value.value) << 
                                                     " payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.value.value: " << ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.value.value;
                                    }
                                    
                                    float _tmp_57 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.value.value;
                                    _tmp_57 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_57);
                                    uint16_t* _tmp_56 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_56 = static_cast<uint16_t>(_tmp_57);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000040\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.confidence.value) << 
                                                     " payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.confidence.value);
                                    }
                                    
                                    float _tmp_59 = ros->payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.confidence.value;
                                    _tmp_59 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_59);
                                    _tmp_59 -= 1;
                                    uint8_t* _tmp_58 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_58 = static_cast<uint8_t>(_tmp_59);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_vehicle_container[0].trailer_data_set[0].elements[b].hitch_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                        return -1;
                                    }
                                
                                if(*_ext_flag_30) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_22) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[a].originating_rsu_container.size() != 0)  // CHOICE 1  fieldType(WrappedCpmContainer) 
            {
                *_choice_1 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000041\033[0m| Choice selection: 1";
            
                    // OriginatingRsuContainer  SEQUENCE
                        //  mapReference MapReference   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_38 = (uint8_t*) buffer++;  // Write extension flag for OriginatingRsuContainer
                    *_ext_flag_38 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_62 = (char*) buffer++;
                    *_tmp_62 = (ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000042\033[0m| Optional field map_reference = " << *_tmp_62;
                    
                    if(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference.size() != 0) {
                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                        // Choice
                           // #0  roadsegment   RoadSegmentReferenceId
                           // #1  intersection   IntersectionReferenceId
                        uint8_t* _choice_2 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                            *_choice_2 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000043\033[0m| Choice selection: 0";
                        
                                // RoadSegmentReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_63 = (char*) buffer++;
                                *_tmp_63 = (ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000044\033[0m| Optional field region = " << *_tmp_63;
                                
                                if(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000045\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_64 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_64 = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000046\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value) << 
                                                 " payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                }
                                
                                uint16_t* _tmp_65 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_65 = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                        {
                            *_choice_2 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000047\033[0m| Choice selection: 1";
                        
                                // IntersectionReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_66 = (char*) buffer++;
                                *_tmp_66 = (ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000048\033[0m| Optional field region = " << *_tmp_66;
                                
                                if(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000049\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_67 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_67 = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000050\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].id.value) << 
                                                 " payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                }
                                
                                uint16_t* _tmp_68 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_68 = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_2) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[a].originating_rsu_container[0].map_reference[0]'; message dropped.";
                            return -1;
                        }
                    }
                    
                    if(*_ext_flag_38) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[a].sensor_information_container.size() != 0)  // CHOICE 2  fieldType(WrappedCpmContainer) 
            {
                *_choice_1 = 2;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000051\033[0m| Choice selection: 2";
            
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                uint8_t* _ext_flag_44 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].sensor_information_container[0].
                *_ext_flag_44 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements.size();
                if(__aux64__ > 128) __aux64__ = 128;
                uint16_t* _tmp_70 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_70 = __aux64__ - 1;
                
                int __ifc = __aux64__;
                for(int c = 0; c < __ifc; c++) { 
                    
                        // SensorInformation  SEQUENCE
                            //  sensorId                   Identifier1B                           
                            //  sensorType                 SensorType                             
                            //  perceptionRegionShape      Shape                                OPTIONAL  
                            //  perceptionRegionConfidence ConfidenceLevel                      OPTIONAL  
                            //  shadowingApplies           SensorInformation_shadowingApplies     
                            //  ...
                        uint8_t* _ext_flag_45 = (uint8_t*) buffer++;  // Write extension flag for SensorInformation
                        *_ext_flag_45 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_71 = (char*) buffer++;
                        *_tmp_71 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000053\033[0m| Optional field perception_region_shape = " << *_tmp_71;
                        char* _tmp_72 = (char*) buffer++;
                        *_tmp_72 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000054\033[0m| Optional field perception_region_confidence = " << *_tmp_72;
                        
                        // Field:  type(Identifier1B) name(sensor_id) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000055\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_id.value) << 
                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_id.value);
                        }
                        
                        uint8_t* _tmp_73 = (uint8_t*) buffer++;
                        *_tmp_73 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_id.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SensorType) name(sensor_type) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(31) span(32) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000056\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_type.value) << 
                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_type.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_type.value);
                        }
                        
                        uint8_t* _tmp_74 = (uint8_t*) buffer++;
                        *_tmp_74 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_type.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_type.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 31) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].sensor_type.value' (" << __aux64__ << ") exceeds max allowable (31); message dropped.";
                            return -1;
                        }
                        
                        if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape.size() != 0) {
                            // Field:  type(Shape) name(perception_region_shape) extGroup(0)
                            // Choice
                               // #0  rectangular   RectangularShape
                               // #1  circular   CircularShape
                               // #2  polygonal   PolygonalShape
                               // #3  elliptical   EllipticalShape
                               // #4  radial   RadialShape
                               // #5  radialShapes   RadialShapes
                            uint8_t* _ext_flag_48 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_48 = 0; 
                            
                            uint8_t* _choice_3 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                *_choice_3 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000057\033[0m| Choice selection: 0";
                            
                                    // RectangularShape  SEQUENCE
                                        //  centerPoint CartesianPosition3d   OPTIONAL  
                                        //  semiLength  StandardLength12b       
                                        //  semiBreadth StandardLength12b       
                                        //  orientation Wgs84AngleValue       OPTIONAL  
                                        //  height      StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_75 = (char*) buffer++;
                                    *_tmp_75 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000058\033[0m| Optional field center_point = " << *_tmp_75;
                                    char* _tmp_76 = (char*) buffer++;
                                    *_tmp_76 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000059\033[0m| Optional field orientation = " << *_tmp_76;
                                    char* _tmp_77 = (char*) buffer++;
                                    *_tmp_77 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000060\033[0m| Optional field height = " << *_tmp_77;
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_78 = (char*) buffer++;
                                            *_tmp_78 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000061\033[0m| Optional field z_coordinate = " << *_tmp_78;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000062\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_80 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            _tmp_80 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_80);
                                            _tmp_80 -= -32768;
                                            uint16_t* _tmp_79 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_79 = static_cast<uint16_t>(_tmp_80);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000063\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_82 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            _tmp_82 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_82);
                                            _tmp_82 -= -32768;
                                            uint16_t* _tmp_81 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_81 = static_cast<uint16_t>(_tmp_82);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000064\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_84 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                _tmp_84 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_84);
                                                _tmp_84 -= -32768;
                                                uint16_t* _tmp_83 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_83 = static_cast<uint16_t>(_tmp_84);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000065\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_length.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_length.value;
                                    }
                                    
                                    float _tmp_86 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_length.value;
                                    _tmp_86 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_86);
                                    uint16_t* _tmp_85 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_85 = static_cast<uint16_t>(_tmp_86);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000066\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_breadth.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    }
                                    
                                    float _tmp_88 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    _tmp_88 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_88);
                                    uint16_t* _tmp_87 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_87 = static_cast<uint16_t>(_tmp_88);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000067\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_90 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        _tmp_90 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_90);
                                        uint16_t* _tmp_89 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_89 = static_cast<uint16_t>(_tmp_90);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000068\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height[0].value;
                                        }
                                        
                                        float _tmp_92 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height[0].value;
                                        _tmp_92 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_92);
                                        uint16_t* _tmp_91 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_91 = static_cast<uint16_t>(_tmp_92);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                            {
                                *_choice_3 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000069\033[0m| Choice selection: 1";
                            
                                    // CircularShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  radius              StandardLength12b       
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_93 = (char*) buffer++;
                                    *_tmp_93 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000070\033[0m| Optional field shape_reference_point = " << *_tmp_93;
                                    char* _tmp_94 = (char*) buffer++;
                                    *_tmp_94 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000071\033[0m| Optional field height = " << *_tmp_94;
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_95 = (char*) buffer++;
                                            *_tmp_95 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000072\033[0m| Optional field z_coordinate = " << *_tmp_95;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000073\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_97 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_97 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_97);
                                            _tmp_97 -= -32768;
                                            uint16_t* _tmp_96 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_96 = static_cast<uint16_t>(_tmp_97);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000074\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_99 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_99 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_99);
                                            _tmp_99 -= -32768;
                                            uint16_t* _tmp_98 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_98 = static_cast<uint16_t>(_tmp_99);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000075\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_101 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_101 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_101);
                                                _tmp_101 -= -32768;
                                                uint16_t* _tmp_100 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_100 = static_cast<uint16_t>(_tmp_101);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000076\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].radius.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].radius.value;
                                    }
                                    
                                    float _tmp_103 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].radius.value;
                                    _tmp_103 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_103);
                                    uint16_t* _tmp_102 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_102 = static_cast<uint16_t>(_tmp_103);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000077\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height[0].value;
                                        }
                                        
                                        float _tmp_105 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height[0].value;
                                        _tmp_105 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_105);
                                        uint16_t* _tmp_104 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_104 = static_cast<uint16_t>(_tmp_105);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                            {
                                *_choice_3 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000078\033[0m| Choice selection: 2";
                            
                                    // PolygonalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                        //  polygon             SequenceOfCartesianPosition3d     
                                        //  height              StandardLength12b               OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_106 = (char*) buffer++;
                                    *_tmp_106 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000079\033[0m| Optional field shape_reference_point = " << *_tmp_106;
                                    char* _tmp_107 = (char*) buffer++;
                                    *_tmp_107 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000080\033[0m| Optional field height = " << *_tmp_107;
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_108 = (char*) buffer++;
                                            *_tmp_108 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000081\033[0m| Optional field z_coordinate = " << *_tmp_108;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000082\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_110 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_110 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_110);
                                            _tmp_110 -= -32768;
                                            uint16_t* _tmp_109 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_109 = static_cast<uint16_t>(_tmp_110);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000083\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_112 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_112 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_112);
                                            _tmp_112 -= -32768;
                                            uint16_t* _tmp_111 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_111 = static_cast<uint16_t>(_tmp_112);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000084\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_114 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_114 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_114);
                                                _tmp_114 -= -32768;
                                                uint16_t* _tmp_113 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_113 = static_cast<uint16_t>(_tmp_114);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_64 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.
                                    *_ext_flag_64 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_115 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_115 = __aux64__ - 1;
                                    
                                    int __ifd = __aux64__;
                                    for(int d = 0; d < __ifd; d++) { 
                                        
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_116 = (char*) buffer++;
                                            *_tmp_116 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000086\033[0m| Optional field z_coordinate = " << *_tmp_116;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000087\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].x_coordinate.value;
                                            }
                                            
                                            float _tmp_118 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].x_coordinate.value;
                                            _tmp_118 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_118);
                                            _tmp_118 -= -32768;
                                            uint16_t* _tmp_117 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_117 = static_cast<uint16_t>(_tmp_118);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000088\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].y_coordinate.value;
                                            }
                                            
                                            float _tmp_120 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].y_coordinate.value;
                                            _tmp_120 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_120);
                                            _tmp_120 -= -32768;
                                            uint16_t* _tmp_119 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_119 = static_cast<uint16_t>(_tmp_120);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000089\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_122 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate[0].value;
                                                _tmp_122 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_122);
                                                _tmp_122 -= -32768;
                                                uint16_t* _tmp_121 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_121 = static_cast<uint16_t>(_tmp_122);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].polygon.elements[d].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000090\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height[0].value;
                                        }
                                        
                                        float _tmp_124 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height[0].value;
                                        _tmp_124 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_124);
                                        uint16_t* _tmp_123 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_123 = static_cast<uint16_t>(_tmp_124);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                            {
                                *_choice_3 = 3;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000091\033[0m| Choice selection: 3";
                            
                                    // EllipticalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  semiMajorAxisLength StandardLength12b       
                                        //  semiMinorAxisLength StandardLength12b       
                                        //  orientation         Wgs84AngleValue       OPTIONAL  
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_125 = (char*) buffer++;
                                    *_tmp_125 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000092\033[0m| Optional field shape_reference_point = " << *_tmp_125;
                                    char* _tmp_126 = (char*) buffer++;
                                    *_tmp_126 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000093\033[0m| Optional field orientation = " << *_tmp_126;
                                    char* _tmp_127 = (char*) buffer++;
                                    *_tmp_127 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000094\033[0m| Optional field height = " << *_tmp_127;
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_128 = (char*) buffer++;
                                            *_tmp_128 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000095\033[0m| Optional field z_coordinate = " << *_tmp_128;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000096\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_130 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_130 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_130);
                                            _tmp_130 -= -32768;
                                            uint16_t* _tmp_129 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_129 = static_cast<uint16_t>(_tmp_130);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000097\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_132 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_132 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_132);
                                            _tmp_132 -= -32768;
                                            uint16_t* _tmp_131 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_131 = static_cast<uint16_t>(_tmp_132);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000098\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_134 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_134 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_134);
                                                _tmp_134 -= -32768;
                                                uint16_t* _tmp_133 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_133 = static_cast<uint16_t>(_tmp_134);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000099\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    }
                                    
                                    float _tmp_136 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    _tmp_136 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_136);
                                    uint16_t* _tmp_135 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_135 = static_cast<uint16_t>(_tmp_136);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000100\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    }
                                    
                                    float _tmp_138 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    _tmp_138 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_138);
                                    uint16_t* _tmp_137 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_137 = static_cast<uint16_t>(_tmp_138);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000101\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_140 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        _tmp_140 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_140);
                                        uint16_t* _tmp_139 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_139 = static_cast<uint16_t>(_tmp_140);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000102\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height[0].value;
                                        }
                                        
                                        float _tmp_142 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height[0].value;
                                        _tmp_142 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_142);
                                        uint16_t* _tmp_141 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_141 = static_cast<uint16_t>(_tmp_142);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                            {
                                *_choice_3 = 4;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000103\033[0m| Choice selection: 4";
                            
                                    // RadialShape  SEQUENCE
                                        //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                        //  range                                 StandardLength12b       
                                        //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                        //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                        //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                        //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_143 = (char*) buffer++;
                                    *_tmp_143 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000104\033[0m| Optional field shape_reference_point = " << *_tmp_143;
                                    char* _tmp_144 = (char*) buffer++;
                                    *_tmp_144 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000105\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_144;
                                    char* _tmp_145 = (char*) buffer++;
                                    *_tmp_145 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000106\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_145;
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_146 = (char*) buffer++;
                                            *_tmp_146 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000107\033[0m| Optional field z_coordinate = " << *_tmp_146;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000108\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_148 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_148 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_148);
                                            _tmp_148 -= -32768;
                                            uint16_t* _tmp_147 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_147 = static_cast<uint16_t>(_tmp_148);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000109\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_150 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_150 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_150);
                                            _tmp_150 -= -32768;
                                            uint16_t* _tmp_149 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_149 = static_cast<uint16_t>(_tmp_150);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000110\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_152 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_152 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_152);
                                                _tmp_152 -= -32768;
                                                uint16_t* _tmp_151 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_151 = static_cast<uint16_t>(_tmp_152);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000111\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].range.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].range.value;
                                    }
                                    
                                    float _tmp_154 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].range.value;
                                    _tmp_154 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_154);
                                    uint16_t* _tmp_153 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_153 = static_cast<uint16_t>(_tmp_154);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000112\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    }
                                    
                                    float _tmp_156 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    _tmp_156 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_156);
                                    uint16_t* _tmp_155 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_155 = static_cast<uint16_t>(_tmp_156);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000113\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    }
                                    
                                    float _tmp_158 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    _tmp_158 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_158);
                                    uint16_t* _tmp_157 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_157 = static_cast<uint16_t>(_tmp_158);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000114\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        }
                                        
                                        float _tmp_160 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        _tmp_160 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_160);
                                        uint16_t* _tmp_159 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_159 = static_cast<uint16_t>(_tmp_160);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000115\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        }
                                        
                                        float _tmp_162 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        _tmp_162 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_162);
                                        uint16_t* _tmp_161 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_161 = static_cast<uint16_t>(_tmp_162);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                            {
                                *_choice_3 = 5;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000116\033[0m| Choice selection: 5";
                            
                                    // RadialShapes  SEQUENCE
                                        //  refPointId       Identifier1B                 
                                        //  xCoordinate      CartesianCoordinateSmall     
                                        //  yCoordinate      CartesianCoordinateSmall     
                                        //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                        //  radialShapesList RadialShapesList             
                                    // Optional fields bytemap
                                    char* _tmp_163 = (char*) buffer++;
                                    *_tmp_163 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000117\033[0m| Optional field z_coordinate = " << *_tmp_163;
                                    
                                    // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000118\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].ref_point_id.value);
                                    }
                                    
                                    uint8_t* _tmp_164 = (uint8_t*) buffer++;
                                    *_tmp_164 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].ref_point_id.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].ref_point_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000119\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    }
                                    
                                    float _tmp_166 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    _tmp_166 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_166);
                                    _tmp_166 -= -3094;
                                    uint16_t* _tmp_165 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_165 = static_cast<uint16_t>(_tmp_166);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000120\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                     " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    }
                                    
                                    float _tmp_168 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    _tmp_168 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_168);
                                    _tmp_168 -= -3094;
                                    uint16_t* _tmp_167 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_167 = static_cast<uint16_t>(_tmp_168);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                        // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000121\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                         " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        }
                                        
                                        float _tmp_170 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        _tmp_170 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_170);
                                        _tmp_170 -= -3094;
                                        uint16_t* _tmp_169 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_169 = static_cast<uint16_t>(_tmp_170);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_88 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.
                                    *_ext_flag_88 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_171 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_171 = __aux64__ - 1;
                                    
                                    int __ife = __aux64__;
                                    for(int e = 0; e < __ife; e++) { 
                                        
                                            // RadialShapeDetails  SEQUENCE
                                                //  range                       StandardLength12b       
                                                //  horizontalOpeningAngleStart CartesianAngleValue     
                                                //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_172 = (char*) buffer++;
                                            *_tmp_172 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000123\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_172;
                                            char* _tmp_173 = (char*) buffer++;
                                            *_tmp_173 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000124\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_173;
                                            
                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000125\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].range.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].range.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].range.value;
                                            }
                                            
                                            float _tmp_175 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].range.value;
                                            _tmp_175 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_175);
                                            uint16_t* _tmp_174 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_174 = static_cast<uint16_t>(_tmp_175);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000126\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_start.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_start.value;
                                            }
                                            
                                            float _tmp_177 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_start.value;
                                            _tmp_177 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_177);
                                            uint16_t* _tmp_176 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_176 = static_cast<uint16_t>(_tmp_177);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000127\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_end.value) << 
                                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_end.value;
                                            }
                                            
                                            float _tmp_179 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_end.value;
                                            _tmp_179 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_179);
                                            uint16_t* _tmp_178 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_178 = static_cast<uint16_t>(_tmp_179);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000128\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start[0].value;
                                                }
                                                
                                                float _tmp_181 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start[0].value;
                                                _tmp_181 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_181);
                                                uint16_t* _tmp_180 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_180 = static_cast<uint16_t>(_tmp_181);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000129\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end[0].value) << 
                                                                 " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end[0].value;
                                                }
                                                
                                                float _tmp_183 = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end[0].value;
                                                _tmp_183 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_183);
                                                uint16_t* _tmp_182 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_182 = static_cast<uint16_t>(_tmp_183);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[e].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_3) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_shape[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence.size() != 0) {
                            // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(101) span(101) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000130\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence[0].value) << 
                                             " payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence[0].value);
                            }
                            
                            uint8_t* _tmp_184 = (uint8_t*) buffer++;
                            __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence[0].value - 1;
                            *_tmp_184 = __aux64__;
                            __aux64__ = ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].perception_region_confidence[0].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(SensorInformation_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_185 = (uint8_t*)buffer++;
                        *_tmp_185 = (ros->payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000131\033[0m| payload.cpm_containers.elements[a].sensor_information_container[0].elements[c].shadowing_applies: " << (*_tmp_185);
                        
                        if(*_ext_flag_45) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[a].perception_region_container.size() != 0)  // CHOICE 3  fieldType(WrappedCpmContainer) 
            {
                *_choice_1 = 3;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000132\033[0m| Choice selection: 3";
            
                // SequenceOf
                // Data Type UInt16
                // SEQUENCE_OF  min(1) max(256) span(256) ext(true)
                uint8_t* _ext_flag_95 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perception_region_container[0].
                *_ext_flag_95 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements.size();
                if(__aux64__ > 256) __aux64__ = 256;
                uint16_t* _tmp_187 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_187 = __aux64__ - 1;
                
                int __iff = __aux64__;
                for(int f = 0; f < __iff; f++) { 
                    
                        // PerceptionRegion  SEQUENCE
                            //  measurementDeltaTime       DeltaTimeMilliSecondSigned            
                            //  perceptionRegionConfidence ConfidenceLevel                       
                            //  perceptionRegionShape      Shape                                 
                            //  shadowingApplies           PerceptionRegion_shadowingApplies     
                            //  sensorIdList               SequenceOfIdentifier1B              OPTIONAL  
                            //  numberOfPerceivedObjects   CardinalNumber1B                    OPTIONAL  
                            //  perceivedObjectIds         PerceivedObjectIds                  OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_96 = (uint8_t*) buffer++;  // Write extension flag for PerceptionRegion
                        *_ext_flag_96 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_188 = (char*) buffer++;
                        *_tmp_188 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000134\033[0m| Optional field sensor_id_list = " << *_tmp_188;
                        char* _tmp_189 = (char*) buffer++;
                        *_tmp_189 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000135\033[0m| Optional field number_of_perceived_objects = " << *_tmp_189;
                        char* _tmp_190 = (char*) buffer++;
                        *_tmp_190 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000136\033[0m| Optional field perceived_object_ids = " << *_tmp_190;
                        
                        // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000137\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].measurement_delta_time.value) << 
                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].measurement_delta_time.value;
                        }
                        
                        float _tmp_192 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].measurement_delta_time.value;
                        _tmp_192 *= 1000.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_192);
                        _tmp_192 -= -2048;
                        uint16_t* _tmp_191 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_191 = static_cast<uint16_t>(_tmp_192);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000138\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_confidence.value) << 
                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_confidence.value);
                        }
                        
                        uint8_t* _tmp_193 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_confidence.value - 1;
                        *_tmp_193 = __aux64__;
                        __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_confidence.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
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
                        uint8_t* _ext_flag_99 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_99 = 0; 
                        
                        uint8_t* _choice_4 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_4 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000139\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  centerPoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength  StandardLength12b       
                                    //  semiBreadth StandardLength12b       
                                    //  orientation Wgs84AngleValue       OPTIONAL  
                                    //  height      StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_194 = (char*) buffer++;
                                *_tmp_194 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000140\033[0m| Optional field center_point = " << *_tmp_194;
                                char* _tmp_195 = (char*) buffer++;
                                *_tmp_195 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000141\033[0m| Optional field orientation = " << *_tmp_195;
                                char* _tmp_196 = (char*) buffer++;
                                *_tmp_196 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000142\033[0m| Optional field height = " << *_tmp_196;
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_197 = (char*) buffer++;
                                        *_tmp_197 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000143\033[0m| Optional field z_coordinate = " << *_tmp_197;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000144\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_199 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        _tmp_199 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_199);
                                        _tmp_199 -= -32768;
                                        uint16_t* _tmp_198 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_198 = static_cast<uint16_t>(_tmp_199);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000145\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_201 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        _tmp_201 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_201);
                                        _tmp_201 -= -32768;
                                        uint16_t* _tmp_200 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_200 = static_cast<uint16_t>(_tmp_201);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000146\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_203 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            _tmp_203 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_203);
                                            _tmp_203 -= -32768;
                                            uint16_t* _tmp_202 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_202 = static_cast<uint16_t>(_tmp_203);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000147\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_length.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_205 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_length.value;
                                _tmp_205 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_205);
                                uint16_t* _tmp_204 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_204 = static_cast<uint16_t>(_tmp_205);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000148\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_breadth.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_207 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_breadth.value;
                                _tmp_207 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_207);
                                uint16_t* _tmp_206 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_206 = static_cast<uint16_t>(_tmp_207);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000149\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_209 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation[0].value;
                                    _tmp_209 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_209);
                                    uint16_t* _tmp_208 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_208 = static_cast<uint16_t>(_tmp_209);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000150\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_211 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height[0].value;
                                    _tmp_211 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_211);
                                    uint16_t* _tmp_210 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_210 = static_cast<uint16_t>(_tmp_211);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_4 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000151\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_212 = (char*) buffer++;
                                *_tmp_212 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000152\033[0m| Optional field shape_reference_point = " << *_tmp_212;
                                char* _tmp_213 = (char*) buffer++;
                                *_tmp_213 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000153\033[0m| Optional field height = " << *_tmp_213;
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_214 = (char*) buffer++;
                                        *_tmp_214 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000154\033[0m| Optional field z_coordinate = " << *_tmp_214;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000155\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_216 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_216 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_216);
                                        _tmp_216 -= -32768;
                                        uint16_t* _tmp_215 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_215 = static_cast<uint16_t>(_tmp_216);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000156\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_218 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_218 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_218);
                                        _tmp_218 -= -32768;
                                        uint16_t* _tmp_217 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_217 = static_cast<uint16_t>(_tmp_218);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000157\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_220 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_220 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_220);
                                            _tmp_220 -= -32768;
                                            uint16_t* _tmp_219 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_219 = static_cast<uint16_t>(_tmp_220);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000158\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].radius.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].radius.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].radius.value;
                                }
                                
                                float _tmp_222 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].radius.value;
                                _tmp_222 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_222);
                                uint16_t* _tmp_221 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_221 = static_cast<uint16_t>(_tmp_222);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000159\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_224 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height[0].value;
                                    _tmp_224 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_224);
                                    uint16_t* _tmp_223 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_223 = static_cast<uint16_t>(_tmp_224);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_4 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000160\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_225 = (char*) buffer++;
                                *_tmp_225 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000161\033[0m| Optional field shape_reference_point = " << *_tmp_225;
                                char* _tmp_226 = (char*) buffer++;
                                *_tmp_226 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000162\033[0m| Optional field height = " << *_tmp_226;
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_227 = (char*) buffer++;
                                        *_tmp_227 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000163\033[0m| Optional field z_coordinate = " << *_tmp_227;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000164\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_229 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_229 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_229);
                                        _tmp_229 -= -32768;
                                        uint16_t* _tmp_228 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_228 = static_cast<uint16_t>(_tmp_229);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000165\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_231 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_231 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_231);
                                        _tmp_231 -= -32768;
                                        uint16_t* _tmp_230 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_230 = static_cast<uint16_t>(_tmp_231);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000166\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_233 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_233 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_233);
                                            _tmp_233 -= -32768;
                                            uint16_t* _tmp_232 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_232 = static_cast<uint16_t>(_tmp_233);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_115 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.
                                *_ext_flag_115 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_234 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_234 = __aux64__ - 1;
                                
                                int __ifg = __aux64__;
                                for(int g = 0; g < __ifg; g++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_235 = (char*) buffer++;
                                        *_tmp_235 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000168\033[0m| Optional field z_coordinate = " << *_tmp_235;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000169\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].x_coordinate.value;
                                        }
                                        
                                        float _tmp_237 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].x_coordinate.value;
                                        _tmp_237 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_237);
                                        _tmp_237 -= -32768;
                                        uint16_t* _tmp_236 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_236 = static_cast<uint16_t>(_tmp_237);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000170\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].y_coordinate.value;
                                        }
                                        
                                        float _tmp_239 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].y_coordinate.value;
                                        _tmp_239 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_239);
                                        _tmp_239 -= -32768;
                                        uint16_t* _tmp_238 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_238 = static_cast<uint16_t>(_tmp_239);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000171\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_241 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate[0].value;
                                            _tmp_241 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_241);
                                            _tmp_241 -= -32768;
                                            uint16_t* _tmp_240 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_240 = static_cast<uint16_t>(_tmp_241);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].polygon.elements[g].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000172\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_243 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height[0].value;
                                    _tmp_243 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_243);
                                    uint16_t* _tmp_242 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_242 = static_cast<uint16_t>(_tmp_243);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_4 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000173\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         Wgs84AngleValue       OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_244 = (char*) buffer++;
                                *_tmp_244 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000174\033[0m| Optional field shape_reference_point = " << *_tmp_244;
                                char* _tmp_245 = (char*) buffer++;
                                *_tmp_245 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000175\033[0m| Optional field orientation = " << *_tmp_245;
                                char* _tmp_246 = (char*) buffer++;
                                *_tmp_246 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000176\033[0m| Optional field height = " << *_tmp_246;
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_247 = (char*) buffer++;
                                        *_tmp_247 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000177\033[0m| Optional field z_coordinate = " << *_tmp_247;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000178\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_249 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_249 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_249);
                                        _tmp_249 -= -32768;
                                        uint16_t* _tmp_248 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_248 = static_cast<uint16_t>(_tmp_249);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000179\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_251 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_251 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_251);
                                        _tmp_251 -= -32768;
                                        uint16_t* _tmp_250 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_250 = static_cast<uint16_t>(_tmp_251);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000180\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_253 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_253 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_253);
                                            _tmp_253 -= -32768;
                                            uint16_t* _tmp_252 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_252 = static_cast<uint16_t>(_tmp_253);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000181\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_major_axis_length.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_255 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                _tmp_255 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_255);
                                uint16_t* _tmp_254 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_254 = static_cast<uint16_t>(_tmp_255);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000182\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_minor_axis_length.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_257 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                _tmp_257 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_257);
                                uint16_t* _tmp_256 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_256 = static_cast<uint16_t>(_tmp_257);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000183\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_259 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation[0].value;
                                    _tmp_259 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_259);
                                    uint16_t* _tmp_258 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_258 = static_cast<uint16_t>(_tmp_259);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000184\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_261 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height[0].value;
                                    _tmp_261 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_261);
                                    uint16_t* _tmp_260 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_260 = static_cast<uint16_t>(_tmp_261);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_4 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000185\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                    //  range                                 StandardLength12b       
                                    //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                    //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                    //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_262 = (char*) buffer++;
                                *_tmp_262 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000186\033[0m| Optional field shape_reference_point = " << *_tmp_262;
                                char* _tmp_263 = (char*) buffer++;
                                *_tmp_263 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000187\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_263;
                                char* _tmp_264 = (char*) buffer++;
                                *_tmp_264 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000188\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_264;
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_265 = (char*) buffer++;
                                        *_tmp_265 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000189\033[0m| Optional field z_coordinate = " << *_tmp_265;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000190\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_267 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_267 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_267);
                                        _tmp_267 -= -32768;
                                        uint16_t* _tmp_266 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_266 = static_cast<uint16_t>(_tmp_267);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000191\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_269 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_269 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_269);
                                        _tmp_269 -= -32768;
                                        uint16_t* _tmp_268 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_268 = static_cast<uint16_t>(_tmp_269);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000192\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_271 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_271 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_271);
                                            _tmp_271 -= -32768;
                                            uint16_t* _tmp_270 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_270 = static_cast<uint16_t>(_tmp_271);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000193\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].range.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].range.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].range.value;
                                }
                                
                                float _tmp_273 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].range.value;
                                _tmp_273 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_273);
                                uint16_t* _tmp_272 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_272 = static_cast<uint16_t>(_tmp_273);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000194\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_275 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                _tmp_275 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_275);
                                uint16_t* _tmp_274 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_274 = static_cast<uint16_t>(_tmp_275);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000195\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_277 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                _tmp_277 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_277);
                                uint16_t* _tmp_276 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_276 = static_cast<uint16_t>(_tmp_277);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000196\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_279 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_279 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_279);
                                    uint16_t* _tmp_278 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_278 = static_cast<uint16_t>(_tmp_279);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000197\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_281 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_281 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_281);
                                    uint16_t* _tmp_280 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_280 = static_cast<uint16_t>(_tmp_281);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_4 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000198\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_282 = (char*) buffer++;
                                *_tmp_282 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000199\033[0m| Optional field z_coordinate = " << *_tmp_282;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000200\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_283 = (uint8_t*) buffer++;
                                *_tmp_283 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000201\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].x_coordinate.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_285 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                _tmp_285 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_285);
                                _tmp_285 -= -3094;
                                uint16_t* _tmp_284 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_284 = static_cast<uint16_t>(_tmp_285);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000202\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].y_coordinate.value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_287 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                _tmp_287 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_287);
                                _tmp_287 -= -3094;
                                uint16_t* _tmp_286 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_286 = static_cast<uint16_t>(_tmp_287);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000203\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate[0].value) << 
                                                     " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_289 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    _tmp_289 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_289);
                                    _tmp_289 -= -3094;
                                    uint16_t* _tmp_288 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_288 = static_cast<uint16_t>(_tmp_289);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_139 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.
                                *_ext_flag_139 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_290 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_290 = __aux64__ - 1;
                                
                                int __ifh = __aux64__;
                                for(int h = 0; h < __ifh; h++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_291 = (char*) buffer++;
                                        *_tmp_291 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000205\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_291;
                                        char* _tmp_292 = (char*) buffer++;
                                        *_tmp_292 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000206\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_292;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000207\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].range.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].range.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].range.value;
                                        }
                                        
                                        float _tmp_294 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].range.value;
                                        _tmp_294 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_294);
                                        uint16_t* _tmp_293 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_293 = static_cast<uint16_t>(_tmp_294);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000208\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_start.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_296 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_start.value;
                                        _tmp_296 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_296);
                                        uint16_t* _tmp_295 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_295 = static_cast<uint16_t>(_tmp_296);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000209\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_end.value) << 
                                                         " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_298 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_end.value;
                                        _tmp_298 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_298);
                                        uint16_t* _tmp_297 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_297 = static_cast<uint16_t>(_tmp_298);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000210\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_300 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start[0].value;
                                            _tmp_300 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_300);
                                            uint16_t* _tmp_299 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_299 = static_cast<uint16_t>(_tmp_300);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000211\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end[0].value) << 
                                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_302 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end[0].value;
                                            _tmp_302 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_302);
                                            uint16_t* _tmp_301 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_301 = static_cast<uint16_t>(_tmp_302);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[h].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_4) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perception_region_shape'; message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(PerceptionRegion_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_303 = (uint8_t*)buffer++;
                        *_tmp_303 = (ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000212\033[0m| payload.cpm_containers.elements[a].perception_region_container[0].elements[f].shadowing_applies: " << (*_tmp_303);
                        
                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list.size() != 0) {
                            // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                            uint8_t* _ext_flag_145 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].
                            *_ext_flag_145 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements.size();
                            if(__aux64__ > 128) __aux64__ = 128;
                            uint16_t* _tmp_304 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_304 = __aux64__ - 1;
                            
                            int __ifi = __aux64__;
                            for(int i = 0; i < __ifi; i++) { 
                                
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000214\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements[i].value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements[i].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements[i].value);
                                }
                                
                                uint8_t* _tmp_305 = (uint8_t*) buffer++;
                                *_tmp_305 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements[i].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements[i].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements[i].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].sensor_id_list[0].elements[i].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects.size() != 0) {
                            // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000215\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects[0].value) << 
                                             " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects[0].value);
                            }
                            
                            uint8_t* _tmp_306 = (uint8_t*) buffer++;
                            *_tmp_306 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects[0].value; 
                            __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].number_of_perceived_objects[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids.size() != 0) {
                            // Field:  type(PerceivedObjectIds) name(perceived_object_ids) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                            uint8_t* _ext_flag_148 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].
                            *_ext_flag_148 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements.size();
                            if(__aux64__ > 255) __aux64__ = 255;
                            uint16_t* _tmp_307 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_307 = __aux64__;
                            
                            int __ifj = __aux64__;
                            for(int j = 0; j < __ifj; j++) { 
                                
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000217\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements[j].value) << 
                                                 " payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements[j].value: " << ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements[j].value;
                                }
                                
                                uint16_t* _tmp_308 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_308 = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements[j].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements[j].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements[j].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perception_region_container[0].elements[f].perceived_object_ids[0].elements[j].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(*_ext_flag_96) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[a].perceived_object_container.size() != 0)  // CHOICE 4  fieldType(WrappedCpmContainer) 
            {
                *_choice_1 = 4;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000218\033[0m| Choice selection: 4";
            
                    // PerceivedObjectContainer  SEQUENCE
                        //  numberOfPerceivedObjects CardinalNumber1B     
                        //  perceivedObjects         PerceivedObjects     
                        //  ...
                    uint8_t* _ext_flag_150 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObjectContainer
                    *_ext_flag_150 = 0;  
                    
                    // Optional fields bytemap
                    
                    // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000219\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].number_of_perceived_objects.value) << 
                                     " payload.cpm_containers.elements[a].perceived_object_container[0].number_of_perceived_objects.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].number_of_perceived_objects.value);
                    }
                    
                    uint8_t* _tmp_310 = (uint8_t*) buffer++;
                    *_tmp_310 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].number_of_perceived_objects.value; 
                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].number_of_perceived_objects.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(PerceivedObjects) name(perceived_objects) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                    uint8_t* _ext_flag_152 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.
                    *_ext_flag_152 = 0; 
                    
                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_311 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_311 = __aux64__;
                    
                    int __ifk = __aux64__;
                    for(int k = 0; k < __ifk; k++) { 
                        
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
                            uint8_t* _ext_flag_153 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObject
                            *_ext_flag_153 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_312 = (char*) buffer++;
                            *_tmp_312 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000221\033[0m| Optional field object_id = " << *_tmp_312;
                            char* _tmp_313 = (char*) buffer++;
                            *_tmp_313 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000222\033[0m| Optional field velocity = " << *_tmp_313;
                            char* _tmp_314 = (char*) buffer++;
                            *_tmp_314 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000223\033[0m| Optional field acceleration = " << *_tmp_314;
                            char* _tmp_315 = (char*) buffer++;
                            *_tmp_315 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000224\033[0m| Optional field angles = " << *_tmp_315;
                            char* _tmp_316 = (char*) buffer++;
                            *_tmp_316 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000225\033[0m| Optional field z_angular_velocity = " << *_tmp_316;
                            char* _tmp_317 = (char*) buffer++;
                            *_tmp_317 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000226\033[0m| Optional field lower_triangular_correlation_matrices = " << *_tmp_317;
                            char* _tmp_318 = (char*) buffer++;
                            *_tmp_318 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000227\033[0m| Optional field object_dimension_z = " << *_tmp_318;
                            char* _tmp_319 = (char*) buffer++;
                            *_tmp_319 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000228\033[0m| Optional field object_dimension_y = " << *_tmp_319;
                            char* _tmp_320 = (char*) buffer++;
                            *_tmp_320 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000229\033[0m| Optional field object_dimension_x = " << *_tmp_320;
                            char* _tmp_321 = (char*) buffer++;
                            *_tmp_321 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000230\033[0m| Optional field object_age = " << *_tmp_321;
                            char* _tmp_322 = (char*) buffer++;
                            *_tmp_322 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000231\033[0m| Optional field object_perception_quality = " << *_tmp_322;
                            char* _tmp_323 = (char*) buffer++;
                            *_tmp_323 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000232\033[0m| Optional field sensor_id_list = " << *_tmp_323;
                            char* _tmp_324 = (char*) buffer++;
                            *_tmp_324 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000233\033[0m| Optional field classification = " << *_tmp_324;
                            char* _tmp_325 = (char*) buffer++;
                            *_tmp_325 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000234\033[0m| Optional field map_position = " << *_tmp_325;
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id.size() != 0) {
                                // Field:  type(Identifier2B) name(object_id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000235\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id[0].value) << 
                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id[0].value;
                                }
                                
                                uint16_t* _tmp_326 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_326 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_id[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000236\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].measurement_delta_time.value) << 
                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].measurement_delta_time.value;
                            }
                            
                            float _tmp_328 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].measurement_delta_time.value;
                            _tmp_328 *= 1000.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_328);
                            _tmp_328 -= -2048;
                            uint16_t* _tmp_327 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_327 = static_cast<uint16_t>(_tmp_328);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CartesianPosition3dWithConfidence) name(position) extGroup(0)
                                // CartesianPosition3dWithConfidence  SEQUENCE
                                    //  xCoordinate CartesianCoordinateWithConfidence     
                                    //  yCoordinate CartesianCoordinateWithConfidence     
                                    //  zCoordinate CartesianCoordinateWithConfidence   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_329 = (char*) buffer++;
                                *_tmp_329 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000237\033[0m| Optional field z_coordinate = " << *_tmp_329;
                                
                                // Field:  type(CartesianCoordinateWithConfidence) name(x_coordinate) extGroup(0)
                                    // CartesianCoordinateWithConfidence  SEQUENCE
                                        //  value      CartesianCoordinateLarge     
                                        //  confidence CoordinateConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000238\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.value.value;
                                    }
                                    
                                    float _tmp_331 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.value.value;
                                    _tmp_331 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_331);
                                    _tmp_331 -= -131072;
                                    uint32_t* _tmp_330 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_330 = static_cast<uint32_t>(_tmp_331);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000239\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_333 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.confidence.value;
                                    _tmp_333 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_333);
                                    _tmp_333 -= 1;
                                    uint16_t* _tmp_332 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_332 = static_cast<uint16_t>(_tmp_333);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.x_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
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
                                        logger->debug() << "|\033[38;5;94m000240\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.value.value;
                                    }
                                    
                                    float _tmp_335 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.value.value;
                                    _tmp_335 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_335);
                                    _tmp_335 -= -131072;
                                    uint32_t* _tmp_334 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_334 = static_cast<uint32_t>(_tmp_335);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000241\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_337 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.confidence.value;
                                    _tmp_337 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_337);
                                    _tmp_337 -= 1;
                                    uint16_t* _tmp_336 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_336 = static_cast<uint16_t>(_tmp_337);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.y_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateWithConfidence) name(z_coordinate) extGroup(0)
                                        // CartesianCoordinateWithConfidence  SEQUENCE
                                            //  value      CartesianCoordinateLarge     
                                            //  confidence CoordinateConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000242\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].value.value) << 
                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].value.value;
                                        }
                                        
                                        float _tmp_339 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].value.value;
                                        _tmp_339 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_339);
                                        _tmp_339 -= -131072;
                                        uint32_t* _tmp_338 = (uint32_t*) buffer; buffer += 4;
                                        *_tmp_338 = static_cast<uint32_t>(_tmp_339);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000243\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].confidence.value) << 
                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].confidence.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].confidence.value;
                                        }
                                        
                                        float _tmp_341 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].confidence.value;
                                        _tmp_341 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_341);
                                        _tmp_341 -= 1;
                                        uint16_t* _tmp_340 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_340 = static_cast<uint16_t>(_tmp_341);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                            return -1;
                                        }
                                }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity.size() != 0) {
                                // Field:  type(Velocity3dWithConfidence) name(velocity) extGroup(0)
                                // Choice
                                   // #0  polarVelocity   VelocityPolarWithZ
                                   // #1  cartesianVelocity   VelocityCartesian
                                uint8_t* _choice_5 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity.size() != 0) {  // CHOICE 0  fieldType(Velocity3dWithConfidence) 
                                    *_choice_5 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000244\033[0m| Choice selection: 0";
                                
                                        // VelocityPolarWithZ  SEQUENCE
                                            //  velocityMagnitude Speed                 
                                            //  velocityDirection CartesianAngle        
                                            //  zVelocity         VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_342 = (char*) buffer++;
                                        *_tmp_342 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000245\033[0m| Optional field z_velocity = " << *_tmp_342;
                                        
                                        // Field:  type(Speed) name(velocity_magnitude) extGroup(0)
                                            // Speed  SEQUENCE
                                                //  speedValue      SpeedValue          
                                                //  speedConfidence SpeedConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000246\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            }
                                            
                                            float _tmp_344 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            _tmp_344 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_344);
                                            uint16_t* _tmp_343 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_343 = static_cast<uint16_t>(_tmp_344);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000247\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value);
                                            }
                                            
                                            float _tmp_346 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value;
                                            _tmp_346 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_346);
                                            _tmp_346 -= 1;
                                            uint8_t* _tmp_345 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_345 = static_cast<uint8_t>(_tmp_346);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m000248\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            }
                                            
                                            float _tmp_348 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            _tmp_348 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_348);
                                            uint16_t* _tmp_347 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_347 = static_cast<uint16_t>(_tmp_348);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000249\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.confidence.value);
                                            }
                                            
                                            float _tmp_350 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.confidence.value;
                                            _tmp_350 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_350);
                                            _tmp_350 -= 1;
                                            uint8_t* _tmp_349 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_349 = static_cast<uint8_t>(_tmp_350);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000250\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_352 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                _tmp_352 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_352);
                                                _tmp_352 -= -16383;
                                                uint16_t* _tmp_351 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_351 = static_cast<uint16_t>(_tmp_352);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000251\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_354 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_354 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_354);
                                                _tmp_354 -= 1;
                                                uint8_t* _tmp_353 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_353 = static_cast<uint8_t>(_tmp_354);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity.size() != 0)  // CHOICE 1  fieldType(Velocity3dWithConfidence) 
                                {
                                    *_choice_5 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000252\033[0m| Choice selection: 1";
                                
                                        // VelocityCartesian  SEQUENCE
                                            //  xVelocity  VelocityComponent     
                                            //  yVelocity  VelocityComponent     
                                            //  zVelocity  VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_355 = (char*) buffer++;
                                        *_tmp_355 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000253\033[0m| Optional field z_velocity = " << *_tmp_355;
                                        
                                        // Field:  type(VelocityComponent) name(x_velocity) extGroup(0)
                                            // VelocityComponent  SEQUENCE
                                                //  value      VelocityComponentValue     
                                                //  confidence SpeedConfidence            
                                            // Optional fields bytemap
                                            
                                            // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000254\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            }
                                            
                                            float _tmp_357 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            _tmp_357 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_357);
                                            _tmp_357 -= -16383;
                                            uint16_t* _tmp_356 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_356 = static_cast<uint16_t>(_tmp_357);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000255\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_359 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.confidence.value;
                                            _tmp_359 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_359);
                                            _tmp_359 -= 1;
                                            uint8_t* _tmp_358 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_358 = static_cast<uint8_t>(_tmp_359);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m000256\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            }
                                            
                                            float _tmp_361 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            _tmp_361 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_361);
                                            _tmp_361 -= -16383;
                                            uint16_t* _tmp_360 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_360 = static_cast<uint16_t>(_tmp_361);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000257\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_363 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.confidence.value;
                                            _tmp_363 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_363);
                                            _tmp_363 -= 1;
                                            uint8_t* _tmp_362 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_362 = static_cast<uint8_t>(_tmp_363);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000258\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_365 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                _tmp_365 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_365);
                                                _tmp_365 -= -16383;
                                                uint16_t* _tmp_364 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_364 = static_cast<uint16_t>(_tmp_365);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000259\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_367 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_367 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_367);
                                                _tmp_367 -= 1;
                                                uint8_t* _tmp_366 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_366 = static_cast<uint8_t>(_tmp_367);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_5) << ") selected in CHOICE Velocity3dWithConfidence in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].velocity[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration.size() != 0) {
                                // Field:  type(Acceleration3dWithConfidence) name(acceleration) extGroup(0)
                                // Choice
                                   // #0  polarAcceleration   AccelerationPolarWithZ
                                   // #1  cartesianAcceleration   AccelerationCartesian
                                uint8_t* _choice_6 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration.size() != 0) {  // CHOICE 0  fieldType(Acceleration3dWithConfidence) 
                                    *_choice_6 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000260\033[0m| Choice selection: 0";
                                
                                        // AccelerationPolarWithZ  SEQUENCE
                                            //  accelerationMagnitude AccelerationMagnitude     
                                            //  accelerationDirection CartesianAngle            
                                            //  zAcceleration         AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_368 = (char*) buffer++;
                                        *_tmp_368 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000261\033[0m| Optional field z_acceleration = " << *_tmp_368;
                                        
                                        // Field:  type(AccelerationMagnitude) name(acceleration_magnitude) extGroup(0)
                                            // AccelerationMagnitude  SEQUENCE
                                                //  accelerationMagnitudeValue AccelerationMagnitudeValue     
                                                //  accelerationConfidence     AccelerationConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationMagnitudeValue) name(acceleration_magnitude_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(161) span(162) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000262\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value);
                                            }
                                            
                                            float _tmp_370 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value;
                                            _tmp_370 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_370);
                                            uint8_t* _tmp_369 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_369 = static_cast<uint8_t>(_tmp_370);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(acceleration_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000263\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value);
                                            }
                                            
                                            float _tmp_372 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value;
                                            _tmp_372 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_372);
                                            uint8_t* _tmp_371 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_371 = static_cast<uint8_t>(_tmp_372);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m000264\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            }
                                            
                                            float _tmp_374 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            _tmp_374 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_374);
                                            uint16_t* _tmp_373 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_373 = static_cast<uint16_t>(_tmp_374);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000265\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value);
                                            }
                                            
                                            float _tmp_376 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value;
                                            _tmp_376 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_376);
                                            _tmp_376 -= 1;
                                            uint8_t* _tmp_375 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_375 = static_cast<uint8_t>(_tmp_376);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000266\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_378 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_378 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_378);
                                                _tmp_378 -= -160;
                                                uint16_t* _tmp_377 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_377 = static_cast<uint16_t>(_tmp_378);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000267\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_380 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_380 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_380);
                                                uint8_t* _tmp_379 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_379 = static_cast<uint8_t>(_tmp_380);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration.size() != 0)  // CHOICE 1  fieldType(Acceleration3dWithConfidence) 
                                {
                                    *_choice_6 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000268\033[0m| Choice selection: 1";
                                
                                        // AccelerationCartesian  SEQUENCE
                                            //  xAcceleration AccelerationComponent     
                                            //  yAcceleration AccelerationComponent     
                                            //  zAcceleration AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_381 = (char*) buffer++;
                                        *_tmp_381 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000269\033[0m| Optional field z_acceleration = " << *_tmp_381;
                                        
                                        // Field:  type(AccelerationComponent) name(x_acceleration) extGroup(0)
                                            // AccelerationComponent  SEQUENCE
                                                //  value      AccelerationValue          
                                                //  confidence AccelerationConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000270\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            }
                                            
                                            float _tmp_383 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            _tmp_383 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_383);
                                            _tmp_383 -= -160;
                                            uint16_t* _tmp_382 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_382 = static_cast<uint16_t>(_tmp_383);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000271\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_385 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value;
                                            _tmp_385 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_385);
                                            uint8_t* _tmp_384 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_384 = static_cast<uint8_t>(_tmp_385);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m000272\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            }
                                            
                                            float _tmp_387 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            _tmp_387 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_387);
                                            _tmp_387 -= -160;
                                            uint16_t* _tmp_386 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_386 = static_cast<uint16_t>(_tmp_387);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000273\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_389 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value;
                                            _tmp_389 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_389);
                                            uint8_t* _tmp_388 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_388 = static_cast<uint8_t>(_tmp_389);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000274\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_391 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_391 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_391);
                                                _tmp_391 -= -160;
                                                uint16_t* _tmp_390 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_390 = static_cast<uint16_t>(_tmp_391);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000275\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_393 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_393 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_393);
                                                uint8_t* _tmp_392 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_392 = static_cast<uint8_t>(_tmp_393);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_6) << ") selected in CHOICE Acceleration3dWithConfidence in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].acceleration[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles.size() != 0) {
                                // Field:  type(EulerAnglesWithConfidence) name(angles) extGroup(0)
                                    // EulerAnglesWithConfidence  SEQUENCE
                                        //  zAngle     CartesianAngle     
                                        //  yAngle     CartesianAngle   OPTIONAL  
                                        //  xAngle     CartesianAngle   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_394 = (char*) buffer++;
                                    *_tmp_394 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000276\033[0m| Optional field y_angle = " << *_tmp_394;
                                    char* _tmp_395 = (char*) buffer++;
                                    *_tmp_395 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000277\033[0m| Optional field x_angle = " << *_tmp_395;
                                    
                                    // Field:  type(CartesianAngle) name(z_angle) extGroup(0)
                                        // CartesianAngle  SEQUENCE
                                            //  value      CartesianAngleValue     
                                            //  confidence AngleConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000278\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.value.value) << 
                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.value.value;
                                        }
                                        
                                        float _tmp_397 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.value.value;
                                        _tmp_397 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_397);
                                        uint16_t* _tmp_396 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_396 = static_cast<uint16_t>(_tmp_397);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000279\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.confidence.value) << 
                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.confidence.value);
                                        }
                                        
                                        float _tmp_399 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.confidence.value;
                                        _tmp_399 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_399);
                                        _tmp_399 -= 1;
                                        uint8_t* _tmp_398 = (uint8_t*) buffer; buffer += 1;
                                        *_tmp_398 = static_cast<uint8_t>(_tmp_399);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].z_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                            return -1;
                                        }
                                    
                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(y_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000280\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].value.value;
                                            }
                                            
                                            float _tmp_401 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].value.value;
                                            _tmp_401 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_401);
                                            uint16_t* _tmp_400 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_400 = static_cast<uint16_t>(_tmp_401);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000281\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_403 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].confidence.value;
                                            _tmp_403 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_403);
                                            _tmp_403 -= 1;
                                            uint8_t* _tmp_402 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_402 = static_cast<uint8_t>(_tmp_403);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(x_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000282\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].value.value;
                                            }
                                            
                                            float _tmp_405 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].value.value;
                                            _tmp_405 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_405);
                                            uint16_t* _tmp_404 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_404 = static_cast<uint16_t>(_tmp_405);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000283\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_407 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].confidence.value;
                                            _tmp_407 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_407);
                                            _tmp_407 -= 1;
                                            uint8_t* _tmp_406 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_406 = static_cast<uint8_t>(_tmp_407);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity.size() != 0) {
                                // Field:  type(CartesianAngularVelocityComponent) name(z_angular_velocity) extGroup(0)
                                    // CartesianAngularVelocityComponent  SEQUENCE
                                        //  value      CartesianAngularVelocityComponentValue     
                                        //  confidence AngularSpeedConfidence                     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianAngularVelocityComponentValue) name(value) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-255) max(256) span(512) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000284\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].value.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].value.value;
                                    }
                                    
                                    uint16_t* _tmp_408 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].value.value - -255;
                                    *_tmp_408 = __aux64__;
                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].value.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].value.value' (" << __aux64__ << ") less than (-255); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngularSpeedConfidence) name(confidence) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(7) span(8) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000285\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].confidence.value);
                                    }
                                    
                                    uint8_t* _tmp_409 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_409 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].confidence.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].confidence.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices.size() != 0) {
                                // Field:  type(LowerTriangularPositiveSemidefiniteMatrices) name(lower_triangular_correlation_matrices) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(4) span(4) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements.size();
                                if(__aux64__ > 4) __aux64__ = 4;
                                uint16_t* _tmp_410 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_410 = __aux64__ - 1;
                                
                                int __ifl = __aux64__;
                                for(int l = 0; l < __ifl; l++) { 
                                    
                                        // LowerTriangularPositiveSemidefiniteMatrix  SEQUENCE
                                            //  componentsIncludedIntheMatrix MatrixIncludedComponents                             
                                            //  matrix                        LowerTriangularPositiveSemidefiniteMatrixColumns     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(MatrixIncludedComponents) name(components_included_inthe_matrix) extGroup(0)
                                        // BitString
                                        // BIT_STRING  min(13) max(13) span(1)
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000287\033[0m| payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.values.size());
                                        
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.values.size() < 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.values.size()) << " is less than allowable (13); message dropped.";
                                            return -1;
                                        }
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.values.size() > 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.values.size()) << " exceeds max allowable (13); message dropped.";
                                            return -1;
                                        }
                                        
                                        uint8_t* _ext_flag_196 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.
                                        *_ext_flag_196 = 0; 
                                        
                                        uint8_t* _tmp_411 = (uint8_t*)buffer;
                                        __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.values.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        *_tmp_411 = __aux64__ - 13;
                                        buffer += 1;
                                        
                                        int __ifm = __aux64__;
                                        for(int m = 0; m < __ifm; m++) {
                                            uint8_t* __b__ = (uint8_t*)buffer++;
                                            *__b__ = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].components_included_inthe_matrix.values[m]? 1: 0);
                                        }
                                        
                                        // Field:  type(LowerTriangularPositiveSemidefiniteMatrixColumns) name(matrix) extGroup(0)
                                        // SequenceOf
                                        // Data Type UInt8
                                        // SEQUENCE_OF  min(1) max(13) span(13) ext(false)
                                        __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        uint16_t* _tmp_412 = (uint16_t*)buffer;
                                        buffer += 2;
                                        *_tmp_412 = __aux64__ - 1;
                                        
                                        int __ifn = __aux64__;
                                        for(int n = 0; n < __ifn; n++) { 
                                            
                                            // SequenceOf
                                            // Data Type UInt8
                                            // SEQUENCE_OF  min(1) max(13) span(13) ext(true)
                                            uint8_t* _ext_flag_197 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].
                                            *_ext_flag_197 = 0; 
                                            
                                            __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements.size();
                                            if(__aux64__ > 13) __aux64__ = 13;
                                            uint16_t* _tmp_413 = (uint16_t*)buffer;
                                            buffer += 2;
                                            *_tmp_413 = __aux64__ - 1;
                                            
                                            int __ifo = __aux64__;
                                            for(int o = 0; o < __ifo; o++) { 
                                                
                                                // Integer
                                                
                                                // INT8  min(-100) max(101) span(202) dataType(Int8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000290\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements[o].value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements[o].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements[o].value);
                                                }
                                                
                                                uint8_t* _tmp_414 = (uint8_t*) buffer++;
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements[o].value - -100;
                                                *_tmp_414 = __aux64__;
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements[o].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -100) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements[o].value' (" << __aux64__ << ") less than (-100); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].lower_triangular_correlation_matrices[0].elements[l].matrix.elements[n].elements[o].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                                    return -1;
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_z) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000291\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].value.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].value.value);
                                    }
                                    
                                    float _tmp_416 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].value.value;
                                    _tmp_416 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_416);
                                    _tmp_416 -= 1;
                                    uint8_t* _tmp_415 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_415 = static_cast<uint8_t>(_tmp_416);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000292\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].confidence.value);
                                    }
                                    
                                    float _tmp_418 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].confidence.value;
                                    _tmp_418 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_418);
                                    _tmp_418 -= 1;
                                    uint8_t* _tmp_417 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_417 = static_cast<uint8_t>(_tmp_418);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_z[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_y) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000293\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].value.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].value.value);
                                    }
                                    
                                    float _tmp_420 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].value.value;
                                    _tmp_420 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_420);
                                    _tmp_420 -= 1;
                                    uint8_t* _tmp_419 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_419 = static_cast<uint8_t>(_tmp_420);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000294\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].confidence.value);
                                    }
                                    
                                    float _tmp_422 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].confidence.value;
                                    _tmp_422 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_422);
                                    _tmp_422 -= 1;
                                    uint8_t* _tmp_421 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_421 = static_cast<uint8_t>(_tmp_422);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_y[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_x) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000295\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].value.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].value.value);
                                    }
                                    
                                    float _tmp_424 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].value.value;
                                    _tmp_424 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_424);
                                    _tmp_424 -= 1;
                                    uint8_t* _tmp_423 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_423 = static_cast<uint8_t>(_tmp_424);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000296\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].confidence.value);
                                    }
                                    
                                    float _tmp_426 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].confidence.value;
                                    _tmp_426 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_426);
                                    _tmp_426 -= 1;
                                    uint8_t* _tmp_425 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_425 = static_cast<uint8_t>(_tmp_426);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_dimension_x[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age.size() != 0) {
                                // Field:  type(PerceivedObject_DeltaTimeMilliSecondSigned_objectAge) name(object_age) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(2047) span(2048) scaleDivisor(1000.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000297\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age[0].value) << 
                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age[0].value;
                                }
                                
                                float _tmp_428 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age[0].value;
                                _tmp_428 *= 1000.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_428);
                                uint16_t* _tmp_427 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_427 = static_cast<uint16_t>(_tmp_428);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_age[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality.size() != 0) {
                                // Field:  type(ObjectPerceptionQuality) name(object_perception_quality) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000298\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality[0].value) << 
                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality[0].value);
                                }
                                
                                uint8_t* _tmp_429 = (uint8_t*) buffer++;
                                *_tmp_429 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].object_perception_quality[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list.size() != 0) {
                                // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                                uint8_t* _ext_flag_207 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].
                                *_ext_flag_207 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements.size();
                                if(__aux64__ > 128) __aux64__ = 128;
                                uint16_t* _tmp_430 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_430 = __aux64__ - 1;
                                
                                int __ifp = __aux64__;
                                for(int p = 0; p < __ifp; p++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000300\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements[p].value) << 
                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements[p].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements[p].value);
                                    }
                                    
                                    uint8_t* _tmp_431 = (uint8_t*) buffer++;
                                    *_tmp_431 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements[p].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements[p].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements[p].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].sensor_id_list[0].elements[p].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification.size() != 0) {
                                // Field:  type(ObjectClassDescription) name(classification) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements.size();
                                if(__aux64__ > 8) __aux64__ = 8;
                                uint16_t* _tmp_432 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_432 = __aux64__ - 1;
                                
                                int __ifq = __aux64__;
                                for(int q = 0; q < __ifq; q++) { 
                                    
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
                                        uint8_t* _ext_flag_209 = (uint8_t*) buffer; 
                                        buffer++;
                                        *_ext_flag_209 = 0; 
                                        
                                        uint8_t* _choice_7 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class.size() != 0) {  // CHOICE 0  fieldType(ObjectClass) 
                                            *_choice_7 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000302\033[0m| Choice selection: 0";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000303\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_433 = (uint8_t*) buffer++;
                                            *_tmp_433 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class.size() != 0)  // CHOICE 1  fieldType(ObjectClass) 
                                        {
                                            *_choice_7 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000304\033[0m| Choice selection: 1";
                                        
                                            // Choice
                                               // #0  pedestrian   VruSubProfilePedestrian
                                               // #1  bicyclistAndLightVruVehicle   VruSubProfileBicyclist
                                               // #2  motorcyclist   VruSubProfileMotorcyclist
                                               // #3  animal   VruSubProfileAnimal
                                            uint8_t* _ext_flag_211 = (uint8_t*) buffer; 
                                            buffer++;
                                            *_ext_flag_211 = 0; 
                                            
                                            uint8_t* _choice_8 = (uint8_t*) buffer;
                                            buffer++;
                                            
                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian.size() != 0) {  // CHOICE 0  fieldType(VruProfileAndSubprofile) 
                                                *_choice_8 = 0;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000305\033[0m| Choice selection: 0";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000306\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian[0].value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian[0].value);
                                                }
                                                
                                                uint8_t* _tmp_434 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_434 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle.size() != 0)  // CHOICE 1  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_8 = 1;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000307\033[0m| Choice selection: 1";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000308\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value);
                                                }
                                                
                                                uint8_t* _tmp_435 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_435 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist.size() != 0)  // CHOICE 2  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_8 = 2;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000309\033[0m| Choice selection: 2";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000310\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist[0].value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist[0].value);
                                                }
                                                
                                                uint8_t* _tmp_436 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_436 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal.size() != 0)  // CHOICE 3  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_8 = 3;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000311\033[0m| Choice selection: 3";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000312\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal[0].value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal[0].value);
                                                }
                                                
                                                uint8_t* _tmp_437 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_437 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else
                                            {
                                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_8) << ") selected in CHOICE VruProfileAndSubprofile in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.vru_sub_class[0]'; message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class.size() != 0)  // CHOICE 2  fieldType(ObjectClass) 
                                        {
                                            *_choice_7 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000313\033[0m| Choice selection: 2";
                                        
                                                // VruClusterInformation  SEQUENCE
                                                    //  clusterId               Identifier1B         OPTIONAL  
                                                    //  clusterBoundingBoxShape Shape                OPTIONAL  
                                                    //  clusterCardinalitySize  CardinalNumber1B       
                                                    //  clusterProfiles         VruClusterProfiles   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_216 = (uint8_t*) buffer++;  // Write extension flag for VruClusterInformation
                                                *_ext_flag_216 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_438 = (char*) buffer++;
                                                *_tmp_438 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000314\033[0m| Optional field cluster_id = " << *_tmp_438;
                                                char* _tmp_439 = (char*) buffer++;
                                                *_tmp_439 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000315\033[0m| Optional field cluster_bounding_box_shape = " << *_tmp_439;
                                                char* _tmp_440 = (char*) buffer++;
                                                *_tmp_440 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000316\033[0m| Optional field cluster_profiles = " << *_tmp_440;
                                                
                                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id.size() != 0) {
                                                    // Field:  type(Identifier1B) name(cluster_id) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000317\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id[0].value) << 
                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id[0].value);
                                                    }
                                                    
                                                    uint8_t* _tmp_441 = (uint8_t*) buffer++;
                                                    *_tmp_441 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0) {
                                                    // Field:  type(Shape) name(cluster_bounding_box_shape) extGroup(0)
                                                    // Choice
                                                       // #0  rectangular   RectangularShape
                                                       // #1  circular   CircularShape
                                                       // #2  polygonal   PolygonalShape
                                                       // #3  elliptical   EllipticalShape
                                                       // #4  radial   RadialShape
                                                       // #5  radialShapes   RadialShapes
                                                    uint8_t* _ext_flag_218 = (uint8_t*) buffer; 
                                                    buffer++;
                                                    *_ext_flag_218 = 0; 
                                                    
                                                    uint8_t* _choice_9 = (uint8_t*) buffer;
                                                    buffer++;
                                                    
                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                                        *_choice_9 = 0;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m000318\033[0m| Choice selection: 0";
                                                    
                                                            // RectangularShape  SEQUENCE
                                                                //  centerPoint CartesianPosition3d   OPTIONAL  
                                                                //  semiLength  StandardLength12b       
                                                                //  semiBreadth StandardLength12b       
                                                                //  orientation Wgs84AngleValue       OPTIONAL  
                                                                //  height      StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_442 = (char*) buffer++;
                                                            *_tmp_442 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000319\033[0m| Optional field center_point = " << *_tmp_442;
                                                            char* _tmp_443 = (char*) buffer++;
                                                            *_tmp_443 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000320\033[0m| Optional field orientation = " << *_tmp_443;
                                                            char* _tmp_444 = (char*) buffer++;
                                                            *_tmp_444 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000321\033[0m| Optional field height = " << *_tmp_444;
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_445 = (char*) buffer++;
                                                                    *_tmp_445 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000322\033[0m| Optional field z_coordinate = " << *_tmp_445;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000323\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_447 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    _tmp_447 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_447);
                                                                    _tmp_447 -= -32768;
                                                                    uint16_t* _tmp_446 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_446 = static_cast<uint16_t>(_tmp_447);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000324\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_449 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    _tmp_449 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_449);
                                                                    _tmp_449 -= -32768;
                                                                    uint16_t* _tmp_448 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_448 = static_cast<uint16_t>(_tmp_449);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000325\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_451 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        _tmp_451 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_451);
                                                                        _tmp_451 -= -32768;
                                                                        uint16_t* _tmp_450 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_450 = static_cast<uint16_t>(_tmp_451);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000326\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            }
                                                            
                                                            float _tmp_453 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            _tmp_453 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_453);
                                                            uint16_t* _tmp_452 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_452 = static_cast<uint16_t>(_tmp_453);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000327\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            }
                                                            
                                                            float _tmp_455 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            _tmp_455 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_455);
                                                            uint16_t* _tmp_454 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_454 = static_cast<uint16_t>(_tmp_455);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000328\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_457 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                _tmp_457 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_457);
                                                                uint16_t* _tmp_456 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_456 = static_cast<uint16_t>(_tmp_457);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000329\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_459 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                _tmp_459 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_459);
                                                                uint16_t* _tmp_458 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_458 = static_cast<uint16_t>(_tmp_459);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                                                    {
                                                        *_choice_9 = 1;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m000330\033[0m| Choice selection: 1";
                                                    
                                                            // CircularShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  radius              StandardLength12b       
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_460 = (char*) buffer++;
                                                            *_tmp_460 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000331\033[0m| Optional field shape_reference_point = " << *_tmp_460;
                                                            char* _tmp_461 = (char*) buffer++;
                                                            *_tmp_461 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000332\033[0m| Optional field height = " << *_tmp_461;
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_462 = (char*) buffer++;
                                                                    *_tmp_462 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000333\033[0m| Optional field z_coordinate = " << *_tmp_462;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000334\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_464 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_464 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_464);
                                                                    _tmp_464 -= -32768;
                                                                    uint16_t* _tmp_463 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_463 = static_cast<uint16_t>(_tmp_464);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000335\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_466 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_466 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_466);
                                                                    _tmp_466 -= -32768;
                                                                    uint16_t* _tmp_465 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_465 = static_cast<uint16_t>(_tmp_466);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000336\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_468 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_468 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_468);
                                                                        _tmp_468 -= -32768;
                                                                        uint16_t* _tmp_467 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_467 = static_cast<uint16_t>(_tmp_468);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000337\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            }
                                                            
                                                            float _tmp_470 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            _tmp_470 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_470);
                                                            uint16_t* _tmp_469 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_469 = static_cast<uint16_t>(_tmp_470);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000338\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_472 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                _tmp_472 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_472);
                                                                uint16_t* _tmp_471 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_471 = static_cast<uint16_t>(_tmp_472);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                                                    {
                                                        *_choice_9 = 2;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m000339\033[0m| Choice selection: 2";
                                                    
                                                            // PolygonalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                                                //  polygon             SequenceOfCartesianPosition3d     
                                                                //  height              StandardLength12b               OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_473 = (char*) buffer++;
                                                            *_tmp_473 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000340\033[0m| Optional field shape_reference_point = " << *_tmp_473;
                                                            char* _tmp_474 = (char*) buffer++;
                                                            *_tmp_474 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000341\033[0m| Optional field height = " << *_tmp_474;
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_475 = (char*) buffer++;
                                                                    *_tmp_475 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000342\033[0m| Optional field z_coordinate = " << *_tmp_475;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000343\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_477 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_477 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_477);
                                                                    _tmp_477 -= -32768;
                                                                    uint16_t* _tmp_476 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_476 = static_cast<uint16_t>(_tmp_477);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000344\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_479 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_479 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_479);
                                                                    _tmp_479 -= -32768;
                                                                    uint16_t* _tmp_478 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_478 = static_cast<uint16_t>(_tmp_479);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000345\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_481 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_481 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_481);
                                                                        _tmp_481 -= -32768;
                                                                        uint16_t* _tmp_480 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_480 = static_cast<uint16_t>(_tmp_481);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_234 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.
                                                            *_ext_flag_234 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_482 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_482 = __aux64__ - 1;
                                                            
                                                            int __ifr = __aux64__;
                                                            for(int r = 0; r < __ifr; r++) { 
                                                                
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_483 = (char*) buffer++;
                                                                    *_tmp_483 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000347\033[0m| Optional field z_coordinate = " << *_tmp_483;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000348\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_485 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value;
                                                                    _tmp_485 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_485);
                                                                    _tmp_485 -= -32768;
                                                                    uint16_t* _tmp_484 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_484 = static_cast<uint16_t>(_tmp_485);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000349\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_487 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value;
                                                                    _tmp_487 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_487);
                                                                    _tmp_487 -= -32768;
                                                                    uint16_t* _tmp_486 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_486 = static_cast<uint16_t>(_tmp_487);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000350\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_489 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value;
                                                                        _tmp_489 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_489);
                                                                        _tmp_489 -= -32768;
                                                                        uint16_t* _tmp_488 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_488 = static_cast<uint16_t>(_tmp_489);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[r].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000351\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_491 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                _tmp_491 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_491);
                                                                uint16_t* _tmp_490 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_490 = static_cast<uint16_t>(_tmp_491);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                                                    {
                                                        *_choice_9 = 3;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m000352\033[0m| Choice selection: 3";
                                                    
                                                            // EllipticalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  semiMajorAxisLength StandardLength12b       
                                                                //  semiMinorAxisLength StandardLength12b       
                                                                //  orientation         Wgs84AngleValue       OPTIONAL  
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_492 = (char*) buffer++;
                                                            *_tmp_492 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000353\033[0m| Optional field shape_reference_point = " << *_tmp_492;
                                                            char* _tmp_493 = (char*) buffer++;
                                                            *_tmp_493 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000354\033[0m| Optional field orientation = " << *_tmp_493;
                                                            char* _tmp_494 = (char*) buffer++;
                                                            *_tmp_494 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000355\033[0m| Optional field height = " << *_tmp_494;
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_495 = (char*) buffer++;
                                                                    *_tmp_495 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000356\033[0m| Optional field z_coordinate = " << *_tmp_495;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000357\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_497 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_497 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_497);
                                                                    _tmp_497 -= -32768;
                                                                    uint16_t* _tmp_496 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_496 = static_cast<uint16_t>(_tmp_497);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000358\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_499 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_499 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_499);
                                                                    _tmp_499 -= -32768;
                                                                    uint16_t* _tmp_498 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_498 = static_cast<uint16_t>(_tmp_499);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000359\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_501 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_501 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_501);
                                                                        _tmp_501 -= -32768;
                                                                        uint16_t* _tmp_500 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_500 = static_cast<uint16_t>(_tmp_501);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000360\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_503 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            _tmp_503 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_503);
                                                            uint16_t* _tmp_502 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_502 = static_cast<uint16_t>(_tmp_503);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000361\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_505 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            _tmp_505 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_505);
                                                            uint16_t* _tmp_504 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_504 = static_cast<uint16_t>(_tmp_505);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000362\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_507 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                _tmp_507 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_507);
                                                                uint16_t* _tmp_506 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_506 = static_cast<uint16_t>(_tmp_507);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000363\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_509 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                _tmp_509 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_509);
                                                                uint16_t* _tmp_508 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_508 = static_cast<uint16_t>(_tmp_509);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                                                    {
                                                        *_choice_9 = 4;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m000364\033[0m| Choice selection: 4";
                                                    
                                                            // RadialShape  SEQUENCE
                                                                //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                                                //  range                                 StandardLength12b       
                                                                //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                                                //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                                                //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                                                //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_510 = (char*) buffer++;
                                                            *_tmp_510 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000365\033[0m| Optional field shape_reference_point = " << *_tmp_510;
                                                            char* _tmp_511 = (char*) buffer++;
                                                            *_tmp_511 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000366\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_511;
                                                            char* _tmp_512 = (char*) buffer++;
                                                            *_tmp_512 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000367\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_512;
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_513 = (char*) buffer++;
                                                                    *_tmp_513 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000368\033[0m| Optional field z_coordinate = " << *_tmp_513;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000369\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_515 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_515 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_515);
                                                                    _tmp_515 -= -32768;
                                                                    uint16_t* _tmp_514 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_514 = static_cast<uint16_t>(_tmp_515);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000370\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_517 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_517 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_517);
                                                                    _tmp_517 -= -32768;
                                                                    uint16_t* _tmp_516 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_516 = static_cast<uint16_t>(_tmp_517);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000371\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_519 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_519 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_519);
                                                                        _tmp_519 -= -32768;
                                                                        uint16_t* _tmp_518 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_518 = static_cast<uint16_t>(_tmp_519);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000372\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            }
                                                            
                                                            float _tmp_521 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            _tmp_521 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_521);
                                                            uint16_t* _tmp_520 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_520 = static_cast<uint16_t>(_tmp_521);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000373\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            }
                                                            
                                                            float _tmp_523 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            _tmp_523 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_523);
                                                            uint16_t* _tmp_522 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_522 = static_cast<uint16_t>(_tmp_523);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000374\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            }
                                                            
                                                            float _tmp_525 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            _tmp_525 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_525);
                                                            uint16_t* _tmp_524 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_524 = static_cast<uint16_t>(_tmp_525);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000375\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                }
                                                                
                                                                float _tmp_527 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                _tmp_527 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_527);
                                                                uint16_t* _tmp_526 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_526 = static_cast<uint16_t>(_tmp_527);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000376\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                }
                                                                
                                                                float _tmp_529 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                _tmp_529 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_529);
                                                                uint16_t* _tmp_528 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_528 = static_cast<uint16_t>(_tmp_529);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                                                    {
                                                        *_choice_9 = 5;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m000377\033[0m| Choice selection: 5";
                                                    
                                                            // RadialShapes  SEQUENCE
                                                                //  refPointId       Identifier1B                 
                                                                //  xCoordinate      CartesianCoordinateSmall     
                                                                //  yCoordinate      CartesianCoordinateSmall     
                                                                //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                                                //  radialShapesList RadialShapesList             
                                                            // Optional fields bytemap
                                                            char* _tmp_530 = (char*) buffer++;
                                                            *_tmp_530 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m000378\033[0m| Optional field z_coordinate = " << *_tmp_530;
                                                            
                                                            // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                                            // Integer
                                                            
                                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000379\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value);
                                                            }
                                                            
                                                            uint8_t* _tmp_531 = (uint8_t*) buffer++;
                                                            *_tmp_531 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value; 
                                                            __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000380\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_533 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            _tmp_533 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_533);
                                                            _tmp_533 -= -3094;
                                                            uint16_t* _tmp_532 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_532 = static_cast<uint16_t>(_tmp_533);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m000381\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_535 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            _tmp_535 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_535);
                                                            _tmp_535 -= -3094;
                                                            uint16_t* _tmp_534 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_534 = static_cast<uint16_t>(_tmp_535);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                                                // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m000382\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                }
                                                                
                                                                float _tmp_537 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                _tmp_537 *= 100.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_537);
                                                                _tmp_537 -= -3094;
                                                                uint16_t* _tmp_536 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_536 = static_cast<uint16_t>(_tmp_537);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_258 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.
                                                            *_ext_flag_258 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_538 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_538 = __aux64__ - 1;
                                                            
                                                            int __ifs = __aux64__;
                                                            for(int s = 0; s < __ifs; s++) { 
                                                                
                                                                    // RadialShapeDetails  SEQUENCE
                                                                        //  range                       StandardLength12b       
                                                                        //  horizontalOpeningAngleStart CartesianAngleValue     
                                                                        //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                                        //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                                        //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_539 = (char*) buffer++;
                                                                    *_tmp_539 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000384\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_539;
                                                                    char* _tmp_540 = (char*) buffer++;
                                                                    *_tmp_540 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m000385\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_540;
                                                                    
                                                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000386\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value;
                                                                    }
                                                                    
                                                                    float _tmp_542 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value;
                                                                    _tmp_542 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_542);
                                                                    uint16_t* _tmp_541 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_541 = static_cast<uint16_t>(_tmp_542);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000387\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value;
                                                                    }
                                                                    
                                                                    float _tmp_544 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value;
                                                                    _tmp_544 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_544);
                                                                    uint16_t* _tmp_543 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_543 = static_cast<uint16_t>(_tmp_544);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m000388\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value) << 
                                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value;
                                                                    }
                                                                    
                                                                    float _tmp_546 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value;
                                                                    _tmp_546 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_546);
                                                                    uint16_t* _tmp_545 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_545 = static_cast<uint16_t>(_tmp_546);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000389\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_548 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value;
                                                                        _tmp_548 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_548);
                                                                        uint16_t* _tmp_547 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_547 = static_cast<uint16_t>(_tmp_548);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m000390\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value) << 
                                                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_550 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value;
                                                                        _tmp_550 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_550);
                                                                        uint16_t* _tmp_549 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_549 = static_cast<uint16_t>(_tmp_550);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[s].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                    
                                                    }
                                                    else
                                                    {
                                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_9) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_bounding_box_shape[0]'; message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(CardinalNumber1B) name(cluster_cardinality_size) extGroup(0)
                                                // Integer
                                                
                                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000391\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_cardinality_size.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_cardinality_size.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_cardinality_size.value);
                                                }
                                                
                                                uint8_t* _tmp_551 = (uint8_t*) buffer++;
                                                *_tmp_551 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_cardinality_size.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_cardinality_size.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                    return -1;
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles.size() != 0) {
                                                    // Field:  type(VruClusterProfiles) name(cluster_profiles) extGroup(0)
                                                    // BitString
                                                    // BIT_STRING  min(4) max(4) span(1)
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000392\033[0m| payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].values.size());
                                                    
                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].values.size() < 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " is less than allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].values.size() > 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " exceeds max allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    uint8_t* _tmp_552 = (uint8_t*)buffer;
                                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].values.size();
                                                    if(__aux64__ > 4) __aux64__ = 4;
                                                    *_tmp_552 = __aux64__ - 4;
                                                    buffer += 1;
                                                    
                                                    int __ift = __aux64__;
                                                    for(int t = 0; t < __ift; t++) {
                                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                                        *__b__ = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.group_sub_class[0].cluster_profiles[0].values[t]? 1: 0);
                                                    }
                                                }
                                                
                                                if(*_ext_flag_216) {
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class.size() != 0)  // CHOICE 3  fieldType(ObjectClass) 
                                        {
                                            *_choice_7 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000393\033[0m| Choice selection: 3";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000394\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_554 = (uint8_t*) buffer++;
                                            *_tmp_554 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class.other_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_7) << ") selected in CHOICE ObjectClass in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].object_class'; message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(ConfidenceLevel) name(confidence) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000395\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].confidence.value) << 
                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].confidence.value);
                                        }
                                        
                                        uint8_t* _tmp_555 = (uint8_t*) buffer++;
                                        __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].confidence.value - 1;
                                        *_tmp_555 = __aux64__;
                                        __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].confidence.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].classification[0].elements[q].confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                            return -1;
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position.size() != 0) {
                                // Field:  type(MapPosition) name(map_position) extGroup(0)
                                    // MapPosition  SEQUENCE
                                        //  mapReference             MapReference               OPTIONAL  
                                        //  laneId                   Identifier1B               OPTIONAL  
                                        //  connectionId             Identifier1B               OPTIONAL  
                                        //  longitudinalLanePosition LongitudinalLanePosition   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_267 = (uint8_t*) buffer++;  // Write extension flag for MapPosition
                                    *_ext_flag_267 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_556 = (char*) buffer++;
                                    *_tmp_556 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000396\033[0m| Optional field map_reference = " << *_tmp_556;
                                    char* _tmp_557 = (char*) buffer++;
                                    *_tmp_557 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000397\033[0m| Optional field lane_id = " << *_tmp_557;
                                    char* _tmp_558 = (char*) buffer++;
                                    *_tmp_558 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000398\033[0m| Optional field connection_id = " << *_tmp_558;
                                    char* _tmp_559 = (char*) buffer++;
                                    *_tmp_559 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000399\033[0m| Optional field longitudinal_lane_position = " << *_tmp_559;
                                    
                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference.size() != 0) {
                                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                                        // Choice
                                           // #0  roadsegment   RoadSegmentReferenceId
                                           // #1  intersection   IntersectionReferenceId
                                        uint8_t* _choice_10 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                                            *_choice_10 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000400\033[0m| Choice selection: 0";
                                        
                                                // RoadSegmentReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_560 = (char*) buffer++;
                                                *_tmp_560 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000401\033[0m| Optional field region = " << *_tmp_560;
                                                
                                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000402\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_561 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_561 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000403\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].id.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_562 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_562 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                                        {
                                            *_choice_10 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000404\033[0m| Choice selection: 1";
                                        
                                                // IntersectionReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_563 = (char*) buffer++;
                                                *_tmp_563 = (ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m000405\033[0m| Optional field region = " << *_tmp_563;
                                                
                                                if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000406\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_564 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_564 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000407\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].id.value) << 
                                                                 " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_565 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_565 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_10) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].map_reference[0]'; message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(lane_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000408\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id[0].value) << 
                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_566 = (uint8_t*) buffer++;
                                        *_tmp_566 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].lane_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(connection_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000409\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id[0].value) << 
                                                         " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_567 = (uint8_t*) buffer++;
                                        *_tmp_567 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position.size() != 0) {
                                        // Field:  type(LongitudinalLanePosition) name(longitudinal_lane_position) extGroup(0)
                                            // LongitudinalLanePosition  SEQUENCE
                                                //  longitudinalLanePositionValue      LongitudinalLanePositionValue          
                                                //  longitudinalLanePositionConfidence LongitudinalLanePositionConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(LongitudinalLanePositionValue) name(longitudinal_lane_position_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(32767) span(32768) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000410\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            }
                                            
                                            float _tmp_569 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            _tmp_569 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_569);
                                            uint16_t* _tmp_568 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_568 = static_cast<uint16_t>(_tmp_569);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(LongitudinalLanePositionConfidence) name(longitudinal_lane_position_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(1023) span(1024) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000411\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value) << 
                                                             " payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value: " << ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            }
                                            
                                            float _tmp_571 = ros->payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            _tmp_571 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_571);
                                            uint16_t* _tmp_570 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_570 = static_cast<uint16_t>(_tmp_571);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[a].perceived_object_container[0].perceived_objects.elements[k].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(*_ext_flag_267) {
                                    }
                            }
                            
                            if(*_ext_flag_153) {
                            }
                    }
                    
                    if(*_ext_flag_150) {
                    }
            
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_1) << ") selected in CHOICE WrappedCpmContainer in 'payload.cpm_containers.elements[a]'; message dropped.";
                return -1;
            }
        }
        
        if(*_ext_flag_4) {
        }
    
	
            return buffer - start;
        }
    } 
}