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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0
 * 
 * Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <cpm_v2_23_cpm_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_cpm_v2_23_cpm_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const cpm_v2_23_cpm_pdu_descriptions_msgs::CollectivePerceptionMessage::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<cpm_v2_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const cpm_v2_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage* ros, const uint8_t *buffer)
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
            logger->debug() << "|\033[38;5;94m008288\033[0m| " << tools::getTypeName(ros->its_header.protocol_version.value) << 
                         " its_header.protocol_version.value: " << static_cast<int>(ros->its_header.protocol_version.value);
        }
        
        uint8_t* _tmp_9309 = (uint8_t*) buffer++;
        *_tmp_9309 = ros->its_header.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m008289\033[0m| " << tools::getTypeName(ros->its_header.message_id.value) << 
                         " its_header.message_id.value: " << static_cast<int>(ros->its_header.message_id.value);
        }
        
        uint8_t* _tmp_9310 = (uint8_t*) buffer++;
        *_tmp_9310 = ros->its_header.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m008290\033[0m| " << tools::getTypeName(ros->its_header.station_id.value) << 
                         " its_header.station_id.value: " << ros->its_header.station_id.value;
        }
        
        uint32_t* _tmp_9311 = (uint32_t*) buffer; buffer += 4;
        *_tmp_9311 = ros->its_header.station_id.value; 
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
        uint8_t* _ext_flag_4178 = (uint8_t*) buffer++;  // Write extension flag for CpmPayload
        *_ext_flag_4178 = 0;  
        
        // Optional fields bytemap
        
        // Field:  type(ManagementContainer) name(management_container) extGroup(0)
            // ManagementContainer  SEQUENCE
                //  referenceTime     TimestampIts                
                //  referencePosition ReferencePosition           
                //  segmentationInfo  MessageSegmentationInfo   OPTIONAL  
                //  messageRateRange  MessageRateRange          OPTIONAL  
                //  ...
            uint8_t* _ext_flag_4179 = (uint8_t*) buffer++;  // Write extension flag for ManagementContainer
            *_ext_flag_4179 = 0;  
            
            // Optional fields bytemap
            char* _tmp_9312 = (char*) buffer++;
            *_tmp_9312 = (ros->payload.management_container.segmentation_info.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m008291\033[0m| Optional field segmentation_info = " << *_tmp_9312;
            char* _tmp_9313 = (char*) buffer++;
            *_tmp_9313 = (ros->payload.management_container.message_rate_range.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m008292\033[0m| Optional field message_rate_range = " << *_tmp_9313;
            
            // Field:  type(TimestampIts) name(reference_time) extGroup(0)
            // Real
            
            // FLOAT  min(0) max(4398046511103) span(4398046511104) scaleDivisor(1000.0) dataType(Float)
            if(debug) {
                logger->debug() << "|\033[38;5;94m008293\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_time.value) << 
                             " payload.management_container.reference_time.value: " << ros->payload.management_container.reference_time.value;
            }
            
            float _tmp_9315 = ros->payload.management_container.reference_time.value;
            _tmp_9315 *= 1000.0;
            __aux64__ = static_cast<uint64_t>(_tmp_9315);
            uint64_t* _tmp_9314 = (uint64_t*) buffer; buffer += 8;
            *_tmp_9314 = static_cast<uint64_t>(_tmp_9315);
            
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
                    logger->debug() << "|\033[38;5;94m008294\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.latitude.value) << 
                                 " payload.management_container.reference_position.latitude.value: " << ros->payload.management_container.reference_position.latitude.value;
                }
                
                double _tmp_9317 = ros->payload.management_container.reference_position.latitude.value;
                _tmp_9317 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_9317);
                _tmp_9317 -= -900000000;
                uint32_t* _tmp_9316 = (uint32_t*) buffer; buffer += 4;
                *_tmp_9316 = static_cast<uint32_t>(_tmp_9317);
                
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
                    logger->debug() << "|\033[38;5;94m008295\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.longitude.value) << 
                                 " payload.management_container.reference_position.longitude.value: " << ros->payload.management_container.reference_position.longitude.value;
                }
                
                double _tmp_9319 = ros->payload.management_container.reference_position.longitude.value;
                _tmp_9319 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_9319);
                _tmp_9319 -= -1800000000;
                uint32_t* _tmp_9318 = (uint32_t*) buffer; buffer += 4;
                *_tmp_9318 = static_cast<uint32_t>(_tmp_9319);
                
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
                        logger->debug() << "|\033[38;5;94m008296\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    }
                    
                    float _tmp_9321 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    _tmp_9321 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_9321);
                    uint16_t* _tmp_9320 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_9320 = static_cast<uint16_t>(_tmp_9321);
                    
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
                        logger->debug() << "|\033[38;5;94m008297\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    }
                    
                    float _tmp_9323 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    _tmp_9323 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_9323);
                    uint16_t* _tmp_9322 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_9322 = static_cast<uint16_t>(_tmp_9323);
                    
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
                        logger->debug() << "|\033[38;5;94m008298\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    }
                    
                    uint16_t* _tmp_9324 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_9324 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value; 
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
                        logger->debug() << "|\033[38;5;94m008299\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_value.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_value.value: " << ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    }
                    
                    float _tmp_9326 = ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    _tmp_9326 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_9326);
                    _tmp_9326 -= -100000;
                    uint32_t* _tmp_9325 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_9325 = static_cast<uint32_t>(_tmp_9326);
                    
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
                        logger->debug() << "|\033[38;5;94m008300\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->payload.management_container.reference_position.altitude.altitude_confidence.value);
                    }
                    
                    uint8_t* _tmp_9327 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_9327 = ros->payload.management_container.reference_position.altitude.altitude_confidence.value; 
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
                        logger->debug() << "|\033[38;5;94m008301\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].total_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].total_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].total_msg_no.value);
                    }
                    
                    uint8_t* _tmp_9328 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].total_msg_no.value - 1;
                    *_tmp_9328 = __aux64__;
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
                        logger->debug() << "|\033[38;5;94m008302\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].this_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].this_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].this_msg_no.value);
                    }
                    
                    uint8_t* _tmp_9329 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].this_msg_no.value - 1;
                    *_tmp_9329 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m008303\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value);
                        }
                        
                        uint8_t* _tmp_9330 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value - 1;
                        *_tmp_9330 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m008304\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value);
                        }
                        
                        uint8_t* _tmp_9331 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value - -5;
                        *_tmp_9331 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m008305\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value);
                        }
                        
                        uint8_t* _tmp_9332 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value - 1;
                        *_tmp_9332 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m008306\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value);
                        }
                        
                        uint8_t* _tmp_9333 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value - -5;
                        *_tmp_9333 = __aux64__;
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
            
            if(*_ext_flag_4179) {
            }
        
        // Field:  type(ConstraintWrappedCpmContainers) name(cpm_containers) extGroup(0)
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
        __aux64__ = ros->payload.cpm_containers.elements.size();
        if(__aux64__ > 8) __aux64__ = 8;
        uint16_t* _tmp_9335 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_9335 = __aux64__ - 1;
        
        int __ify = __aux64__;
        for(int y = 0; y < __ify; y++) { 
            
            // Choice
               // #0  originatingVehicleContainer   OriginatingVehicleContainer
               // #1  originatingRsuContainer   OriginatingRsuContainer
               // #2  sensorInformationContainer   SensorInformationContainer
               // #3  perceptionRegionContainer   PerceptionRegionContainer
               // #4  perceivedObjectContainer   PerceivedObjectContainer
            uint8_t* _choice_297 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->payload.cpm_containers.elements[y].originating_vehicle_container.size() != 0) {  // CHOICE 0  fieldType(WrappedCpmContainer) 
                *_choice_297 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m008308\033[0m| Choice selection: 0";
            
                    // OriginatingVehicleContainer  SEQUENCE
                        //  orientationAngle Wgs84Angle         
                        //  pitchAngle       CartesianAngle   OPTIONAL  
                        //  rollAngle        CartesianAngle   OPTIONAL  
                        //  trailerDataSet   TrailerDataSet   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_4195 = (uint8_t*) buffer++;  // Write extension flag for OriginatingVehicleContainer
                    *_ext_flag_4195 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_9336 = (char*) buffer++;
                    *_tmp_9336 = (ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m008309\033[0m| Optional field pitch_angle = " << *_tmp_9336;
                    char* _tmp_9337 = (char*) buffer++;
                    *_tmp_9337 = (ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m008310\033[0m| Optional field roll_angle = " << *_tmp_9337;
                    char* _tmp_9338 = (char*) buffer++;
                    *_tmp_9338 = (ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m008311\033[0m| Optional field trailer_data_set = " << *_tmp_9338;
                    
                    // Field:  type(Wgs84Angle) name(orientation_angle) extGroup(0)
                        // Wgs84Angle  SEQUENCE
                            //  value      Wgs84AngleValue          
                            //  confidence Wgs84AngleConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(Wgs84AngleValue) name(value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m008312\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.value.value) << 
                                         " payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.value.value: " << ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.value.value;
                        }
                        
                        float _tmp_9340 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.value.value;
                        _tmp_9340 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_9340);
                        uint16_t* _tmp_9339 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_9339 = static_cast<uint16_t>(_tmp_9340);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Wgs84AngleConfidence) name(confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m008313\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.confidence.value) << 
                                         " payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.confidence.value);
                        }
                        
                        float _tmp_9342 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.confidence.value;
                        _tmp_9342 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_9342);
                        _tmp_9342 -= 1;
                        uint8_t* _tmp_9341 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_9341 = static_cast<uint8_t>(_tmp_9342);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    if(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(pitch_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m008314\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].value.value: " << ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].value.value;
                            }
                            
                            float _tmp_9344 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].value.value;
                            _tmp_9344 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_9344);
                            uint16_t* _tmp_9343 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_9343 = static_cast<uint16_t>(_tmp_9344);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m008315\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].confidence.value);
                            }
                            
                            float _tmp_9346 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].confidence.value;
                            _tmp_9346 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_9346);
                            _tmp_9346 -= 1;
                            uint8_t* _tmp_9345 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_9345 = static_cast<uint8_t>(_tmp_9346);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(roll_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m008316\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].value.value: " << ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].value.value;
                            }
                            
                            float _tmp_9348 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].value.value;
                            _tmp_9348 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_9348);
                            uint16_t* _tmp_9347 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_9347 = static_cast<uint16_t>(_tmp_9348);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m008317\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].confidence.value);
                            }
                            
                            float _tmp_9350 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].confidence.value;
                            _tmp_9350 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_9350);
                            _tmp_9350 -= 1;
                            uint8_t* _tmp_9349 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_9349 = static_cast<uint8_t>(_tmp_9350);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set.size() != 0) {
                        // Field:  type(TrailerDataSet) name(trailer_data_set) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(8) span(8) ext(true)
                        uint8_t* _ext_flag_4202 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].
                        *_ext_flag_4202 = 0; 
                        
                        __aux64__ = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        uint16_t* _tmp_9351 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_9351 = __aux64__ - 1;
                        
                        int __ifz = __aux64__;
                        for(int z = 0; z < __ifz; z++) { 
                            
                                // TrailerData  SEQUENCE
                                    //  refPointId       Identifier1B         
                                    //  hitchPointOffset StandardLength1B     
                                    //  frontOverhang    StandardLength1B   OPTIONAL  
                                    //  rearOverhang     StandardLength1B   OPTIONAL  
                                    //  trailerWidth     VehicleWidth       OPTIONAL  
                                    //  hitchAngle       CartesianAngle       
                                    //  ...
                                uint8_t* _ext_flag_4203 = (uint8_t*) buffer++;  // Write extension flag for TrailerData
                                *_ext_flag_4203 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_9352 = (char*) buffer++;
                                *_tmp_9352 = (ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008319\033[0m| Optional field front_overhang = " << *_tmp_9352;
                                char* _tmp_9353 = (char*) buffer++;
                                *_tmp_9353 = (ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008320\033[0m| Optional field rear_overhang = " << *_tmp_9353;
                                char* _tmp_9354 = (char*) buffer++;
                                *_tmp_9354 = (ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008321\033[0m| Optional field trailer_width = " << *_tmp_9354;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008322\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_9355 = (uint8_t*) buffer++;
                                *_tmp_9355 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(hitch_point_offset) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008323\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_point_offset.value) << 
                                                 " payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_point_offset.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_point_offset.value);
                                }
                                
                                float _tmp_9357 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_point_offset.value;
                                _tmp_9357 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9357);
                                uint8_t* _tmp_9356 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_9356 = static_cast<uint8_t>(_tmp_9357);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_point_offset.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_point_offset.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(front_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008324\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang[0].value);
                                    }
                                    
                                    float _tmp_9359 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang[0].value;
                                    _tmp_9359 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9359);
                                    uint8_t* _tmp_9358 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9358 = static_cast<uint8_t>(_tmp_9359);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].front_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(rear_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008325\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang[0].value);
                                    }
                                    
                                    float _tmp_9361 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang[0].value;
                                    _tmp_9361 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9361);
                                    uint8_t* _tmp_9360 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9360 = static_cast<uint8_t>(_tmp_9361);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].rear_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width.size() != 0) {
                                    // Field:  type(VehicleWidth) name(trailer_width) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008326\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width[0].value) << 
                                                     " payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width[0].value);
                                    }
                                    
                                    float _tmp_9363 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width[0].value;
                                    _tmp_9363 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9363);
                                    _tmp_9363 -= 1;
                                    uint8_t* _tmp_9362 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9362 = static_cast<uint8_t>(_tmp_9363);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].trailer_width[0].value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
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
                                        logger->debug() << "|\033[38;5;94m008327\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.value.value) << 
                                                     " payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.value.value: " << ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.value.value;
                                    }
                                    
                                    float _tmp_9365 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.value.value;
                                    _tmp_9365 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9365);
                                    uint16_t* _tmp_9364 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9364 = static_cast<uint16_t>(_tmp_9365);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008328\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.confidence.value) << 
                                                     " payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.confidence.value);
                                    }
                                    
                                    float _tmp_9367 = ros->payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.confidence.value;
                                    _tmp_9367 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9367);
                                    _tmp_9367 -= 1;
                                    uint8_t* _tmp_9366 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9366 = static_cast<uint8_t>(_tmp_9367);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_vehicle_container[0].trailer_data_set[0].elements[z].hitch_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                        return -1;
                                    }
                                
                                if(*_ext_flag_4203) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_4195) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[y].originating_rsu_container.size() != 0)  // CHOICE 1  fieldType(WrappedCpmContainer) 
            {
                *_choice_297 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m008329\033[0m| Choice selection: 1";
            
                    // OriginatingRsuContainer  SEQUENCE
                        //  mapReference MapReference   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_4211 = (uint8_t*) buffer++;  // Write extension flag for OriginatingRsuContainer
                    *_ext_flag_4211 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_9370 = (char*) buffer++;
                    *_tmp_9370 = (ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m008330\033[0m| Optional field map_reference = " << *_tmp_9370;
                    
                    if(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference.size() != 0) {
                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                        // Choice
                           // #0  roadsegment   RoadSegmentReferenceId
                           // #1  intersection   IntersectionReferenceId
                        uint8_t* _choice_298 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                            *_choice_298 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008331\033[0m| Choice selection: 0";
                        
                                // RoadSegmentReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_9371 = (char*) buffer++;
                                *_tmp_9371 = (ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008332\033[0m| Optional field region = " << *_tmp_9371;
                                
                                if(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008333\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_9372 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9372 = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008334\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value) << 
                                                 " payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                }
                                
                                uint16_t* _tmp_9373 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9373 = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                        {
                            *_choice_298 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008335\033[0m| Choice selection: 1";
                        
                                // IntersectionReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_9374 = (char*) buffer++;
                                *_tmp_9374 = (ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008336\033[0m| Optional field region = " << *_tmp_9374;
                                
                                if(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008337\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_9375 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9375 = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008338\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].id.value) << 
                                                 " payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                }
                                
                                uint16_t* _tmp_9376 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9376 = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_298) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[y].originating_rsu_container[0].map_reference[0]'; message dropped.";
                            return -1;
                        }
                    }
                    
                    if(*_ext_flag_4211) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[y].sensor_information_container.size() != 0)  // CHOICE 2  fieldType(WrappedCpmContainer) 
            {
                *_choice_297 = 2;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m008339\033[0m| Choice selection: 2";
            
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                uint8_t* _ext_flag_4217 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].sensor_information_container[0].
                *_ext_flag_4217 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements.size();
                if(__aux64__ > 128) __aux64__ = 128;
                uint16_t* _tmp_9378 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_9378 = __aux64__ - 1;
                
                int __ifa = __aux64__;
                for(int a = 0; a < __ifa; a++) { 
                    
                        // SensorInformation  SEQUENCE
                            //  sensorId                   Identifier1B                           
                            //  sensorType                 SensorType                             
                            //  perceptionRegionShape      Shape                                OPTIONAL  
                            //  perceptionRegionConfidence ConfidenceLevel                      OPTIONAL  
                            //  shadowingApplies           SensorInformation_shadowingApplies     
                            //  ...
                        uint8_t* _ext_flag_4218 = (uint8_t*) buffer++;  // Write extension flag for SensorInformation
                        *_ext_flag_4218 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_9379 = (char*) buffer++;
                        *_tmp_9379 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m008341\033[0m| Optional field perception_region_shape = " << *_tmp_9379;
                        char* _tmp_9380 = (char*) buffer++;
                        *_tmp_9380 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m008342\033[0m| Optional field perception_region_confidence = " << *_tmp_9380;
                        
                        // Field:  type(Identifier1B) name(sensor_id) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m008343\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_id.value) << 
                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_id.value);
                        }
                        
                        uint8_t* _tmp_9381 = (uint8_t*) buffer++;
                        *_tmp_9381 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_id.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SensorType) name(sensor_type) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(31) span(32) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m008344\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_type.value) << 
                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_type.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_type.value);
                        }
                        
                        uint8_t* _tmp_9382 = (uint8_t*) buffer++;
                        *_tmp_9382 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_type.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_type.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 31) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].sensor_type.value' (" << __aux64__ << ") exceeds max allowable (31); message dropped.";
                            return -1;
                        }
                        
                        if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape.size() != 0) {
                            // Field:  type(Shape) name(perception_region_shape) extGroup(0)
                            // Choice
                               // #0  rectangular   RectangularShape
                               // #1  circular   CircularShape
                               // #2  polygonal   PolygonalShape
                               // #3  elliptical   EllipticalShape
                               // #4  radial   RadialShape
                               // #5  radialShapes   RadialShapes
                            uint8_t* _ext_flag_4221 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_4221 = 0; 
                            
                            uint8_t* _choice_299 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                *_choice_299 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008345\033[0m| Choice selection: 0";
                            
                                    // RectangularShape  SEQUENCE
                                        //  centerPoint CartesianPosition3d   OPTIONAL  
                                        //  semiLength  StandardLength12b       
                                        //  semiBreadth StandardLength12b       
                                        //  orientation Wgs84AngleValue       OPTIONAL  
                                        //  height      StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_9383 = (char*) buffer++;
                                    *_tmp_9383 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008346\033[0m| Optional field center_point = " << *_tmp_9383;
                                    char* _tmp_9384 = (char*) buffer++;
                                    *_tmp_9384 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008347\033[0m| Optional field orientation = " << *_tmp_9384;
                                    char* _tmp_9385 = (char*) buffer++;
                                    *_tmp_9385 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008348\033[0m| Optional field height = " << *_tmp_9385;
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_9386 = (char*) buffer++;
                                            *_tmp_9386 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008349\033[0m| Optional field z_coordinate = " << *_tmp_9386;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008350\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_9388 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            _tmp_9388 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9388);
                                            _tmp_9388 -= -32768;
                                            uint16_t* _tmp_9387 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9387 = static_cast<uint16_t>(_tmp_9388);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008351\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_9390 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            _tmp_9390 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9390);
                                            _tmp_9390 -= -32768;
                                            uint16_t* _tmp_9389 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9389 = static_cast<uint16_t>(_tmp_9390);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008352\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_9392 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                _tmp_9392 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9392);
                                                _tmp_9392 -= -32768;
                                                uint16_t* _tmp_9391 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9391 = static_cast<uint16_t>(_tmp_9392);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008353\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_length.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_length.value;
                                    }
                                    
                                    float _tmp_9394 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_length.value;
                                    _tmp_9394 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9394);
                                    uint16_t* _tmp_9393 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9393 = static_cast<uint16_t>(_tmp_9394);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008354\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_breadth.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    }
                                    
                                    float _tmp_9396 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    _tmp_9396 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9396);
                                    uint16_t* _tmp_9395 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9395 = static_cast<uint16_t>(_tmp_9396);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008355\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_9398 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        _tmp_9398 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9398);
                                        uint16_t* _tmp_9397 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9397 = static_cast<uint16_t>(_tmp_9398);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008356\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height[0].value;
                                        }
                                        
                                        float _tmp_9400 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height[0].value;
                                        _tmp_9400 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9400);
                                        uint16_t* _tmp_9399 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9399 = static_cast<uint16_t>(_tmp_9400);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                            {
                                *_choice_299 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008357\033[0m| Choice selection: 1";
                            
                                    // CircularShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  radius              StandardLength12b       
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_9401 = (char*) buffer++;
                                    *_tmp_9401 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008358\033[0m| Optional field shape_reference_point = " << *_tmp_9401;
                                    char* _tmp_9402 = (char*) buffer++;
                                    *_tmp_9402 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008359\033[0m| Optional field height = " << *_tmp_9402;
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_9403 = (char*) buffer++;
                                            *_tmp_9403 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008360\033[0m| Optional field z_coordinate = " << *_tmp_9403;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008361\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_9405 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_9405 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9405);
                                            _tmp_9405 -= -32768;
                                            uint16_t* _tmp_9404 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9404 = static_cast<uint16_t>(_tmp_9405);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008362\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_9407 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_9407 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9407);
                                            _tmp_9407 -= -32768;
                                            uint16_t* _tmp_9406 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9406 = static_cast<uint16_t>(_tmp_9407);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008363\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_9409 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_9409 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9409);
                                                _tmp_9409 -= -32768;
                                                uint16_t* _tmp_9408 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9408 = static_cast<uint16_t>(_tmp_9409);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008364\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].radius.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].radius.value;
                                    }
                                    
                                    float _tmp_9411 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].radius.value;
                                    _tmp_9411 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9411);
                                    uint16_t* _tmp_9410 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9410 = static_cast<uint16_t>(_tmp_9411);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008365\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height[0].value;
                                        }
                                        
                                        float _tmp_9413 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height[0].value;
                                        _tmp_9413 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9413);
                                        uint16_t* _tmp_9412 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9412 = static_cast<uint16_t>(_tmp_9413);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                            {
                                *_choice_299 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008366\033[0m| Choice selection: 2";
                            
                                    // PolygonalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                        //  polygon             SequenceOfCartesianPosition3d     
                                        //  height              StandardLength12b               OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_9414 = (char*) buffer++;
                                    *_tmp_9414 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008367\033[0m| Optional field shape_reference_point = " << *_tmp_9414;
                                    char* _tmp_9415 = (char*) buffer++;
                                    *_tmp_9415 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008368\033[0m| Optional field height = " << *_tmp_9415;
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_9416 = (char*) buffer++;
                                            *_tmp_9416 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008369\033[0m| Optional field z_coordinate = " << *_tmp_9416;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008370\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_9418 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_9418 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9418);
                                            _tmp_9418 -= -32768;
                                            uint16_t* _tmp_9417 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9417 = static_cast<uint16_t>(_tmp_9418);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008371\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_9420 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_9420 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9420);
                                            _tmp_9420 -= -32768;
                                            uint16_t* _tmp_9419 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9419 = static_cast<uint16_t>(_tmp_9420);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008372\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_9422 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_9422 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9422);
                                                _tmp_9422 -= -32768;
                                                uint16_t* _tmp_9421 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9421 = static_cast<uint16_t>(_tmp_9422);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_4237 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.
                                    *_ext_flag_4237 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_9423 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_9423 = __aux64__ - 1;
                                    
                                    int __ifb = __aux64__;
                                    for(int b = 0; b < __ifb; b++) { 
                                        
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_9424 = (char*) buffer++;
                                            *_tmp_9424 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008374\033[0m| Optional field z_coordinate = " << *_tmp_9424;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008375\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value;
                                            }
                                            
                                            float _tmp_9426 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value;
                                            _tmp_9426 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9426);
                                            _tmp_9426 -= -32768;
                                            uint16_t* _tmp_9425 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9425 = static_cast<uint16_t>(_tmp_9426);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008376\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value;
                                            }
                                            
                                            float _tmp_9428 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value;
                                            _tmp_9428 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9428);
                                            _tmp_9428 -= -32768;
                                            uint16_t* _tmp_9427 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9427 = static_cast<uint16_t>(_tmp_9428);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008377\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_9430 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value;
                                                _tmp_9430 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9430);
                                                _tmp_9430 -= -32768;
                                                uint16_t* _tmp_9429 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9429 = static_cast<uint16_t>(_tmp_9430);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008378\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height[0].value;
                                        }
                                        
                                        float _tmp_9432 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height[0].value;
                                        _tmp_9432 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9432);
                                        uint16_t* _tmp_9431 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9431 = static_cast<uint16_t>(_tmp_9432);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                            {
                                *_choice_299 = 3;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008379\033[0m| Choice selection: 3";
                            
                                    // EllipticalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  semiMajorAxisLength StandardLength12b       
                                        //  semiMinorAxisLength StandardLength12b       
                                        //  orientation         Wgs84AngleValue       OPTIONAL  
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_9433 = (char*) buffer++;
                                    *_tmp_9433 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008380\033[0m| Optional field shape_reference_point = " << *_tmp_9433;
                                    char* _tmp_9434 = (char*) buffer++;
                                    *_tmp_9434 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008381\033[0m| Optional field orientation = " << *_tmp_9434;
                                    char* _tmp_9435 = (char*) buffer++;
                                    *_tmp_9435 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008382\033[0m| Optional field height = " << *_tmp_9435;
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_9436 = (char*) buffer++;
                                            *_tmp_9436 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008383\033[0m| Optional field z_coordinate = " << *_tmp_9436;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008384\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_9438 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_9438 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9438);
                                            _tmp_9438 -= -32768;
                                            uint16_t* _tmp_9437 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9437 = static_cast<uint16_t>(_tmp_9438);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008385\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_9440 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_9440 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9440);
                                            _tmp_9440 -= -32768;
                                            uint16_t* _tmp_9439 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9439 = static_cast<uint16_t>(_tmp_9440);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008386\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_9442 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_9442 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9442);
                                                _tmp_9442 -= -32768;
                                                uint16_t* _tmp_9441 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9441 = static_cast<uint16_t>(_tmp_9442);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008387\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    }
                                    
                                    float _tmp_9444 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    _tmp_9444 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9444);
                                    uint16_t* _tmp_9443 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9443 = static_cast<uint16_t>(_tmp_9444);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008388\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    }
                                    
                                    float _tmp_9446 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    _tmp_9446 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9446);
                                    uint16_t* _tmp_9445 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9445 = static_cast<uint16_t>(_tmp_9446);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008389\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_9448 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        _tmp_9448 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9448);
                                        uint16_t* _tmp_9447 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9447 = static_cast<uint16_t>(_tmp_9448);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008390\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height[0].value;
                                        }
                                        
                                        float _tmp_9450 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height[0].value;
                                        _tmp_9450 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9450);
                                        uint16_t* _tmp_9449 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9449 = static_cast<uint16_t>(_tmp_9450);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                            {
                                *_choice_299 = 4;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008391\033[0m| Choice selection: 4";
                            
                                    // RadialShape  SEQUENCE
                                        //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                        //  range                                 StandardLength12b       
                                        //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                        //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                        //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                        //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_9451 = (char*) buffer++;
                                    *_tmp_9451 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008392\033[0m| Optional field shape_reference_point = " << *_tmp_9451;
                                    char* _tmp_9452 = (char*) buffer++;
                                    *_tmp_9452 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008393\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_9452;
                                    char* _tmp_9453 = (char*) buffer++;
                                    *_tmp_9453 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008394\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_9453;
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_9454 = (char*) buffer++;
                                            *_tmp_9454 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008395\033[0m| Optional field z_coordinate = " << *_tmp_9454;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008396\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_9456 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_9456 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9456);
                                            _tmp_9456 -= -32768;
                                            uint16_t* _tmp_9455 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9455 = static_cast<uint16_t>(_tmp_9456);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008397\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_9458 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_9458 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9458);
                                            _tmp_9458 -= -32768;
                                            uint16_t* _tmp_9457 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9457 = static_cast<uint16_t>(_tmp_9458);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008398\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_9460 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_9460 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9460);
                                                _tmp_9460 -= -32768;
                                                uint16_t* _tmp_9459 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9459 = static_cast<uint16_t>(_tmp_9460);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008399\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].range.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].range.value;
                                    }
                                    
                                    float _tmp_9462 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].range.value;
                                    _tmp_9462 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9462);
                                    uint16_t* _tmp_9461 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9461 = static_cast<uint16_t>(_tmp_9462);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008400\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    }
                                    
                                    float _tmp_9464 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    _tmp_9464 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9464);
                                    uint16_t* _tmp_9463 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9463 = static_cast<uint16_t>(_tmp_9464);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008401\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    }
                                    
                                    float _tmp_9466 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    _tmp_9466 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9466);
                                    uint16_t* _tmp_9465 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9465 = static_cast<uint16_t>(_tmp_9466);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008402\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        }
                                        
                                        float _tmp_9468 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        _tmp_9468 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9468);
                                        uint16_t* _tmp_9467 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9467 = static_cast<uint16_t>(_tmp_9468);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008403\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        }
                                        
                                        float _tmp_9470 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        _tmp_9470 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9470);
                                        uint16_t* _tmp_9469 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9469 = static_cast<uint16_t>(_tmp_9470);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                            {
                                *_choice_299 = 5;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008404\033[0m| Choice selection: 5";
                            
                                    // RadialShapes  SEQUENCE
                                        //  refPointId       Identifier1B                 
                                        //  xCoordinate      CartesianCoordinateSmall     
                                        //  yCoordinate      CartesianCoordinateSmall     
                                        //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                        //  radialShapesList RadialShapesList             
                                    // Optional fields bytemap
                                    char* _tmp_9471 = (char*) buffer++;
                                    *_tmp_9471 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008405\033[0m| Optional field z_coordinate = " << *_tmp_9471;
                                    
                                    // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008406\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].ref_point_id.value);
                                    }
                                    
                                    uint8_t* _tmp_9472 = (uint8_t*) buffer++;
                                    *_tmp_9472 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].ref_point_id.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].ref_point_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008407\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    }
                                    
                                    float _tmp_9474 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    _tmp_9474 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9474);
                                    _tmp_9474 -= -3094;
                                    uint16_t* _tmp_9473 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9473 = static_cast<uint16_t>(_tmp_9474);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008408\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                     " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    }
                                    
                                    float _tmp_9476 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    _tmp_9476 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9476);
                                    _tmp_9476 -= -3094;
                                    uint16_t* _tmp_9475 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9475 = static_cast<uint16_t>(_tmp_9476);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                        // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008409\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                         " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        }
                                        
                                        float _tmp_9478 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        _tmp_9478 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9478);
                                        _tmp_9478 -= -3094;
                                        uint16_t* _tmp_9477 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9477 = static_cast<uint16_t>(_tmp_9478);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_4261 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.
                                    *_ext_flag_4261 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_9479 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_9479 = __aux64__ - 1;
                                    
                                    int __ifc = __aux64__;
                                    for(int c = 0; c < __ifc; c++) { 
                                        
                                            // RadialShapeDetails  SEQUENCE
                                                //  range                       StandardLength12b       
                                                //  horizontalOpeningAngleStart CartesianAngleValue     
                                                //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_9480 = (char*) buffer++;
                                            *_tmp_9480 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008411\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_9480;
                                            char* _tmp_9481 = (char*) buffer++;
                                            *_tmp_9481 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008412\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_9481;
                                            
                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008413\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value;
                                            }
                                            
                                            float _tmp_9483 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value;
                                            _tmp_9483 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9483);
                                            uint16_t* _tmp_9482 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9482 = static_cast<uint16_t>(_tmp_9483);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008414\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value;
                                            }
                                            
                                            float _tmp_9485 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value;
                                            _tmp_9485 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9485);
                                            uint16_t* _tmp_9484 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9484 = static_cast<uint16_t>(_tmp_9485);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008415\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value) << 
                                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value;
                                            }
                                            
                                            float _tmp_9487 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value;
                                            _tmp_9487 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9487);
                                            uint16_t* _tmp_9486 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9486 = static_cast<uint16_t>(_tmp_9487);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008416\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value;
                                                }
                                                
                                                float _tmp_9489 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value;
                                                _tmp_9489 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9489);
                                                uint16_t* _tmp_9488 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9488 = static_cast<uint16_t>(_tmp_9489);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008417\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value) << 
                                                                 " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value;
                                                }
                                                
                                                float _tmp_9491 = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value;
                                                _tmp_9491 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9491);
                                                uint16_t* _tmp_9490 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9490 = static_cast<uint16_t>(_tmp_9491);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_299) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_shape[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence.size() != 0) {
                            // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(101) span(101) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m008418\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence[0].value) << 
                                             " payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence[0].value);
                            }
                            
                            uint8_t* _tmp_9492 = (uint8_t*) buffer++;
                            __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence[0].value - 1;
                            *_tmp_9492 = __aux64__;
                            __aux64__ = ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].perception_region_confidence[0].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(SensorInformation_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_9493 = (uint8_t*)buffer++;
                        *_tmp_9493 = (ros->payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m008419\033[0m| payload.cpm_containers.elements[y].sensor_information_container[0].elements[a].shadowing_applies: " << (*_tmp_9493);
                        
                        if(*_ext_flag_4218) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[y].perception_region_container.size() != 0)  // CHOICE 3  fieldType(WrappedCpmContainer) 
            {
                *_choice_297 = 3;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m008420\033[0m| Choice selection: 3";
            
                // SequenceOf
                // Data Type UInt16
                // SEQUENCE_OF  min(1) max(256) span(256) ext(true)
                uint8_t* _ext_flag_4268 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perception_region_container[0].
                *_ext_flag_4268 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements.size();
                if(__aux64__ > 256) __aux64__ = 256;
                uint16_t* _tmp_9495 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_9495 = __aux64__ - 1;
                
                int __ifd = __aux64__;
                for(int d = 0; d < __ifd; d++) { 
                    
                        // PerceptionRegion  SEQUENCE
                            //  measurementDeltaTime       DeltaTimeMilliSecondSigned            
                            //  perceptionRegionConfidence ConfidenceLevel                       
                            //  perceptionRegionShape      Shape                                 
                            //  shadowingApplies           PerceptionRegion_shadowingApplies     
                            //  sensorIdList               SequenceOfIdentifier1B              OPTIONAL  
                            //  numberOfPerceivedObjects   CardinalNumber1B                    OPTIONAL  
                            //  perceivedObjectIds         PerceivedObjectIds                  OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_4269 = (uint8_t*) buffer++;  // Write extension flag for PerceptionRegion
                        *_ext_flag_4269 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_9496 = (char*) buffer++;
                        *_tmp_9496 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m008422\033[0m| Optional field sensor_id_list = " << *_tmp_9496;
                        char* _tmp_9497 = (char*) buffer++;
                        *_tmp_9497 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m008423\033[0m| Optional field number_of_perceived_objects = " << *_tmp_9497;
                        char* _tmp_9498 = (char*) buffer++;
                        *_tmp_9498 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m008424\033[0m| Optional field perceived_object_ids = " << *_tmp_9498;
                        
                        // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m008425\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].measurement_delta_time.value) << 
                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].measurement_delta_time.value;
                        }
                        
                        float _tmp_9500 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].measurement_delta_time.value;
                        _tmp_9500 *= 1000.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_9500);
                        _tmp_9500 -= -2048;
                        uint16_t* _tmp_9499 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_9499 = static_cast<uint16_t>(_tmp_9500);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m008426\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_confidence.value) << 
                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_confidence.value);
                        }
                        
                        uint8_t* _tmp_9501 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_confidence.value - 1;
                        *_tmp_9501 = __aux64__;
                        __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_confidence.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
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
                        uint8_t* _ext_flag_4272 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_4272 = 0; 
                        
                        uint8_t* _choice_300 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_300 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008427\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  centerPoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength  StandardLength12b       
                                    //  semiBreadth StandardLength12b       
                                    //  orientation Wgs84AngleValue       OPTIONAL  
                                    //  height      StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_9502 = (char*) buffer++;
                                *_tmp_9502 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008428\033[0m| Optional field center_point = " << *_tmp_9502;
                                char* _tmp_9503 = (char*) buffer++;
                                *_tmp_9503 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008429\033[0m| Optional field orientation = " << *_tmp_9503;
                                char* _tmp_9504 = (char*) buffer++;
                                *_tmp_9504 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008430\033[0m| Optional field height = " << *_tmp_9504;
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9505 = (char*) buffer++;
                                        *_tmp_9505 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008431\033[0m| Optional field z_coordinate = " << *_tmp_9505;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008432\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_9507 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        _tmp_9507 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9507);
                                        _tmp_9507 -= -32768;
                                        uint16_t* _tmp_9506 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9506 = static_cast<uint16_t>(_tmp_9507);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008433\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_9509 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        _tmp_9509 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9509);
                                        _tmp_9509 -= -32768;
                                        uint16_t* _tmp_9508 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9508 = static_cast<uint16_t>(_tmp_9509);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008434\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_9511 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            _tmp_9511 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9511);
                                            _tmp_9511 -= -32768;
                                            uint16_t* _tmp_9510 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9510 = static_cast<uint16_t>(_tmp_9511);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008435\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_length.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_9513 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_length.value;
                                _tmp_9513 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9513);
                                uint16_t* _tmp_9512 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9512 = static_cast<uint16_t>(_tmp_9513);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008436\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_breadth.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_9515 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_breadth.value;
                                _tmp_9515 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9515);
                                uint16_t* _tmp_9514 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9514 = static_cast<uint16_t>(_tmp_9515);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008437\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_9517 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation[0].value;
                                    _tmp_9517 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9517);
                                    uint16_t* _tmp_9516 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9516 = static_cast<uint16_t>(_tmp_9517);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008438\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_9519 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height[0].value;
                                    _tmp_9519 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9519);
                                    uint16_t* _tmp_9518 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9518 = static_cast<uint16_t>(_tmp_9519);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_300 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008439\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_9520 = (char*) buffer++;
                                *_tmp_9520 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008440\033[0m| Optional field shape_reference_point = " << *_tmp_9520;
                                char* _tmp_9521 = (char*) buffer++;
                                *_tmp_9521 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008441\033[0m| Optional field height = " << *_tmp_9521;
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9522 = (char*) buffer++;
                                        *_tmp_9522 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008442\033[0m| Optional field z_coordinate = " << *_tmp_9522;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008443\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_9524 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_9524 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9524);
                                        _tmp_9524 -= -32768;
                                        uint16_t* _tmp_9523 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9523 = static_cast<uint16_t>(_tmp_9524);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008444\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_9526 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_9526 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9526);
                                        _tmp_9526 -= -32768;
                                        uint16_t* _tmp_9525 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9525 = static_cast<uint16_t>(_tmp_9526);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008445\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_9528 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_9528 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9528);
                                            _tmp_9528 -= -32768;
                                            uint16_t* _tmp_9527 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9527 = static_cast<uint16_t>(_tmp_9528);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008446\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].radius.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].radius.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].radius.value;
                                }
                                
                                float _tmp_9530 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].radius.value;
                                _tmp_9530 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9530);
                                uint16_t* _tmp_9529 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9529 = static_cast<uint16_t>(_tmp_9530);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008447\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_9532 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height[0].value;
                                    _tmp_9532 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9532);
                                    uint16_t* _tmp_9531 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9531 = static_cast<uint16_t>(_tmp_9532);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_300 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008448\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_9533 = (char*) buffer++;
                                *_tmp_9533 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008449\033[0m| Optional field shape_reference_point = " << *_tmp_9533;
                                char* _tmp_9534 = (char*) buffer++;
                                *_tmp_9534 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008450\033[0m| Optional field height = " << *_tmp_9534;
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9535 = (char*) buffer++;
                                        *_tmp_9535 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008451\033[0m| Optional field z_coordinate = " << *_tmp_9535;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008452\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_9537 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_9537 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9537);
                                        _tmp_9537 -= -32768;
                                        uint16_t* _tmp_9536 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9536 = static_cast<uint16_t>(_tmp_9537);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008453\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_9539 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_9539 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9539);
                                        _tmp_9539 -= -32768;
                                        uint16_t* _tmp_9538 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9538 = static_cast<uint16_t>(_tmp_9539);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008454\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_9541 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_9541 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9541);
                                            _tmp_9541 -= -32768;
                                            uint16_t* _tmp_9540 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9540 = static_cast<uint16_t>(_tmp_9541);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_4288 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.
                                *_ext_flag_4288 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_9542 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_9542 = __aux64__ - 1;
                                
                                int __ife = __aux64__;
                                for(int e = 0; e < __ife; e++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9543 = (char*) buffer++;
                                        *_tmp_9543 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008456\033[0m| Optional field z_coordinate = " << *_tmp_9543;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008457\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].x_coordinate.value;
                                        }
                                        
                                        float _tmp_9545 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].x_coordinate.value;
                                        _tmp_9545 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9545);
                                        _tmp_9545 -= -32768;
                                        uint16_t* _tmp_9544 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9544 = static_cast<uint16_t>(_tmp_9545);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008458\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].y_coordinate.value;
                                        }
                                        
                                        float _tmp_9547 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].y_coordinate.value;
                                        _tmp_9547 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9547);
                                        _tmp_9547 -= -32768;
                                        uint16_t* _tmp_9546 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9546 = static_cast<uint16_t>(_tmp_9547);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008459\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_9549 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate[0].value;
                                            _tmp_9549 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9549);
                                            _tmp_9549 -= -32768;
                                            uint16_t* _tmp_9548 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9548 = static_cast<uint16_t>(_tmp_9549);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].polygon.elements[e].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008460\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_9551 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height[0].value;
                                    _tmp_9551 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9551);
                                    uint16_t* _tmp_9550 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9550 = static_cast<uint16_t>(_tmp_9551);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_300 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008461\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         Wgs84AngleValue       OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_9552 = (char*) buffer++;
                                *_tmp_9552 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008462\033[0m| Optional field shape_reference_point = " << *_tmp_9552;
                                char* _tmp_9553 = (char*) buffer++;
                                *_tmp_9553 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008463\033[0m| Optional field orientation = " << *_tmp_9553;
                                char* _tmp_9554 = (char*) buffer++;
                                *_tmp_9554 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008464\033[0m| Optional field height = " << *_tmp_9554;
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9555 = (char*) buffer++;
                                        *_tmp_9555 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008465\033[0m| Optional field z_coordinate = " << *_tmp_9555;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008466\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_9557 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_9557 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9557);
                                        _tmp_9557 -= -32768;
                                        uint16_t* _tmp_9556 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9556 = static_cast<uint16_t>(_tmp_9557);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008467\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_9559 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_9559 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9559);
                                        _tmp_9559 -= -32768;
                                        uint16_t* _tmp_9558 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9558 = static_cast<uint16_t>(_tmp_9559);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008468\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_9561 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_9561 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9561);
                                            _tmp_9561 -= -32768;
                                            uint16_t* _tmp_9560 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9560 = static_cast<uint16_t>(_tmp_9561);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008469\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_major_axis_length.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_9563 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                _tmp_9563 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9563);
                                uint16_t* _tmp_9562 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9562 = static_cast<uint16_t>(_tmp_9563);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008470\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_minor_axis_length.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_9565 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                _tmp_9565 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9565);
                                uint16_t* _tmp_9564 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9564 = static_cast<uint16_t>(_tmp_9565);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008471\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_9567 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation[0].value;
                                    _tmp_9567 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9567);
                                    uint16_t* _tmp_9566 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9566 = static_cast<uint16_t>(_tmp_9567);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008472\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_9569 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height[0].value;
                                    _tmp_9569 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9569);
                                    uint16_t* _tmp_9568 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9568 = static_cast<uint16_t>(_tmp_9569);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_300 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008473\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                    //  range                                 StandardLength12b       
                                    //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                    //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                    //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_9570 = (char*) buffer++;
                                *_tmp_9570 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008474\033[0m| Optional field shape_reference_point = " << *_tmp_9570;
                                char* _tmp_9571 = (char*) buffer++;
                                *_tmp_9571 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008475\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_9571;
                                char* _tmp_9572 = (char*) buffer++;
                                *_tmp_9572 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008476\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_9572;
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9573 = (char*) buffer++;
                                        *_tmp_9573 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008477\033[0m| Optional field z_coordinate = " << *_tmp_9573;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008478\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_9575 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_9575 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9575);
                                        _tmp_9575 -= -32768;
                                        uint16_t* _tmp_9574 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9574 = static_cast<uint16_t>(_tmp_9575);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008479\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_9577 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_9577 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9577);
                                        _tmp_9577 -= -32768;
                                        uint16_t* _tmp_9576 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9576 = static_cast<uint16_t>(_tmp_9577);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008480\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_9579 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_9579 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9579);
                                            _tmp_9579 -= -32768;
                                            uint16_t* _tmp_9578 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9578 = static_cast<uint16_t>(_tmp_9579);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008481\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].range.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].range.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].range.value;
                                }
                                
                                float _tmp_9581 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].range.value;
                                _tmp_9581 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9581);
                                uint16_t* _tmp_9580 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9580 = static_cast<uint16_t>(_tmp_9581);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008482\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_9583 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                _tmp_9583 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9583);
                                uint16_t* _tmp_9582 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9582 = static_cast<uint16_t>(_tmp_9583);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008483\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_9585 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                _tmp_9585 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9585);
                                uint16_t* _tmp_9584 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9584 = static_cast<uint16_t>(_tmp_9585);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008484\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_9587 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_9587 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9587);
                                    uint16_t* _tmp_9586 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9586 = static_cast<uint16_t>(_tmp_9587);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008485\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_9589 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_9589 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9589);
                                    uint16_t* _tmp_9588 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9588 = static_cast<uint16_t>(_tmp_9589);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_300 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008486\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_9590 = (char*) buffer++;
                                *_tmp_9590 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008487\033[0m| Optional field z_coordinate = " << *_tmp_9590;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008488\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_9591 = (uint8_t*) buffer++;
                                *_tmp_9591 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008489\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].x_coordinate.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_9593 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                _tmp_9593 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9593);
                                _tmp_9593 -= -3094;
                                uint16_t* _tmp_9592 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9592 = static_cast<uint16_t>(_tmp_9593);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008490\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].y_coordinate.value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_9595 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                _tmp_9595 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9595);
                                _tmp_9595 -= -3094;
                                uint16_t* _tmp_9594 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9594 = static_cast<uint16_t>(_tmp_9595);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008491\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate[0].value) << 
                                                     " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_9597 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    _tmp_9597 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9597);
                                    _tmp_9597 -= -3094;
                                    uint16_t* _tmp_9596 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9596 = static_cast<uint16_t>(_tmp_9597);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_4312 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.
                                *_ext_flag_4312 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_9598 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_9598 = __aux64__ - 1;
                                
                                int __iff = __aux64__;
                                for(int f = 0; f < __iff; f++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9599 = (char*) buffer++;
                                        *_tmp_9599 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008493\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_9599;
                                        char* _tmp_9600 = (char*) buffer++;
                                        *_tmp_9600 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008494\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_9600;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008495\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].range.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].range.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].range.value;
                                        }
                                        
                                        float _tmp_9602 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].range.value;
                                        _tmp_9602 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9602);
                                        uint16_t* _tmp_9601 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9601 = static_cast<uint16_t>(_tmp_9602);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008496\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_start.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_9604 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_start.value;
                                        _tmp_9604 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9604);
                                        uint16_t* _tmp_9603 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9603 = static_cast<uint16_t>(_tmp_9604);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008497\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_end.value) << 
                                                         " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_9606 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_end.value;
                                        _tmp_9606 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9606);
                                        uint16_t* _tmp_9605 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9605 = static_cast<uint16_t>(_tmp_9606);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008498\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_9608 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start[0].value;
                                            _tmp_9608 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9608);
                                            uint16_t* _tmp_9607 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9607 = static_cast<uint16_t>(_tmp_9608);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008499\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end[0].value) << 
                                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_9610 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end[0].value;
                                            _tmp_9610 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9610);
                                            uint16_t* _tmp_9609 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9609 = static_cast<uint16_t>(_tmp_9610);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[f].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_300) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perception_region_shape'; message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(PerceptionRegion_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_9611 = (uint8_t*)buffer++;
                        *_tmp_9611 = (ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m008500\033[0m| payload.cpm_containers.elements[y].perception_region_container[0].elements[d].shadowing_applies: " << (*_tmp_9611);
                        
                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list.size() != 0) {
                            // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                            uint8_t* _ext_flag_4318 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].
                            *_ext_flag_4318 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements.size();
                            if(__aux64__ > 128) __aux64__ = 128;
                            uint16_t* _tmp_9612 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_9612 = __aux64__ - 1;
                            
                            int __ifg = __aux64__;
                            for(int g = 0; g < __ifg; g++) { 
                                
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008502\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements[g].value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements[g].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements[g].value);
                                }
                                
                                uint8_t* _tmp_9613 = (uint8_t*) buffer++;
                                *_tmp_9613 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements[g].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements[g].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements[g].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].sensor_id_list[0].elements[g].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects.size() != 0) {
                            // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m008503\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects[0].value) << 
                                             " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects[0].value);
                            }
                            
                            uint8_t* _tmp_9614 = (uint8_t*) buffer++;
                            *_tmp_9614 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects[0].value; 
                            __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].number_of_perceived_objects[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids.size() != 0) {
                            // Field:  type(PerceivedObjectIds) name(perceived_object_ids) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                            uint8_t* _ext_flag_4321 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].
                            *_ext_flag_4321 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements.size();
                            if(__aux64__ > 255) __aux64__ = 255;
                            uint16_t* _tmp_9615 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_9615 = __aux64__;
                            
                            int __ifh = __aux64__;
                            for(int h = 0; h < __ifh; h++) { 
                                
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008505\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements[h].value) << 
                                                 " payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements[h].value: " << ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements[h].value;
                                }
                                
                                uint16_t* _tmp_9616 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9616 = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements[h].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements[h].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements[h].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perception_region_container[0].elements[d].perceived_object_ids[0].elements[h].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(*_ext_flag_4269) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[y].perceived_object_container.size() != 0)  // CHOICE 4  fieldType(WrappedCpmContainer) 
            {
                *_choice_297 = 4;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m008506\033[0m| Choice selection: 4";
            
                    // PerceivedObjectContainer  SEQUENCE
                        //  numberOfPerceivedObjects CardinalNumber1B     
                        //  perceivedObjects         PerceivedObjects     
                        //  ...
                    uint8_t* _ext_flag_4323 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObjectContainer
                    *_ext_flag_4323 = 0;  
                    
                    // Optional fields bytemap
                    
                    // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m008507\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].number_of_perceived_objects.value) << 
                                     " payload.cpm_containers.elements[y].perceived_object_container[0].number_of_perceived_objects.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].number_of_perceived_objects.value);
                    }
                    
                    uint8_t* _tmp_9618 = (uint8_t*) buffer++;
                    *_tmp_9618 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].number_of_perceived_objects.value; 
                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].number_of_perceived_objects.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(PerceivedObjects) name(perceived_objects) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                    uint8_t* _ext_flag_4325 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.
                    *_ext_flag_4325 = 0; 
                    
                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_9619 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_9619 = __aux64__;
                    
                    int __ifi = __aux64__;
                    for(int i = 0; i < __ifi; i++) { 
                        
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
                            uint8_t* _ext_flag_4326 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObject
                            *_ext_flag_4326 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_9620 = (char*) buffer++;
                            *_tmp_9620 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008509\033[0m| Optional field object_id = " << *_tmp_9620;
                            char* _tmp_9621 = (char*) buffer++;
                            *_tmp_9621 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008510\033[0m| Optional field velocity = " << *_tmp_9621;
                            char* _tmp_9622 = (char*) buffer++;
                            *_tmp_9622 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008511\033[0m| Optional field acceleration = " << *_tmp_9622;
                            char* _tmp_9623 = (char*) buffer++;
                            *_tmp_9623 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008512\033[0m| Optional field angles = " << *_tmp_9623;
                            char* _tmp_9624 = (char*) buffer++;
                            *_tmp_9624 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008513\033[0m| Optional field z_angular_velocity = " << *_tmp_9624;
                            char* _tmp_9625 = (char*) buffer++;
                            *_tmp_9625 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008514\033[0m| Optional field lower_triangular_correlation_matrices = " << *_tmp_9625;
                            char* _tmp_9626 = (char*) buffer++;
                            *_tmp_9626 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008515\033[0m| Optional field object_dimension_z = " << *_tmp_9626;
                            char* _tmp_9627 = (char*) buffer++;
                            *_tmp_9627 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008516\033[0m| Optional field object_dimension_y = " << *_tmp_9627;
                            char* _tmp_9628 = (char*) buffer++;
                            *_tmp_9628 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008517\033[0m| Optional field object_dimension_x = " << *_tmp_9628;
                            char* _tmp_9629 = (char*) buffer++;
                            *_tmp_9629 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008518\033[0m| Optional field object_age = " << *_tmp_9629;
                            char* _tmp_9630 = (char*) buffer++;
                            *_tmp_9630 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008519\033[0m| Optional field object_perception_quality = " << *_tmp_9630;
                            char* _tmp_9631 = (char*) buffer++;
                            *_tmp_9631 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008520\033[0m| Optional field sensor_id_list = " << *_tmp_9631;
                            char* _tmp_9632 = (char*) buffer++;
                            *_tmp_9632 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008521\033[0m| Optional field classification = " << *_tmp_9632;
                            char* _tmp_9633 = (char*) buffer++;
                            *_tmp_9633 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m008522\033[0m| Optional field map_position = " << *_tmp_9633;
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id.size() != 0) {
                                // Field:  type(Identifier2B) name(object_id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008523\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id[0].value) << 
                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id[0].value;
                                }
                                
                                uint16_t* _tmp_9634 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9634 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_id[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m008524\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].measurement_delta_time.value) << 
                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].measurement_delta_time.value;
                            }
                            
                            float _tmp_9636 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].measurement_delta_time.value;
                            _tmp_9636 *= 1000.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_9636);
                            _tmp_9636 -= -2048;
                            uint16_t* _tmp_9635 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_9635 = static_cast<uint16_t>(_tmp_9636);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CartesianPosition3dWithConfidence) name(position) extGroup(0)
                                // CartesianPosition3dWithConfidence  SEQUENCE
                                    //  xCoordinate CartesianCoordinateWithConfidence     
                                    //  yCoordinate CartesianCoordinateWithConfidence     
                                    //  zCoordinate CartesianCoordinateWithConfidence   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_9637 = (char*) buffer++;
                                *_tmp_9637 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m008525\033[0m| Optional field z_coordinate = " << *_tmp_9637;
                                
                                // Field:  type(CartesianCoordinateWithConfidence) name(x_coordinate) extGroup(0)
                                    // CartesianCoordinateWithConfidence  SEQUENCE
                                        //  value      CartesianCoordinateLarge     
                                        //  confidence CoordinateConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008526\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.value.value;
                                    }
                                    
                                    float _tmp_9639 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.value.value;
                                    _tmp_9639 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9639);
                                    _tmp_9639 -= -131072;
                                    uint32_t* _tmp_9638 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_9638 = static_cast<uint32_t>(_tmp_9639);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008527\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_9641 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.confidence.value;
                                    _tmp_9641 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9641);
                                    _tmp_9641 -= 1;
                                    uint16_t* _tmp_9640 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9640 = static_cast<uint16_t>(_tmp_9641);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.x_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
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
                                        logger->debug() << "|\033[38;5;94m008528\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.value.value;
                                    }
                                    
                                    float _tmp_9643 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.value.value;
                                    _tmp_9643 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9643);
                                    _tmp_9643 -= -131072;
                                    uint32_t* _tmp_9642 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_9642 = static_cast<uint32_t>(_tmp_9643);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008529\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_9645 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.confidence.value;
                                    _tmp_9645 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9645);
                                    _tmp_9645 -= 1;
                                    uint16_t* _tmp_9644 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_9644 = static_cast<uint16_t>(_tmp_9645);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.y_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateWithConfidence) name(z_coordinate) extGroup(0)
                                        // CartesianCoordinateWithConfidence  SEQUENCE
                                            //  value      CartesianCoordinateLarge     
                                            //  confidence CoordinateConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008530\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].value.value) << 
                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].value.value;
                                        }
                                        
                                        float _tmp_9647 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].value.value;
                                        _tmp_9647 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9647);
                                        _tmp_9647 -= -131072;
                                        uint32_t* _tmp_9646 = (uint32_t*) buffer; buffer += 4;
                                        *_tmp_9646 = static_cast<uint32_t>(_tmp_9647);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008531\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].confidence.value) << 
                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].confidence.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].confidence.value;
                                        }
                                        
                                        float _tmp_9649 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].confidence.value;
                                        _tmp_9649 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9649);
                                        _tmp_9649 -= 1;
                                        uint16_t* _tmp_9648 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9648 = static_cast<uint16_t>(_tmp_9649);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                            return -1;
                                        }
                                }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity.size() != 0) {
                                // Field:  type(Velocity3dWithConfidence) name(velocity) extGroup(0)
                                // Choice
                                   // #0  polarVelocity   VelocityPolarWithZ
                                   // #1  cartesianVelocity   VelocityCartesian
                                uint8_t* _choice_301 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity.size() != 0) {  // CHOICE 0  fieldType(Velocity3dWithConfidence) 
                                    *_choice_301 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008532\033[0m| Choice selection: 0";
                                
                                        // VelocityPolarWithZ  SEQUENCE
                                            //  velocityMagnitude Speed                 
                                            //  velocityDirection CartesianAngle        
                                            //  zVelocity         VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9650 = (char*) buffer++;
                                        *_tmp_9650 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008533\033[0m| Optional field z_velocity = " << *_tmp_9650;
                                        
                                        // Field:  type(Speed) name(velocity_magnitude) extGroup(0)
                                            // Speed  SEQUENCE
                                                //  speedValue      SpeedValue          
                                                //  speedConfidence SpeedConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008534\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            }
                                            
                                            float _tmp_9652 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            _tmp_9652 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9652);
                                            uint16_t* _tmp_9651 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9651 = static_cast<uint16_t>(_tmp_9652);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008535\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value);
                                            }
                                            
                                            float _tmp_9654 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value;
                                            _tmp_9654 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9654);
                                            _tmp_9654 -= 1;
                                            uint8_t* _tmp_9653 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9653 = static_cast<uint8_t>(_tmp_9654);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m008536\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            }
                                            
                                            float _tmp_9656 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            _tmp_9656 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9656);
                                            uint16_t* _tmp_9655 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9655 = static_cast<uint16_t>(_tmp_9656);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008537\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.confidence.value);
                                            }
                                            
                                            float _tmp_9658 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.confidence.value;
                                            _tmp_9658 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9658);
                                            _tmp_9658 -= 1;
                                            uint8_t* _tmp_9657 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9657 = static_cast<uint8_t>(_tmp_9658);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008538\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_9660 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                _tmp_9660 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9660);
                                                _tmp_9660 -= -16383;
                                                uint16_t* _tmp_9659 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9659 = static_cast<uint16_t>(_tmp_9660);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008539\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_9662 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_9662 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9662);
                                                _tmp_9662 -= 1;
                                                uint8_t* _tmp_9661 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_9661 = static_cast<uint8_t>(_tmp_9662);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity.size() != 0)  // CHOICE 1  fieldType(Velocity3dWithConfidence) 
                                {
                                    *_choice_301 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008540\033[0m| Choice selection: 1";
                                
                                        // VelocityCartesian  SEQUENCE
                                            //  xVelocity  VelocityComponent     
                                            //  yVelocity  VelocityComponent     
                                            //  zVelocity  VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9663 = (char*) buffer++;
                                        *_tmp_9663 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008541\033[0m| Optional field z_velocity = " << *_tmp_9663;
                                        
                                        // Field:  type(VelocityComponent) name(x_velocity) extGroup(0)
                                            // VelocityComponent  SEQUENCE
                                                //  value      VelocityComponentValue     
                                                //  confidence SpeedConfidence            
                                            // Optional fields bytemap
                                            
                                            // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008542\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            }
                                            
                                            float _tmp_9665 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            _tmp_9665 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9665);
                                            _tmp_9665 -= -16383;
                                            uint16_t* _tmp_9664 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9664 = static_cast<uint16_t>(_tmp_9665);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008543\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_9667 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.confidence.value;
                                            _tmp_9667 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9667);
                                            _tmp_9667 -= 1;
                                            uint8_t* _tmp_9666 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9666 = static_cast<uint8_t>(_tmp_9667);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m008544\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            }
                                            
                                            float _tmp_9669 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            _tmp_9669 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9669);
                                            _tmp_9669 -= -16383;
                                            uint16_t* _tmp_9668 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9668 = static_cast<uint16_t>(_tmp_9669);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008545\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_9671 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.confidence.value;
                                            _tmp_9671 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9671);
                                            _tmp_9671 -= 1;
                                            uint8_t* _tmp_9670 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9670 = static_cast<uint8_t>(_tmp_9671);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008546\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_9673 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                _tmp_9673 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9673);
                                                _tmp_9673 -= -16383;
                                                uint16_t* _tmp_9672 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9672 = static_cast<uint16_t>(_tmp_9673);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008547\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_9675 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_9675 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9675);
                                                _tmp_9675 -= 1;
                                                uint8_t* _tmp_9674 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_9674 = static_cast<uint8_t>(_tmp_9675);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_301) << ") selected in CHOICE Velocity3dWithConfidence in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].velocity[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration.size() != 0) {
                                // Field:  type(Acceleration3dWithConfidence) name(acceleration) extGroup(0)
                                // Choice
                                   // #0  polarAcceleration   AccelerationPolarWithZ
                                   // #1  cartesianAcceleration   AccelerationCartesian
                                uint8_t* _choice_302 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration.size() != 0) {  // CHOICE 0  fieldType(Acceleration3dWithConfidence) 
                                    *_choice_302 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008548\033[0m| Choice selection: 0";
                                
                                        // AccelerationPolarWithZ  SEQUENCE
                                            //  accelerationMagnitude AccelerationMagnitude     
                                            //  accelerationDirection CartesianAngle            
                                            //  zAcceleration         AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9676 = (char*) buffer++;
                                        *_tmp_9676 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008549\033[0m| Optional field z_acceleration = " << *_tmp_9676;
                                        
                                        // Field:  type(AccelerationMagnitude) name(acceleration_magnitude) extGroup(0)
                                            // AccelerationMagnitude  SEQUENCE
                                                //  accelerationMagnitudeValue AccelerationMagnitudeValue     
                                                //  accelerationConfidence     AccelerationConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationMagnitudeValue) name(acceleration_magnitude_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(161) span(162) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008550\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value);
                                            }
                                            
                                            float _tmp_9678 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value;
                                            _tmp_9678 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9678);
                                            uint8_t* _tmp_9677 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9677 = static_cast<uint8_t>(_tmp_9678);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(acceleration_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008551\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value);
                                            }
                                            
                                            float _tmp_9680 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value;
                                            _tmp_9680 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9680);
                                            uint8_t* _tmp_9679 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9679 = static_cast<uint8_t>(_tmp_9680);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m008552\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            }
                                            
                                            float _tmp_9682 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            _tmp_9682 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9682);
                                            uint16_t* _tmp_9681 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9681 = static_cast<uint16_t>(_tmp_9682);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008553\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value);
                                            }
                                            
                                            float _tmp_9684 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value;
                                            _tmp_9684 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9684);
                                            _tmp_9684 -= 1;
                                            uint8_t* _tmp_9683 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9683 = static_cast<uint8_t>(_tmp_9684);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008554\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_9686 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_9686 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9686);
                                                _tmp_9686 -= -160;
                                                uint16_t* _tmp_9685 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9685 = static_cast<uint16_t>(_tmp_9686);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008555\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_9688 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_9688 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9688);
                                                uint8_t* _tmp_9687 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_9687 = static_cast<uint8_t>(_tmp_9688);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration.size() != 0)  // CHOICE 1  fieldType(Acceleration3dWithConfidence) 
                                {
                                    *_choice_302 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008556\033[0m| Choice selection: 1";
                                
                                        // AccelerationCartesian  SEQUENCE
                                            //  xAcceleration AccelerationComponent     
                                            //  yAcceleration AccelerationComponent     
                                            //  zAcceleration AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_9689 = (char*) buffer++;
                                        *_tmp_9689 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008557\033[0m| Optional field z_acceleration = " << *_tmp_9689;
                                        
                                        // Field:  type(AccelerationComponent) name(x_acceleration) extGroup(0)
                                            // AccelerationComponent  SEQUENCE
                                                //  value      AccelerationValue          
                                                //  confidence AccelerationConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008558\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            }
                                            
                                            float _tmp_9691 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            _tmp_9691 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9691);
                                            _tmp_9691 -= -160;
                                            uint16_t* _tmp_9690 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9690 = static_cast<uint16_t>(_tmp_9691);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008559\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_9693 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value;
                                            _tmp_9693 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9693);
                                            uint8_t* _tmp_9692 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9692 = static_cast<uint8_t>(_tmp_9693);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
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
                                                logger->debug() << "|\033[38;5;94m008560\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            }
                                            
                                            float _tmp_9695 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            _tmp_9695 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9695);
                                            _tmp_9695 -= -160;
                                            uint16_t* _tmp_9694 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9694 = static_cast<uint16_t>(_tmp_9695);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008561\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_9697 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value;
                                            _tmp_9697 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9697);
                                            uint8_t* _tmp_9696 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9696 = static_cast<uint8_t>(_tmp_9697);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008562\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_9699 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_9699 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9699);
                                                _tmp_9699 -= -160;
                                                uint16_t* _tmp_9698 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9698 = static_cast<uint16_t>(_tmp_9699);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008563\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_9701 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_9701 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_9701);
                                                uint8_t* _tmp_9700 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_9700 = static_cast<uint8_t>(_tmp_9701);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_302) << ") selected in CHOICE Acceleration3dWithConfidence in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].acceleration[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles.size() != 0) {
                                // Field:  type(EulerAnglesWithConfidence) name(angles) extGroup(0)
                                    // EulerAnglesWithConfidence  SEQUENCE
                                        //  zAngle     CartesianAngle     
                                        //  yAngle     CartesianAngle   OPTIONAL  
                                        //  xAngle     CartesianAngle   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_9702 = (char*) buffer++;
                                    *_tmp_9702 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008564\033[0m| Optional field y_angle = " << *_tmp_9702;
                                    char* _tmp_9703 = (char*) buffer++;
                                    *_tmp_9703 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008565\033[0m| Optional field x_angle = " << *_tmp_9703;
                                    
                                    // Field:  type(CartesianAngle) name(z_angle) extGroup(0)
                                        // CartesianAngle  SEQUENCE
                                            //  value      CartesianAngleValue     
                                            //  confidence AngleConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008566\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.value.value) << 
                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.value.value;
                                        }
                                        
                                        float _tmp_9705 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.value.value;
                                        _tmp_9705 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9705);
                                        uint16_t* _tmp_9704 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_9704 = static_cast<uint16_t>(_tmp_9705);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008567\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.confidence.value) << 
                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.confidence.value);
                                        }
                                        
                                        float _tmp_9707 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.confidence.value;
                                        _tmp_9707 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_9707);
                                        _tmp_9707 -= 1;
                                        uint8_t* _tmp_9706 = (uint8_t*) buffer; buffer += 1;
                                        *_tmp_9706 = static_cast<uint8_t>(_tmp_9707);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].z_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                            return -1;
                                        }
                                    
                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(y_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008568\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].value.value;
                                            }
                                            
                                            float _tmp_9709 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].value.value;
                                            _tmp_9709 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9709);
                                            uint16_t* _tmp_9708 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9708 = static_cast<uint16_t>(_tmp_9709);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008569\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_9711 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].confidence.value;
                                            _tmp_9711 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9711);
                                            _tmp_9711 -= 1;
                                            uint8_t* _tmp_9710 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9710 = static_cast<uint8_t>(_tmp_9711);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(x_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008570\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].value.value;
                                            }
                                            
                                            float _tmp_9713 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].value.value;
                                            _tmp_9713 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9713);
                                            uint16_t* _tmp_9712 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9712 = static_cast<uint16_t>(_tmp_9713);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008571\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_9715 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].confidence.value;
                                            _tmp_9715 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9715);
                                            _tmp_9715 -= 1;
                                            uint8_t* _tmp_9714 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_9714 = static_cast<uint8_t>(_tmp_9715);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity.size() != 0) {
                                // Field:  type(CartesianAngularVelocityComponent) name(z_angular_velocity) extGroup(0)
                                    // CartesianAngularVelocityComponent  SEQUENCE
                                        //  value      CartesianAngularVelocityComponentValue     
                                        //  confidence AngularSpeedConfidence                     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianAngularVelocityComponentValue) name(value) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-255) max(256) span(512) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008572\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].value.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].value.value;
                                    }
                                    
                                    uint16_t* _tmp_9716 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].value.value - -255;
                                    *_tmp_9716 = __aux64__;
                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].value.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].value.value' (" << __aux64__ << ") less than (-255); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngularSpeedConfidence) name(confidence) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(7) span(8) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008573\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].confidence.value);
                                    }
                                    
                                    uint8_t* _tmp_9717 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_9717 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].confidence.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].confidence.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices.size() != 0) {
                                // Field:  type(LowerTriangularPositiveSemidefiniteMatrices) name(lower_triangular_correlation_matrices) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(4) span(4) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements.size();
                                if(__aux64__ > 4) __aux64__ = 4;
                                uint16_t* _tmp_9718 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_9718 = __aux64__ - 1;
                                
                                int __ifj = __aux64__;
                                for(int j = 0; j < __ifj; j++) { 
                                    
                                        // LowerTriangularPositiveSemidefiniteMatrix  SEQUENCE
                                            //  componentsIncludedIntheMatrix MatrixIncludedComponents                             
                                            //  matrix                        LowerTriangularPositiveSemidefiniteMatrixColumns     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(MatrixIncludedComponents) name(components_included_inthe_matrix) extGroup(0)
                                        // BitString
                                        // BIT_STRING  min(13) max(13) span(1)
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m008575\033[0m| payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.values.size());
                                        
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.values.size() < 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.values.size()) << " is less than allowable (13); message dropped.";
                                            return -1;
                                        }
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.values.size() > 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.values.size()) << " exceeds max allowable (13); message dropped.";
                                            return -1;
                                        }
                                        
                                        uint8_t* _ext_flag_4369 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.
                                        *_ext_flag_4369 = 0; 
                                        
                                        uint8_t* _tmp_9719 = (uint8_t*)buffer;
                                        __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.values.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        *_tmp_9719 = __aux64__ - 13;
                                        buffer += 1;
                                        
                                        int __ifk = __aux64__;
                                        for(int k = 0; k < __ifk; k++) {
                                            uint8_t* __b__ = (uint8_t*)buffer++;
                                            *__b__ = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].components_included_inthe_matrix.values[k]? 1: 0);
                                        }
                                        
                                        // Field:  type(LowerTriangularPositiveSemidefiniteMatrixColumns) name(matrix) extGroup(0)
                                        // SequenceOf
                                        // Data Type UInt8
                                        // SEQUENCE_OF  min(1) max(13) span(13) ext(false)
                                        __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        uint16_t* _tmp_9720 = (uint16_t*)buffer;
                                        buffer += 2;
                                        *_tmp_9720 = __aux64__ - 1;
                                        
                                        int __ifl = __aux64__;
                                        for(int l = 0; l < __ifl; l++) { 
                                            
                                            // SequenceOf
                                            // Data Type UInt8
                                            // SEQUENCE_OF  min(1) max(13) span(13) ext(true)
                                            uint8_t* _ext_flag_4370 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].
                                            *_ext_flag_4370 = 0; 
                                            
                                            __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements.size();
                                            if(__aux64__ > 13) __aux64__ = 13;
                                            uint16_t* _tmp_9721 = (uint16_t*)buffer;
                                            buffer += 2;
                                            *_tmp_9721 = __aux64__ - 1;
                                            
                                            int __ifm = __aux64__;
                                            for(int m = 0; m < __ifm; m++) { 
                                                
                                                // Integer
                                                
                                                // INT8  min(-100) max(101) span(202) dataType(Int8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008578\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements[m].value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements[m].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements[m].value);
                                                }
                                                
                                                uint8_t* _tmp_9722 = (uint8_t*) buffer++;
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements[m].value - -100;
                                                *_tmp_9722 = __aux64__;
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements[m].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -100) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements[m].value' (" << __aux64__ << ") less than (-100); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].lower_triangular_correlation_matrices[0].elements[j].matrix.elements[l].elements[m].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                                    return -1;
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_z) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008579\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].value.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].value.value);
                                    }
                                    
                                    float _tmp_9724 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].value.value;
                                    _tmp_9724 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9724);
                                    _tmp_9724 -= 1;
                                    uint8_t* _tmp_9723 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9723 = static_cast<uint8_t>(_tmp_9724);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008580\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].confidence.value);
                                    }
                                    
                                    float _tmp_9726 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].confidence.value;
                                    _tmp_9726 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9726);
                                    _tmp_9726 -= 1;
                                    uint8_t* _tmp_9725 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9725 = static_cast<uint8_t>(_tmp_9726);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_z[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_y) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008581\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].value.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].value.value);
                                    }
                                    
                                    float _tmp_9728 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].value.value;
                                    _tmp_9728 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9728);
                                    _tmp_9728 -= 1;
                                    uint8_t* _tmp_9727 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9727 = static_cast<uint8_t>(_tmp_9728);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008582\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].confidence.value);
                                    }
                                    
                                    float _tmp_9730 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].confidence.value;
                                    _tmp_9730 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9730);
                                    _tmp_9730 -= 1;
                                    uint8_t* _tmp_9729 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9729 = static_cast<uint8_t>(_tmp_9730);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_y[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_x) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008583\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].value.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].value.value);
                                    }
                                    
                                    float _tmp_9732 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].value.value;
                                    _tmp_9732 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9732);
                                    _tmp_9732 -= 1;
                                    uint8_t* _tmp_9731 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9731 = static_cast<uint8_t>(_tmp_9732);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008584\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].confidence.value);
                                    }
                                    
                                    float _tmp_9734 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].confidence.value;
                                    _tmp_9734 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_9734);
                                    _tmp_9734 -= 1;
                                    uint8_t* _tmp_9733 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_9733 = static_cast<uint8_t>(_tmp_9734);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_dimension_x[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age.size() != 0) {
                                // Field:  type(PerceivedObject_DeltaTimeMilliSecondSigned_objectAge) name(object_age) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(2047) span(2048) scaleDivisor(1000.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008585\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age[0].value) << 
                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age[0].value;
                                }
                                
                                float _tmp_9736 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age[0].value;
                                _tmp_9736 *= 1000.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_9736);
                                uint16_t* _tmp_9735 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_9735 = static_cast<uint16_t>(_tmp_9736);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_age[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality.size() != 0) {
                                // Field:  type(ObjectPerceptionQuality) name(object_perception_quality) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m008586\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality[0].value) << 
                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality[0].value);
                                }
                                
                                uint8_t* _tmp_9737 = (uint8_t*) buffer++;
                                *_tmp_9737 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].object_perception_quality[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list.size() != 0) {
                                // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                                uint8_t* _ext_flag_4380 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].
                                *_ext_flag_4380 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements.size();
                                if(__aux64__ > 128) __aux64__ = 128;
                                uint16_t* _tmp_9738 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_9738 = __aux64__ - 1;
                                
                                int __ifn = __aux64__;
                                for(int n = 0; n < __ifn; n++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m008588\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements[n].value) << 
                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements[n].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements[n].value);
                                    }
                                    
                                    uint8_t* _tmp_9739 = (uint8_t*) buffer++;
                                    *_tmp_9739 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements[n].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements[n].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements[n].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].sensor_id_list[0].elements[n].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification.size() != 0) {
                                // Field:  type(ObjectClassDescription) name(classification) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements.size();
                                if(__aux64__ > 8) __aux64__ = 8;
                                uint16_t* _tmp_9740 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_9740 = __aux64__ - 1;
                                
                                int __ifo = __aux64__;
                                for(int o = 0; o < __ifo; o++) { 
                                    
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
                                        uint8_t* _ext_flag_4382 = (uint8_t*) buffer; 
                                        buffer++;
                                        *_ext_flag_4382 = 0; 
                                        
                                        uint8_t* _choice_303 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class.size() != 0) {  // CHOICE 0  fieldType(ObjectClass) 
                                            *_choice_303 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008590\033[0m| Choice selection: 0";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008591\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_9741 = (uint8_t*) buffer++;
                                            *_tmp_9741 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class.size() != 0)  // CHOICE 1  fieldType(ObjectClass) 
                                        {
                                            *_choice_303 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008592\033[0m| Choice selection: 1";
                                        
                                            // Choice
                                               // #0  pedestrian   VruSubProfilePedestrian
                                               // #1  bicyclistAndLightVruVehicle   VruSubProfileBicyclist
                                               // #2  motorcyclist   VruSubProfileMotorcyclist
                                               // #3  animal   VruSubProfileAnimal
                                            uint8_t* _ext_flag_4384 = (uint8_t*) buffer; 
                                            buffer++;
                                            *_ext_flag_4384 = 0; 
                                            
                                            uint8_t* _choice_304 = (uint8_t*) buffer;
                                            buffer++;
                                            
                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian.size() != 0) {  // CHOICE 0  fieldType(VruProfileAndSubprofile) 
                                                *_choice_304 = 0;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008593\033[0m| Choice selection: 0";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008594\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian[0].value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian[0].value);
                                                }
                                                
                                                uint8_t* _tmp_9742 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_9742 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle.size() != 0)  // CHOICE 1  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_304 = 1;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008595\033[0m| Choice selection: 1";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008596\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value);
                                                }
                                                
                                                uint8_t* _tmp_9743 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_9743 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist.size() != 0)  // CHOICE 2  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_304 = 2;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008597\033[0m| Choice selection: 2";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008598\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist[0].value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist[0].value);
                                                }
                                                
                                                uint8_t* _tmp_9744 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_9744 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal.size() != 0)  // CHOICE 3  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_304 = 3;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008599\033[0m| Choice selection: 3";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008600\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal[0].value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal[0].value);
                                                }
                                                
                                                uint8_t* _tmp_9745 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_9745 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else
                                            {
                                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_304) << ") selected in CHOICE VruProfileAndSubprofile in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.vru_sub_class[0]'; message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class.size() != 0)  // CHOICE 2  fieldType(ObjectClass) 
                                        {
                                            *_choice_303 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008601\033[0m| Choice selection: 2";
                                        
                                                // VruClusterInformation  SEQUENCE
                                                    //  clusterId               Identifier1B         OPTIONAL  
                                                    //  clusterBoundingBoxShape Shape                OPTIONAL  
                                                    //  clusterCardinalitySize  CardinalNumber1B       
                                                    //  clusterProfiles         VruClusterProfiles   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_4389 = (uint8_t*) buffer++;  // Write extension flag for VruClusterInformation
                                                *_ext_flag_4389 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_9746 = (char*) buffer++;
                                                *_tmp_9746 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008602\033[0m| Optional field cluster_id = " << *_tmp_9746;
                                                char* _tmp_9747 = (char*) buffer++;
                                                *_tmp_9747 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008603\033[0m| Optional field cluster_bounding_box_shape = " << *_tmp_9747;
                                                char* _tmp_9748 = (char*) buffer++;
                                                *_tmp_9748 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008604\033[0m| Optional field cluster_profiles = " << *_tmp_9748;
                                                
                                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id.size() != 0) {
                                                    // Field:  type(Identifier1B) name(cluster_id) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m008605\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id[0].value) << 
                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id[0].value);
                                                    }
                                                    
                                                    uint8_t* _tmp_9749 = (uint8_t*) buffer++;
                                                    *_tmp_9749 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0) {
                                                    // Field:  type(Shape) name(cluster_bounding_box_shape) extGroup(0)
                                                    // Choice
                                                       // #0  rectangular   RectangularShape
                                                       // #1  circular   CircularShape
                                                       // #2  polygonal   PolygonalShape
                                                       // #3  elliptical   EllipticalShape
                                                       // #4  radial   RadialShape
                                                       // #5  radialShapes   RadialShapes
                                                    uint8_t* _ext_flag_4391 = (uint8_t*) buffer; 
                                                    buffer++;
                                                    *_ext_flag_4391 = 0; 
                                                    
                                                    uint8_t* _choice_305 = (uint8_t*) buffer;
                                                    buffer++;
                                                    
                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                                        *_choice_305 = 0;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m008606\033[0m| Choice selection: 0";
                                                    
                                                            // RectangularShape  SEQUENCE
                                                                //  centerPoint CartesianPosition3d   OPTIONAL  
                                                                //  semiLength  StandardLength12b       
                                                                //  semiBreadth StandardLength12b       
                                                                //  orientation Wgs84AngleValue       OPTIONAL  
                                                                //  height      StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_9750 = (char*) buffer++;
                                                            *_tmp_9750 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008607\033[0m| Optional field center_point = " << *_tmp_9750;
                                                            char* _tmp_9751 = (char*) buffer++;
                                                            *_tmp_9751 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008608\033[0m| Optional field orientation = " << *_tmp_9751;
                                                            char* _tmp_9752 = (char*) buffer++;
                                                            *_tmp_9752 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008609\033[0m| Optional field height = " << *_tmp_9752;
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_9753 = (char*) buffer++;
                                                                    *_tmp_9753 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008610\033[0m| Optional field z_coordinate = " << *_tmp_9753;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008611\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9755 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    _tmp_9755 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9755);
                                                                    _tmp_9755 -= -32768;
                                                                    uint16_t* _tmp_9754 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9754 = static_cast<uint16_t>(_tmp_9755);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008612\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9757 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    _tmp_9757 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9757);
                                                                    _tmp_9757 -= -32768;
                                                                    uint16_t* _tmp_9756 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9756 = static_cast<uint16_t>(_tmp_9757);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008613\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9759 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        _tmp_9759 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9759);
                                                                        _tmp_9759 -= -32768;
                                                                        uint16_t* _tmp_9758 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9758 = static_cast<uint16_t>(_tmp_9759);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008614\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            }
                                                            
                                                            float _tmp_9761 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            _tmp_9761 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9761);
                                                            uint16_t* _tmp_9760 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9760 = static_cast<uint16_t>(_tmp_9761);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008615\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            }
                                                            
                                                            float _tmp_9763 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            _tmp_9763 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9763);
                                                            uint16_t* _tmp_9762 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9762 = static_cast<uint16_t>(_tmp_9763);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008616\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_9765 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                _tmp_9765 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9765);
                                                                uint16_t* _tmp_9764 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9764 = static_cast<uint16_t>(_tmp_9765);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008617\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_9767 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                _tmp_9767 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9767);
                                                                uint16_t* _tmp_9766 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9766 = static_cast<uint16_t>(_tmp_9767);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                                                    {
                                                        *_choice_305 = 1;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m008618\033[0m| Choice selection: 1";
                                                    
                                                            // CircularShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  radius              StandardLength12b       
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_9768 = (char*) buffer++;
                                                            *_tmp_9768 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008619\033[0m| Optional field shape_reference_point = " << *_tmp_9768;
                                                            char* _tmp_9769 = (char*) buffer++;
                                                            *_tmp_9769 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008620\033[0m| Optional field height = " << *_tmp_9769;
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_9770 = (char*) buffer++;
                                                                    *_tmp_9770 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008621\033[0m| Optional field z_coordinate = " << *_tmp_9770;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008622\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9772 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_9772 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9772);
                                                                    _tmp_9772 -= -32768;
                                                                    uint16_t* _tmp_9771 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9771 = static_cast<uint16_t>(_tmp_9772);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008623\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9774 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_9774 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9774);
                                                                    _tmp_9774 -= -32768;
                                                                    uint16_t* _tmp_9773 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9773 = static_cast<uint16_t>(_tmp_9774);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008624\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9776 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_9776 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9776);
                                                                        _tmp_9776 -= -32768;
                                                                        uint16_t* _tmp_9775 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9775 = static_cast<uint16_t>(_tmp_9776);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008625\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            }
                                                            
                                                            float _tmp_9778 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            _tmp_9778 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9778);
                                                            uint16_t* _tmp_9777 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9777 = static_cast<uint16_t>(_tmp_9778);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008626\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_9780 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                _tmp_9780 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9780);
                                                                uint16_t* _tmp_9779 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9779 = static_cast<uint16_t>(_tmp_9780);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                                                    {
                                                        *_choice_305 = 2;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m008627\033[0m| Choice selection: 2";
                                                    
                                                            // PolygonalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                                                //  polygon             SequenceOfCartesianPosition3d     
                                                                //  height              StandardLength12b               OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_9781 = (char*) buffer++;
                                                            *_tmp_9781 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008628\033[0m| Optional field shape_reference_point = " << *_tmp_9781;
                                                            char* _tmp_9782 = (char*) buffer++;
                                                            *_tmp_9782 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008629\033[0m| Optional field height = " << *_tmp_9782;
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_9783 = (char*) buffer++;
                                                                    *_tmp_9783 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008630\033[0m| Optional field z_coordinate = " << *_tmp_9783;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008631\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9785 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_9785 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9785);
                                                                    _tmp_9785 -= -32768;
                                                                    uint16_t* _tmp_9784 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9784 = static_cast<uint16_t>(_tmp_9785);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008632\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9787 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_9787 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9787);
                                                                    _tmp_9787 -= -32768;
                                                                    uint16_t* _tmp_9786 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9786 = static_cast<uint16_t>(_tmp_9787);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008633\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9789 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_9789 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9789);
                                                                        _tmp_9789 -= -32768;
                                                                        uint16_t* _tmp_9788 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9788 = static_cast<uint16_t>(_tmp_9789);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_4407 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.
                                                            *_ext_flag_4407 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_9790 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_9790 = __aux64__ - 1;
                                                            
                                                            int __ifp = __aux64__;
                                                            for(int p = 0; p < __ifp; p++) { 
                                                                
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_9791 = (char*) buffer++;
                                                                    *_tmp_9791 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008635\033[0m| Optional field z_coordinate = " << *_tmp_9791;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008636\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9793 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].x_coordinate.value;
                                                                    _tmp_9793 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9793);
                                                                    _tmp_9793 -= -32768;
                                                                    uint16_t* _tmp_9792 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9792 = static_cast<uint16_t>(_tmp_9793);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008637\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9795 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].y_coordinate.value;
                                                                    _tmp_9795 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9795);
                                                                    _tmp_9795 -= -32768;
                                                                    uint16_t* _tmp_9794 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9794 = static_cast<uint16_t>(_tmp_9795);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008638\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9797 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate[0].value;
                                                                        _tmp_9797 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9797);
                                                                        _tmp_9797 -= -32768;
                                                                        uint16_t* _tmp_9796 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9796 = static_cast<uint16_t>(_tmp_9797);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[p].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008639\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_9799 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                _tmp_9799 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9799);
                                                                uint16_t* _tmp_9798 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9798 = static_cast<uint16_t>(_tmp_9799);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                                                    {
                                                        *_choice_305 = 3;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m008640\033[0m| Choice selection: 3";
                                                    
                                                            // EllipticalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  semiMajorAxisLength StandardLength12b       
                                                                //  semiMinorAxisLength StandardLength12b       
                                                                //  orientation         Wgs84AngleValue       OPTIONAL  
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_9800 = (char*) buffer++;
                                                            *_tmp_9800 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008641\033[0m| Optional field shape_reference_point = " << *_tmp_9800;
                                                            char* _tmp_9801 = (char*) buffer++;
                                                            *_tmp_9801 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008642\033[0m| Optional field orientation = " << *_tmp_9801;
                                                            char* _tmp_9802 = (char*) buffer++;
                                                            *_tmp_9802 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008643\033[0m| Optional field height = " << *_tmp_9802;
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_9803 = (char*) buffer++;
                                                                    *_tmp_9803 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008644\033[0m| Optional field z_coordinate = " << *_tmp_9803;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008645\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9805 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_9805 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9805);
                                                                    _tmp_9805 -= -32768;
                                                                    uint16_t* _tmp_9804 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9804 = static_cast<uint16_t>(_tmp_9805);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008646\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9807 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_9807 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9807);
                                                                    _tmp_9807 -= -32768;
                                                                    uint16_t* _tmp_9806 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9806 = static_cast<uint16_t>(_tmp_9807);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008647\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9809 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_9809 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9809);
                                                                        _tmp_9809 -= -32768;
                                                                        uint16_t* _tmp_9808 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9808 = static_cast<uint16_t>(_tmp_9809);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008648\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_9811 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            _tmp_9811 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9811);
                                                            uint16_t* _tmp_9810 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9810 = static_cast<uint16_t>(_tmp_9811);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008649\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_9813 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            _tmp_9813 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9813);
                                                            uint16_t* _tmp_9812 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9812 = static_cast<uint16_t>(_tmp_9813);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008650\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_9815 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                _tmp_9815 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9815);
                                                                uint16_t* _tmp_9814 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9814 = static_cast<uint16_t>(_tmp_9815);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008651\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_9817 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                _tmp_9817 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9817);
                                                                uint16_t* _tmp_9816 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9816 = static_cast<uint16_t>(_tmp_9817);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                                                    {
                                                        *_choice_305 = 4;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m008652\033[0m| Choice selection: 4";
                                                    
                                                            // RadialShape  SEQUENCE
                                                                //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                                                //  range                                 StandardLength12b       
                                                                //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                                                //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                                                //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                                                //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_9818 = (char*) buffer++;
                                                            *_tmp_9818 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008653\033[0m| Optional field shape_reference_point = " << *_tmp_9818;
                                                            char* _tmp_9819 = (char*) buffer++;
                                                            *_tmp_9819 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008654\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_9819;
                                                            char* _tmp_9820 = (char*) buffer++;
                                                            *_tmp_9820 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008655\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_9820;
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_9821 = (char*) buffer++;
                                                                    *_tmp_9821 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008656\033[0m| Optional field z_coordinate = " << *_tmp_9821;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008657\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9823 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_9823 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9823);
                                                                    _tmp_9823 -= -32768;
                                                                    uint16_t* _tmp_9822 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9822 = static_cast<uint16_t>(_tmp_9823);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008658\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_9825 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_9825 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9825);
                                                                    _tmp_9825 -= -32768;
                                                                    uint16_t* _tmp_9824 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9824 = static_cast<uint16_t>(_tmp_9825);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008659\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9827 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_9827 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9827);
                                                                        _tmp_9827 -= -32768;
                                                                        uint16_t* _tmp_9826 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9826 = static_cast<uint16_t>(_tmp_9827);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008660\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            }
                                                            
                                                            float _tmp_9829 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            _tmp_9829 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9829);
                                                            uint16_t* _tmp_9828 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9828 = static_cast<uint16_t>(_tmp_9829);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008661\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            }
                                                            
                                                            float _tmp_9831 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            _tmp_9831 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9831);
                                                            uint16_t* _tmp_9830 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9830 = static_cast<uint16_t>(_tmp_9831);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008662\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            }
                                                            
                                                            float _tmp_9833 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            _tmp_9833 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9833);
                                                            uint16_t* _tmp_9832 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9832 = static_cast<uint16_t>(_tmp_9833);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008663\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                }
                                                                
                                                                float _tmp_9835 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                _tmp_9835 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9835);
                                                                uint16_t* _tmp_9834 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9834 = static_cast<uint16_t>(_tmp_9835);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008664\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                }
                                                                
                                                                float _tmp_9837 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                _tmp_9837 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9837);
                                                                uint16_t* _tmp_9836 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9836 = static_cast<uint16_t>(_tmp_9837);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                                                    {
                                                        *_choice_305 = 5;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m008665\033[0m| Choice selection: 5";
                                                    
                                                            // RadialShapes  SEQUENCE
                                                                //  refPointId       Identifier1B                 
                                                                //  xCoordinate      CartesianCoordinateSmall     
                                                                //  yCoordinate      CartesianCoordinateSmall     
                                                                //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                                                //  radialShapesList RadialShapesList             
                                                            // Optional fields bytemap
                                                            char* _tmp_9838 = (char*) buffer++;
                                                            *_tmp_9838 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m008666\033[0m| Optional field z_coordinate = " << *_tmp_9838;
                                                            
                                                            // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                                            // Integer
                                                            
                                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008667\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value);
                                                            }
                                                            
                                                            uint8_t* _tmp_9839 = (uint8_t*) buffer++;
                                                            *_tmp_9839 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value; 
                                                            __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008668\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_9841 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            _tmp_9841 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9841);
                                                            _tmp_9841 -= -3094;
                                                            uint16_t* _tmp_9840 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9840 = static_cast<uint16_t>(_tmp_9841);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m008669\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_9843 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            _tmp_9843 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_9843);
                                                            _tmp_9843 -= -3094;
                                                            uint16_t* _tmp_9842 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_9842 = static_cast<uint16_t>(_tmp_9843);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                                                // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m008670\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                }
                                                                
                                                                float _tmp_9845 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                _tmp_9845 *= 100.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_9845);
                                                                _tmp_9845 -= -3094;
                                                                uint16_t* _tmp_9844 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_9844 = static_cast<uint16_t>(_tmp_9845);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_4431 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.
                                                            *_ext_flag_4431 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_9846 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_9846 = __aux64__ - 1;
                                                            
                                                            int __ifq = __aux64__;
                                                            for(int q = 0; q < __ifq; q++) { 
                                                                
                                                                    // RadialShapeDetails  SEQUENCE
                                                                        //  range                       StandardLength12b       
                                                                        //  horizontalOpeningAngleStart CartesianAngleValue     
                                                                        //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                                        //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                                        //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_9847 = (char*) buffer++;
                                                                    *_tmp_9847 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008672\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_9847;
                                                                    char* _tmp_9848 = (char*) buffer++;
                                                                    *_tmp_9848 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m008673\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_9848;
                                                                    
                                                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008674\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].range.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].range.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].range.value;
                                                                    }
                                                                    
                                                                    float _tmp_9850 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].range.value;
                                                                    _tmp_9850 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9850);
                                                                    uint16_t* _tmp_9849 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9849 = static_cast<uint16_t>(_tmp_9850);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008675\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value;
                                                                    }
                                                                    
                                                                    float _tmp_9852 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value;
                                                                    _tmp_9852 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9852);
                                                                    uint16_t* _tmp_9851 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9851 = static_cast<uint16_t>(_tmp_9852);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m008676\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value) << 
                                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value;
                                                                    }
                                                                    
                                                                    float _tmp_9854 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value;
                                                                    _tmp_9854 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_9854);
                                                                    uint16_t* _tmp_9853 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_9853 = static_cast<uint16_t>(_tmp_9854);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008677\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9856 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value;
                                                                        _tmp_9856 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9856);
                                                                        uint16_t* _tmp_9855 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9855 = static_cast<uint16_t>(_tmp_9856);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m008678\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value) << 
                                                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_9858 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value;
                                                                        _tmp_9858 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_9858);
                                                                        uint16_t* _tmp_9857 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_9857 = static_cast<uint16_t>(_tmp_9858);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                    
                                                    }
                                                    else
                                                    {
                                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_305) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_bounding_box_shape[0]'; message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(CardinalNumber1B) name(cluster_cardinality_size) extGroup(0)
                                                // Integer
                                                
                                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008679\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_cardinality_size.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_cardinality_size.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_cardinality_size.value);
                                                }
                                                
                                                uint8_t* _tmp_9859 = (uint8_t*) buffer++;
                                                *_tmp_9859 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_cardinality_size.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_cardinality_size.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                    return -1;
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles.size() != 0) {
                                                    // Field:  type(VruClusterProfiles) name(cluster_profiles) extGroup(0)
                                                    // BitString
                                                    // BIT_STRING  min(4) max(4) span(1)
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m008680\033[0m| payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].values.size());
                                                    
                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].values.size() < 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " is less than allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].values.size() > 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " exceeds max allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    uint8_t* _tmp_9860 = (uint8_t*)buffer;
                                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].values.size();
                                                    if(__aux64__ > 4) __aux64__ = 4;
                                                    *_tmp_9860 = __aux64__ - 4;
                                                    buffer += 1;
                                                    
                                                    int __ifr = __aux64__;
                                                    for(int r = 0; r < __ifr; r++) {
                                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                                        *__b__ = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.group_sub_class[0].cluster_profiles[0].values[r]? 1: 0);
                                                    }
                                                }
                                                
                                                if(*_ext_flag_4389) {
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class.size() != 0)  // CHOICE 3  fieldType(ObjectClass) 
                                        {
                                            *_choice_303 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008681\033[0m| Choice selection: 3";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008682\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_9862 = (uint8_t*) buffer++;
                                            *_tmp_9862 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class.other_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_303) << ") selected in CHOICE ObjectClass in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].object_class'; message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(ConfidenceLevel) name(confidence) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008683\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].confidence.value) << 
                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].confidence.value);
                                        }
                                        
                                        uint8_t* _tmp_9863 = (uint8_t*) buffer++;
                                        __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].confidence.value - 1;
                                        *_tmp_9863 = __aux64__;
                                        __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].confidence.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].classification[0].elements[o].confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                            return -1;
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position.size() != 0) {
                                // Field:  type(MapPosition) name(map_position) extGroup(0)
                                    // MapPosition  SEQUENCE
                                        //  mapReference             MapReference               OPTIONAL  
                                        //  laneId                   Identifier1B               OPTIONAL  
                                        //  connectionId             Identifier1B               OPTIONAL  
                                        //  longitudinalLanePosition LongitudinalLanePosition   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_4440 = (uint8_t*) buffer++;  // Write extension flag for MapPosition
                                    *_ext_flag_4440 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_9864 = (char*) buffer++;
                                    *_tmp_9864 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008684\033[0m| Optional field map_reference = " << *_tmp_9864;
                                    char* _tmp_9865 = (char*) buffer++;
                                    *_tmp_9865 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008685\033[0m| Optional field lane_id = " << *_tmp_9865;
                                    char* _tmp_9866 = (char*) buffer++;
                                    *_tmp_9866 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008686\033[0m| Optional field connection_id = " << *_tmp_9866;
                                    char* _tmp_9867 = (char*) buffer++;
                                    *_tmp_9867 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m008687\033[0m| Optional field longitudinal_lane_position = " << *_tmp_9867;
                                    
                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference.size() != 0) {
                                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                                        // Choice
                                           // #0  roadsegment   RoadSegmentReferenceId
                                           // #1  intersection   IntersectionReferenceId
                                        uint8_t* _choice_306 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                                            *_choice_306 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008688\033[0m| Choice selection: 0";
                                        
                                                // RoadSegmentReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_9868 = (char*) buffer++;
                                                *_tmp_9868 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008689\033[0m| Optional field region = " << *_tmp_9868;
                                                
                                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m008690\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_9869 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_9869 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008691\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].id.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_9870 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9870 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                                        {
                                            *_choice_306 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m008692\033[0m| Choice selection: 1";
                                        
                                                // IntersectionReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_9871 = (char*) buffer++;
                                                *_tmp_9871 = (ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m008693\033[0m| Optional field region = " << *_tmp_9871;
                                                
                                                if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m008694\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_9872 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_9872 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m008695\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].id.value) << 
                                                                 " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_9873 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_9873 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_306) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].map_reference[0]'; message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(lane_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008696\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id[0].value) << 
                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_9874 = (uint8_t*) buffer++;
                                        *_tmp_9874 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].lane_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(connection_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m008697\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id[0].value) << 
                                                         " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_9875 = (uint8_t*) buffer++;
                                        *_tmp_9875 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position.size() != 0) {
                                        // Field:  type(LongitudinalLanePosition) name(longitudinal_lane_position) extGroup(0)
                                            // LongitudinalLanePosition  SEQUENCE
                                                //  longitudinalLanePositionValue      LongitudinalLanePositionValue          
                                                //  longitudinalLanePositionConfidence LongitudinalLanePositionConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(LongitudinalLanePositionValue) name(longitudinal_lane_position_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(32767) span(32768) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008698\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            }
                                            
                                            float _tmp_9877 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            _tmp_9877 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9877);
                                            uint16_t* _tmp_9876 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9876 = static_cast<uint16_t>(_tmp_9877);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(LongitudinalLanePositionConfidence) name(longitudinal_lane_position_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(1023) span(1024) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m008699\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value) << 
                                                             " payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value: " << ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            }
                                            
                                            float _tmp_9879 = ros->payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            _tmp_9879 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_9879);
                                            uint16_t* _tmp_9878 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_9878 = static_cast<uint16_t>(_tmp_9879);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[y].perceived_object_container[0].perceived_objects.elements[i].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(*_ext_flag_4440) {
                                    }
                            }
                            
                            if(*_ext_flag_4326) {
                            }
                    }
                    
                    if(*_ext_flag_4323) {
                    }
            
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_297) << ") selected in CHOICE WrappedCpmContainer in 'payload.cpm_containers.elements[y]'; message dropped.";
                return -1;
            }
        }
        
        if(*_ext_flag_4178) {
        }
    
	
            return buffer - start;
        }
    } 
}