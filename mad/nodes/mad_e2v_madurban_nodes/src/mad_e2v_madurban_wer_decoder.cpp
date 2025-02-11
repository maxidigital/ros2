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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0
 * 
 * Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(302637) e2v(1) version(3)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <mad_e2v_madurban_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_mad_e2v_madurban
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(mad_e2v_madurban_msgs::EPUtoVehicle* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(mad_e2v_madurban_msgs::msg::EPUtoVehicle* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // EPUtoVehicle  SEQUENCE
        //  header       ItsPduHeader            
        //  epuToVehicle EPUtoVehiclePayload     
    
    // Field name: hheader
        // ItsPduHeader  SEQUENCE
            //  protocolVersion OrdinalNumber1B     
            //  messageId       MessageId           
            //  stationId       StationId           
        
        // Field name: protocol_version
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_18145 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_18145;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016081\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
        uint8_t* _tmp_18146 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_18146;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016082\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
        uint32_t* _tmp_18147 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_18147;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016083\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
    
    // Field name: epu_to_vehicle
        // EPUtoVehiclePayload  SEQUENCE
            //  managementContainer       ManagementContainer           
            //  epuHighFrequencyContainer EPUHighFrequencyContainer     
            //  epuLowFrequencyContainer  EPULowFrequencyContainer    OPTIONAL  
        if(*(buffer++)) { 
            mad_e2v_madurban_msgs::msg::EPULowFrequencyContainer _tmp_18148;
            ros->epu_to_vehicle.epu_low_frequency_container.push_back(_tmp_18148);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m016084\033[0m| ros->epu_to_vehicle.epu_low_frequency_container " << tools::green("present");
        }
        
        // Field name: management_container
            // ManagementContainer  SEQUENCE
                //  referenceTime     GenerationDeltaTime     
                //  referencePosition ReferencePosition       
                //  ...
            uint8_t* _ext_flag_7961 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.management_container.
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m016085\033[0m| Reading ext flag from ros->epu_to_vehicle.management_container.: " << int(*_ext_flag_7961);
            }
            
            
            // Field name: reference_time
            // Integer
            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
            uint16_t* _tmp_18149 = (uint16_t*) buffer; buffer += 2;
            __aux64__ = *_tmp_18149;
            ros->epu_to_vehicle.management_container.reference_time.value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m016086\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_time.value) << 
                             " epu_to_vehicle.management_container.reference_time.value: " << ros->epu_to_vehicle.management_container.reference_time.value;
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_time.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                return false;
            }
            
            // Field name: reference_position
                // ReferencePosition  SEQUENCE
                    //  latitude                  Latitude                 
                    //  longitude                 Longitude                
                    //  positionConfidenceEllipse PosConfidenceEllipse     
                    //  altitude                  Altitude                 
                
                // Field name: latitude
                // Real
                // Double
                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                uint32_t* _tmp_18150 = (uint32_t*) buffer; buffer += 4;
                ros->epu_to_vehicle.management_container.reference_position.latitude.value = *_tmp_18150;
                ros->epu_to_vehicle.management_container.reference_position.latitude.value += -900000000;
                __aux64__ = ros->epu_to_vehicle.management_container.reference_position.latitude.value;
                ros->epu_to_vehicle.management_container.reference_position.latitude.value /= 1.0E7;
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                    return false;
                }
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016087\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.latitude.value) << " epu_to_vehicle.management_container.reference_position.latitude: " <<
                                 ros->epu_to_vehicle.management_container.reference_position.latitude.value << " (" << __aux64__ << ")";
                }
                
                // Field name: longitude
                // Real
                // Double
                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                uint32_t* _tmp_18151 = (uint32_t*) buffer; buffer += 4;
                ros->epu_to_vehicle.management_container.reference_position.longitude.value = *_tmp_18151;
                ros->epu_to_vehicle.management_container.reference_position.longitude.value += -1800000000;
                __aux64__ = ros->epu_to_vehicle.management_container.reference_position.longitude.value;
                ros->epu_to_vehicle.management_container.reference_position.longitude.value /= 1.0E7;
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                    return false;
                }
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016088\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.longitude.value) << " epu_to_vehicle.management_container.reference_position.longitude: " <<
                                 ros->epu_to_vehicle.management_container.reference_position.longitude.value << " (" << __aux64__ << ")";
                }
                
                // Field name: position_confidence_ellipse
                    // PosConfidenceEllipse  SEQUENCE
                        //  semiMajorConfidence  SemiAxisLength     
                        //  semiMinorConfidence  SemiAxisLength     
                        //  semiMajorOrientation HeadingValue       
                    
                    // Field name: semi_major_confidence
                    // Real
                    // Float
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    uint16_t* _tmp_18152 = (uint16_t*) buffer; buffer += 2;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value = *_tmp_18152;
                    __aux64__ = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value /= 100.0;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016089\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence: " <<
                                     ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: semi_minor_confidence
                    // Real
                    // Float
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    uint16_t* _tmp_18153 = (uint16_t*) buffer; buffer += 2;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value = *_tmp_18153;
                    __aux64__ = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value /= 100.0;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016090\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence: " <<
                                     ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: semi_major_orientation
                    // Real
                    // Float
                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                    uint16_t* _tmp_18154 = (uint16_t*) buffer; buffer += 2;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value = *_tmp_18154;
                    __aux64__ = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value /= 10.0;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016091\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation: " <<
                                     ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value << " (" << __aux64__ << ")";
                    }
                
                // Field name: altitude
                    // Altitude  SEQUENCE
                        //  altitudeValue      AltitudeValue          
                        //  altitudeConfidence AltitudeConfidence     
                    
                    // Field name: altitude_value
                    // Real
                    // Float
                    // FLOAT  min(-100000) max(800001) span(900002) scaleDivisor(100.0) dataType(Float)
                    uint32_t* _tmp_18155 = (uint32_t*) buffer; buffer += 4;
                    ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value = *_tmp_18155;
                    ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value += -100000;
                    __aux64__ = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value;
                    ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value /= 100.0;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < -100000) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " is less than allowable (-100000); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 800001) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " exceeds max allowable (800001); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016092\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value) << " epu_to_vehicle.management_container.reference_position.altitude.altitude_value: " <<
                                     ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: altitude_confidence
                    // Enumerated
                    // INT32  min(0) max(15) span(16) datatype(Int32)
                    uint8_t* _tmp_18156 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_18156;
                    __aux64__ += 0;
                    ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 15) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016093\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value);
                    }
            if(*_ext_flag_7961) { // from ros->epu_to_vehicle.management_container. 
                uint8_t* _tmp_18157 = (uint8_t*) buffer++;  // number of extensions
                bool _array_222[*_tmp_18157];
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m016094\033[0m| Reading number of exts from ros->epu_to_vehicle.management_container.: " << static_cast<unsigned int>(*_tmp_18157);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_18157; i++)
                    _array_222[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_18157; i++) {
                    uint16_t* _tmp_18158 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_18158; i++)
                        buffer++;
                }
                
            }
        
        // Field name: epu_high_frequency_container
            // EPUHighFrequencyContainer  SEQUENCE
                //  behaviours Behaviours      OPTIONAL  
                //  safety     SafetyAdvices   OPTIONAL  
            if(*(buffer++)) { 
                mad_e2v_madurban_msgs::msg::Behaviours _tmp_18159;
                ros->epu_to_vehicle.epu_high_frequency_container.behaviours.push_back(_tmp_18159);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016095\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours " << tools::green("present");
            }
            if(*(buffer++)) { 
                mad_e2v_madurban_msgs::msg::SafetyAdvices _tmp_18160;
                ros->epu_to_vehicle.epu_high_frequency_container.safety.push_back(_tmp_18160);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016096\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety " << tools::green("present");
            }
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0) {
                // Field name: behaviours
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10)
                uint8_t* _ext_flag_7969 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016097\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].: " << int(*_ext_flag_7969);
                }
                
                int16_t* _tmp_18161 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_18161;
                __aux64__ += 1;     // +min
                
                int _if__tmp_18161 = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016098\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0]. size: " << int(*_tmp_18161);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 10) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].value' " << (__aux64__) << " exceeds max allowable (10); message dropped.";
                    return false;
                }
                
                
                for(int e = 0; e < _if__tmp_18161; e++) {
                    mad_e2v_madurban_msgs::msg::BehaviourContainer seqof_e;  // SEQUENCE
                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements.push_back(seqof_e);
                
                        // BehaviourContainer  SEQUENCE
                            //  subjectStationID     StationId          
                            //  movementAdvice       MovementAdvice     
                            //  exteriorLightsAdvice ExteriorLights   OPTIONAL  
                            //  hornAdvice           HornAdvice       OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_7970 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016099\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].: " << int(*_ext_flag_7970);
                        }
                        
                        if(*(buffer++)) { 
                            its_container_v4_etsi_its_cdd_msgs::msg::ExteriorLights _tmp_18162;
                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice.push_back(_tmp_18162);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016100\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            mad_e2v_madurban_msgs::msg::HornAdvice _tmp_18163;
                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice.push_back(_tmp_18163);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016101\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice " << tools::green("present");
                        }
                        
                        // Field name: subject_station_id
                        // Integer
                        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                        uint32_t* _tmp_18164 = (uint32_t*) buffer; buffer += 4;
                        __aux64__ = *_tmp_18164;
                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].subject_station_id.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016102\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].subject_station_id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].subject_station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].subject_station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
                            return false;
                        }
                        
                        // Field name: movement_advice
                            // MovementAdvice  SEQUENCE
                                //  maneuverAdvice   ManeuverAdvice     OPTIONAL  
                                //  trajectoryAdvice TrajectoryAdvice   OPTIONAL  
                                //  controlAdvice    ControlAdvice      OPTIONAL  
                            if(*(buffer++)) { 
                                mad_e2v_madurban_msgs::msg::ManeuverAdvice _tmp_18165;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice.push_back(_tmp_18165);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016103\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                mad_e2v_madurban_msgs::msg::TrajectoryAdvice _tmp_18166;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice.push_back(_tmp_18166);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016104\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                mad_e2v_madurban_msgs::msg::ControlAdvice _tmp_18167;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice.push_back(_tmp_18167);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016105\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice " << tools::green("present");
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice.size() != 0) {
                                // Field name: maneuver_advice
                                    // ManeuverAdvice  SEQUENCE
                                        //  nominalManeuver ManeuverAdviceNominal     
                                        //  mrmManeuver     ManeuverAdviceMRM         
                                    
                                    // Field name: nominal_maneuver
                                    // Enumerated
                                    // INT32  min(0) max(12) span(13) datatype(Int32)
                                    uint8_t* _ext_flag_7971 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016106\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.: " << int(*_ext_flag_7971);
                                    }
                                    
                                    uint8_t* _tmp_18168 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18168;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016107\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].nominal_maneuver.value);
                                    }
                                    
                                    // Field name: mrm_maneuver
                                    // Enumerated
                                    // INT32  min(0) max(6) span(7) datatype(Int32)
                                    uint8_t* _ext_flag_7972 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016108\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.: " << int(*_ext_flag_7972);
                                    }
                                    
                                    uint8_t* _tmp_18169 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18169;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 6) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.value' " << (__aux64__) << " exceeds max allowable (6); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016109\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.maneuver_advice[0].mrm_maneuver.value);
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice.size() != 0) {
                                // Field name: trajectory_advice
                                    // TrajectoryAdvice  SEQUENCE
                                        //  nominalTrajectory PathPredicted     
                                        //  mrmTrajectory     PathPredicted     
                                    
                                    // Field name: nominal_trajectory
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16)
                                    uint8_t* _ext_flag_7973 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016110\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.: " << int(*_ext_flag_7973);
                                    }
                                    
                                    int16_t* _tmp_18170 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_18170;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_18170 = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016111\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory. size: " << int(*_tmp_18170);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int f = 0; f < _if__tmp_18170; f++) {
                                        mad_e2v_madurban_msgs::msg::PathPointPredicted seqof_f;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements.push_back(seqof_f);
                                    
                                            // PathPointPredicted  SEQUENCE
                                                //  deltaLatitude                DeltaLatitude            
                                                //  deltaLongitude               DeltaLongitude           
                                                //  horizontalPositionConfidence PosConfidenceEllipse   OPTIONAL  
                                                //  deltaAltitude                DeltaAltitude            
                                                //  altitudeConfidence           AltitudeConfidence       
                                                //  pathDeltaTime                PathDeltaTimeChoice    OPTIONAL  
                                                //  symmetricAreaOffset          StandardLength9b       OPTIONAL  
                                                //  asymmetricAreaOffset         StandardLength9b       OPTIONAL  
                                                //  headingValue                 HeadingValue           OPTIONAL  Extension group #1
                                                //  absSpeed                     SpeedValue             OPTIONAL  Extension group #1
                                                //  longitudinalAcceleration     AccelerationValue      OPTIONAL  Extension group #1
                                            uint8_t* _ext_flag_7974 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016112\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].: " << int(*_ext_flag_7974);
                                            }
                                            
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PosConfidenceEllipse _tmp_18171;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence.push_back(_tmp_18171);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016113\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PathDeltaTimeChoice _tmp_18172;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time.push_back(_tmp_18172);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016114\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_18173;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset.push_back(_tmp_18173);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016115\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_18174;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset.push_back(_tmp_18174);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016116\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset " << tools::green("present");
                                            }
                                            
                                            // Field name: delta_latitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_18175 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value = *_tmp_18175;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016117\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_latitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_longitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_18176 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value = *_tmp_18176;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016118\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_longitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence.size() != 0) {
                                                // Field name: horizontal_position_confidence
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    
                                                    // Field name: semi_major_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_18177 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence.value = *_tmp_18177;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016119\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_minor_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_18178 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence.value = *_tmp_18178;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016120\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_minor_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_major_orientation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    uint16_t* _tmp_18179 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation.value = *_tmp_18179;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation.value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016121\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].horizontal_position_confidence[0].semi_major_orientation.value << " (" << __aux64__ << ")";
                                                    }
                                            }
                                            
                                            // Field name: delta_altitude
                                            // Real
                                            // Float
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18180 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value = *_tmp_18180;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value += -12700;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016122\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].delta_altitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: altitude_confidence
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_18181 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_18181;
                                            __aux64__ += 0;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].altitude_confidence.value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016123\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].altitude_confidence.value);
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time.size() != 0) {
                                                // Field name: path_delta_time
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond   
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds   
                                                uint8_t _choice_411 = *(buffer++);
                                                
                                                if(_choice_411 == 0) {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenthOfSecond _tmp_18182;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision.push_back(_tmp_18182);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    uint8_t* _tmp_18183 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0].value = *_tmp_18183;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0].value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016124\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_high_precision[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else if(_choice_411 == 1)  // CHOICE PathDeltaTimeChoice  fieldName(delta_time_big_range)
                                                {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenSeconds _tmp_18184;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range.push_back(_tmp_18184);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    uint8_t* _tmp_18185 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0].value = *_tmp_18185;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0].value /= 0.1;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016125\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0].delta_time_big_range[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(_choice_411) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].path_delta_time[0]'; message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset.size() != 0) {
                                                // Field name: symmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_18186 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0].value = *_tmp_18186;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m016126\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].symmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset.size() != 0) {
                                                // Field name: asymmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_18187 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0].value = *_tmp_18187;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m016127\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].asymmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            if(*_ext_flag_7974) { // from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f]. 
                                                uint8_t* _tmp_18188 = (uint8_t*) buffer++;  // number of extensions
                                                bool _array_223[*_tmp_18188];
                                                
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016128\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].: " << static_cast<unsigned int>(*_tmp_18188);
                                                
                                                // Extensions bytemap
                                                for(int i = 0; i < *_tmp_18188; i++)
                                                    _array_223[i] = (*buffer++) != 0;
                                                
                                                if(_array_223[0]) {  // Extension group 1
                                                    uint16_t* _tmp_18189 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) 
                                                        logger->debug() << "|\033[38;5;94m016129\033[0m| Reading open type len from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].: " << _tmp_18189;
                                                
                                                    // Optional fields bytemap
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::HeadingValue _tmp_18190;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value.push_back(_tmp_18190);
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m016130\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::SpeedValue _tmp_18191;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed.push_back(_tmp_18191);
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m016131\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::AccelerationValue _tmp_18192;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration.push_back(_tmp_18192);
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m016132\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration " << tools::green("present");
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value.size() != 0) {
                                                        // Field name: heading_value
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_18193 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0].value = *_tmp_18193;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m016133\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].heading_value[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed.size() != 0) {
                                                        // Field name: abs_speed
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                        uint16_t* _tmp_18194 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0].value = *_tmp_18194;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0].value /= 100.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0].value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m016134\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].abs_speed[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration.size() != 0) {
                                                        // Field name: longitudinal_acceleration
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_18195 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value = *_tmp_18195;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value += -160;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m016135\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].nominal_trajectory.elements[f].longitudinal_acceleration[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                
                                                }
                                                
                                                // Discarding unknown OpenType containers
                                                for(int i = 1; i < *_tmp_18188; i++) {
                                                    uint16_t* _tmp_18196 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) {
                                                    }
                                                
                                                    for(int i = 0; i < *_tmp_18196; i++)
                                                        buffer++;
                                                }
                                                
                                            }
                                    }
                                    
                                    // Field name: mrm_trajectory
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16)
                                    uint8_t* _ext_flag_7990 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016136\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.: " << int(*_ext_flag_7990);
                                    }
                                    
                                    int16_t* _tmp_18197 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_18197;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_18197 = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016137\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory. size: " << int(*_tmp_18197);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int g = 0; g < _if__tmp_18197; g++) {
                                        mad_e2v_madurban_msgs::msg::PathPointPredicted seqof_g;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements.push_back(seqof_g);
                                    
                                            // PathPointPredicted  SEQUENCE
                                                //  deltaLatitude                DeltaLatitude            
                                                //  deltaLongitude               DeltaLongitude           
                                                //  horizontalPositionConfidence PosConfidenceEllipse   OPTIONAL  
                                                //  deltaAltitude                DeltaAltitude            
                                                //  altitudeConfidence           AltitudeConfidence       
                                                //  pathDeltaTime                PathDeltaTimeChoice    OPTIONAL  
                                                //  symmetricAreaOffset          StandardLength9b       OPTIONAL  
                                                //  asymmetricAreaOffset         StandardLength9b       OPTIONAL  
                                                //  headingValue                 HeadingValue           OPTIONAL  Extension group #1
                                                //  absSpeed                     SpeedValue             OPTIONAL  Extension group #1
                                                //  longitudinalAcceleration     AccelerationValue      OPTIONAL  Extension group #1
                                            uint8_t* _ext_flag_7991 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016138\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].: " << int(*_ext_flag_7991);
                                            }
                                            
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PosConfidenceEllipse _tmp_18198;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence.push_back(_tmp_18198);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016139\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PathDeltaTimeChoice _tmp_18199;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time.push_back(_tmp_18199);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016140\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_18200;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset.push_back(_tmp_18200);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016141\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_18201;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset.push_back(_tmp_18201);
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016142\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset " << tools::green("present");
                                            }
                                            
                                            // Field name: delta_latitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_18202 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value = *_tmp_18202;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016143\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_latitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_longitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_18203 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value = *_tmp_18203;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016144\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_longitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence.size() != 0) {
                                                // Field name: horizontal_position_confidence
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    
                                                    // Field name: semi_major_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_18204 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence.value = *_tmp_18204;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016145\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_minor_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_18205 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence.value = *_tmp_18205;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016146\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_minor_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_major_orientation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    uint16_t* _tmp_18206 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation.value = *_tmp_18206;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation.value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016147\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].horizontal_position_confidence[0].semi_major_orientation.value << " (" << __aux64__ << ")";
                                                    }
                                            }
                                            
                                            // Field name: delta_altitude
                                            // Real
                                            // Float
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18207 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value = *_tmp_18207;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value += -12700;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016148\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].delta_altitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: altitude_confidence
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_18208 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_18208;
                                            __aux64__ += 0;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].altitude_confidence.value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016149\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].altitude_confidence.value);
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time.size() != 0) {
                                                // Field name: path_delta_time
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond   
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds   
                                                uint8_t _choice_412 = *(buffer++);
                                                
                                                if(_choice_412 == 0) {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenthOfSecond _tmp_18209;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision.push_back(_tmp_18209);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    uint8_t* _tmp_18210 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0].value = *_tmp_18210;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0].value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016150\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_high_precision[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else if(_choice_412 == 1)  // CHOICE PathDeltaTimeChoice  fieldName(delta_time_big_range)
                                                {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenSeconds _tmp_18211;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range.push_back(_tmp_18211);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    uint8_t* _tmp_18212 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0].value = *_tmp_18212;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0].value /= 0.1;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m016151\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0].delta_time_big_range[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(_choice_412) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].path_delta_time[0]'; message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset.size() != 0) {
                                                // Field name: symmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_18213 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0].value = *_tmp_18213;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m016152\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].symmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset.size() != 0) {
                                                // Field name: asymmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_18214 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0].value = *_tmp_18214;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m016153\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].asymmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            if(*_ext_flag_7991) { // from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g]. 
                                                uint8_t* _tmp_18215 = (uint8_t*) buffer++;  // number of extensions
                                                bool _array_224[*_tmp_18215];
                                                
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m016154\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].: " << static_cast<unsigned int>(*_tmp_18215);
                                                
                                                // Extensions bytemap
                                                for(int i = 0; i < *_tmp_18215; i++)
                                                    _array_224[i] = (*buffer++) != 0;
                                                
                                                if(_array_224[0]) {  // Extension group 1
                                                    uint16_t* _tmp_18216 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) 
                                                        logger->debug() << "|\033[38;5;94m016155\033[0m| Reading open type len from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].: " << _tmp_18216;
                                                
                                                    // Optional fields bytemap
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::HeadingValue _tmp_18217;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value.push_back(_tmp_18217);
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m016156\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::SpeedValue _tmp_18218;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed.push_back(_tmp_18218);
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m016157\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::AccelerationValue _tmp_18219;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration.push_back(_tmp_18219);
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m016158\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration " << tools::green("present");
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value.size() != 0) {
                                                        // Field name: heading_value
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_18220 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0].value = *_tmp_18220;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m016159\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].heading_value[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed.size() != 0) {
                                                        // Field name: abs_speed
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                        uint16_t* _tmp_18221 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0].value = *_tmp_18221;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0].value /= 100.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0].value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m016160\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].abs_speed[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration.size() != 0) {
                                                        // Field name: longitudinal_acceleration
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_18222 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value = *_tmp_18222;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value += -160;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->debug() << "|\033[38;5;94m016161\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.trajectory_advice[0].mrm_trajectory.elements[g].longitudinal_acceleration[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                
                                                }
                                                
                                                // Discarding unknown OpenType containers
                                                for(int i = 1; i < *_tmp_18215; i++) {
                                                    uint16_t* _tmp_18223 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) {
                                                    }
                                                
                                                    for(int i = 0; i < *_tmp_18223; i++)
                                                        buffer++;
                                                }
                                                
                                            }
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice.size() != 0) {
                                // Field name: control_advice
                                    // ControlAdvice  SEQUENCE
                                        //  driveDirection DriveDirection         
                                        //  acceleration   AccelerationValue      
                                        //  steeringAngle  SteeringAngleValue     
                                    
                                    // Field name: drive_direction
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_18224 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18224;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].drive_direction.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].drive_direction.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].drive_direction.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016162\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].drive_direction.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].drive_direction.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].drive_direction.value);
                                    }
                                    
                                    // Field name: acceleration
                                    // Real
                                    // Float
                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18225 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value = *_tmp_18225;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value += -160;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016163\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].acceleration.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: steering_angle
                                    // Integer
                                    // INT16  min(-160) max(160) span(321) datatype(Int16)
                                    uint16_t* _tmp_18226 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = *_tmp_18226;
                                    __aux64__ += -160;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].steering_angle.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016164\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].steering_angle.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].steering_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].steering_angle.value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].steering_angle.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].movement_advice.control_advice[0].steering_angle.value' " << (__aux64__) << " exceeds max allowable (160); message dropped.";
                                        return false;
                                    }
                            }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice.size() != 0) {
                            // Field name: exterior_lights_advice
                            // BitString
                            // BIT_STRING  min(8) max(8) span(1)
                            uint8_t* _tmp_18227 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_18227 + 8;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016165\033[0m| epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice[0].value: " << __aux64__;
                            
                            int _if__tmp_18227 = __aux64__;
                            for(int h = 0; h < _if__tmp_18227; h++) {
                                uint8_t __c__;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice[0].values[h] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice[0].value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].exterior_lights_advice[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice.size() != 0) {
                            // Field name: horn_advice
                            // Enumerated
                            // INT32  min(0) max(3) span(4) datatype(Int32)
                            uint8_t* _tmp_18228 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18228;
                            __aux64__ += 0;
                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice[0].value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice[0].value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016166\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice[0].value) << 
                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].horn_advice[0].value);
                            }
                        }
                        if(*_ext_flag_7970) { // from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e]. 
                            uint8_t* _tmp_18229 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_225[*_tmp_18229];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016167\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[e].: " << static_cast<unsigned int>(*_tmp_18229);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_18229; i++)
                                _array_225[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_18229; i++) {
                                uint16_t* _tmp_18230 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_18230; i++)
                                    buffer++;
                            }
                            
                        }
                }
            }
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.safety.size() != 0) {
                // Field name: safety
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10)
                uint8_t* _ext_flag_8010 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016168\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].: " << int(*_ext_flag_8010);
                }
                
                int16_t* _tmp_18231 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_18231;
                __aux64__ += 1;     // +min
                
                int _if__tmp_18231 = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016169\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0]. size: " << int(*_tmp_18231);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 10) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].value' " << (__aux64__) << " exceeds max allowable (10); message dropped.";
                    return false;
                }
                
                
                for(int i = 0; i < _if__tmp_18231; i++) {
                    mad_e2v_madurban_msgs::msg::SafetyContainer seqof_i;  // SEQUENCE
                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements.push_back(seqof_i);
                
                        // SafetyContainer  SEQUENCE
                            //  subjectStationID StationId           
                            //  objectData       RssObjectData     OPTIONAL  
                            //  rssDynamics      RssDynamics       OPTIONAL  
                            //  rssResults       RssCheckResults     
                        if(*(buffer++)) { 
                            mad_e2v_madurban_msgs::msg::RssObjectData _tmp_18232;
                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data.push_back(_tmp_18232);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016170\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            mad_e2v_madurban_msgs::msg::RssDynamics _tmp_18233;
                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics.push_back(_tmp_18233);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016171\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics " << tools::green("present");
                        }
                        
                        // Field name: subject_station_id
                        // Integer
                        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                        uint32_t* _tmp_18234 = (uint32_t*) buffer; buffer += 4;
                        __aux64__ = *_tmp_18234;
                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].subject_station_id.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016172\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].subject_station_id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].subject_station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].subject_station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
                            return false;
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data.size() != 0) {
                            // Field name: object_data
                                // RssObjectData  SEQUENCE
                                    //  id                          Identifier2B               
                                    //  type                        StationType                
                                    //  deltaPosition               DeltaReferencePosition     
                                    //  heading                     HeadingValue               
                                    //  semiMajorPositionConfidence SemiAxisLength             
                                    //  semiMinorPositionConfidence SemiAxisLength             
                                    //  dimensionLength             VehicleLengthValue         
                                    //  dimensionWidth              VehicleWidth               
                                    //  dimensionHeight             VehicleWidth               
                                    //  speedRange                  VelocityComponentRange     
                                    //  yawRate                     YawRateValue               
                                    //  steeringAngle               SteeringAngleValue       OPTIONAL  
                                if(*(buffer++)) { 
                                    mad_e2v_madurban_msgs::msg::SteeringAngleValue _tmp_18235;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle.push_back(_tmp_18235);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016173\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle " << tools::green("present");
                                }
                                
                                // Field name: id
                                // Integer
                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                uint16_t* _tmp_18236 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_18236;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].id.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016174\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].id.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].id.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                    return false;
                                }
                                
                                // Field name: type
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_18237 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18237;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].type.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016175\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].type.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].type.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].type.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: delta_position
                                    // DeltaReferencePosition  SEQUENCE
                                        //  deltaLatitude  DeltaLatitude      
                                        //  deltaLongitude DeltaLongitude     
                                        //  deltaAltitude  DeltaAltitude      
                                    
                                    // Field name: delta_latitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_18238 = (uint32_t*) buffer; buffer += 4;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value = *_tmp_18238;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value += -131071;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016176\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_latitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_longitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_18239 = (uint32_t*) buffer; buffer += 4;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value = *_tmp_18239;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value += -131071;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016177\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_longitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_altitude
                                    // Real
                                    // Float
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_18240 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value = *_tmp_18240;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value += -12700;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016178\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].delta_position.delta_altitude.value << " (" << __aux64__ << ")";
                                    }
                                
                                // Field name: heading
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18241 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading.value = *_tmp_18241;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016179\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].heading.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_major_position_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18242 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence.value = *_tmp_18242;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016180\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_major_position_confidence.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_minor_position_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18243 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence.value = *_tmp_18243;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016181\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].semi_minor_position_confidence.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: dimension_length
                                // Real
                                // Float
                                // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18244 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value = *_tmp_18244;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value += 1;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016182\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: dimension_width
                                // Real
                                // Float
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18245 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value = *_tmp_18245;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value += 1;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016183\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_width.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: dimension_height
                                // Real
                                // Float
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18246 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value = *_tmp_18246;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value += 1;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016184\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].dimension_height.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: speed_range
                                    // VelocityComponentRange  SEQUENCE
                                        //  minimum    VelocityComponentValue     
                                        //  maximum    VelocityComponentValue     
                                    
                                    // Field name: minimum
                                    // Real
                                    // Float
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_18247 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value = *_tmp_18247;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value += -16383;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016185\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.minimum.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: maximum
                                    // Real
                                    // Float
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_18248 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value = *_tmp_18248;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value += -16383;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016186\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].speed_range.maximum.value << " (" << __aux64__ << ")";
                                    }
                                
                                // Field name: yaw_rate
                                // Real
                                // Float
                                // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18249 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value = *_tmp_18249;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value += -32766;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -32766) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value' " << (__aux64__) << " is less than allowable (-32766); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016187\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].yaw_rate.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle.size() != 0) {
                                    // Field name: steering_angle
                                    // Integer
                                    // INT16  min(-160) max(160) span(321) datatype(Int16)
                                    uint16_t* _tmp_18250 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = *_tmp_18250;
                                    __aux64__ += -160;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016188\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle[0].value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle[0].value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].object_data[0].steering_angle[0].value' " << (__aux64__) << " exceeds max allowable (160); message dropped.";
                                        return false;
                                    }
                                }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics.size() != 0) {
                            // Field name: rss_dynamics
                                // RssDynamics  SEQUENCE
                                    //  lonAccelMax                         LongitudinalAccelerationValue     
                                    //  lonBrakeMax                         LongitudinalAccelerationValue     
                                    //  lonBrakeMin                         LongitudinalAccelerationValue     
                                    //  lonBrakeMinCorrect                  LongitudinalAccelerationValue     
                                    //  latAccelMax                         LateralAccelerationValue          
                                    //  latBrakeMin                         LateralAccelerationValue          
                                    //  lateralFluctuationMargin            LateralFluctuationMargin          
                                    //  responseTime                        DeltaTimeTenthOfSecond            
                                    //  maxSpeedOnAcceleration              SpeedValue                        
                                    //  minLongitudinalSafetyDistance       StandardLength1B                  
                                    //  unstructuredPedestrianTurningRadius StandardLength1B                  
                                    //  unstructuredVehicleMinRadius        StandardLength1B                  
                                    //  unstructuredVehicleYawRateChange    YawAccelerationValue              
                                    //  unstructuredDriveAwayMaxAngle       HeadingValue                      
                                
                                // Field name: lon_accel_max
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18251 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value = *_tmp_18251;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016189\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_accel_max.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lon_brake_max
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18252 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value = *_tmp_18252;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016190\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_max.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lon_brake_min
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18253 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value = *_tmp_18253;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016191\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lon_brake_min_correct
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18254 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value = *_tmp_18254;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016192\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lon_brake_min_correct.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lat_accel_max
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18255 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value = *_tmp_18255;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016193\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_accel_max.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lat_brake_min
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18256 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value = *_tmp_18256;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016194\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lat_brake_min.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lateral_fluctuation_margin
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_18257 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18257;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lateral_fluctuation_margin.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016195\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lateral_fluctuation_margin.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lateral_fluctuation_margin.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lateral_fluctuation_margin.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lateral_fluctuation_margin.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].lateral_fluctuation_margin.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                                
                                // Field name: response_time
                                // Real
                                // Float
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18258 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time.value = *_tmp_18258;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016196\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].response_time.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: max_speed_on_acceleration
                                // Real
                                // Float
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18259 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration.value = *_tmp_18259;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016197\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].max_speed_on_acceleration.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: min_longitudinal_safety_distance
                                // Real
                                // Float
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18260 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance.value = *_tmp_18260;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016198\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].min_longitudinal_safety_distance.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: unstructured_pedestrian_turning_radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18261 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius.value = *_tmp_18261;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016199\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_pedestrian_turning_radius.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: unstructured_vehicle_min_radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18262 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius.value = *_tmp_18262;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016200\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_min_radius.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: unstructured_vehicle_yaw_rate_change
                                // Integer
                                // INT16  min(-2040) max(2041) span(4082) datatype(Int16)
                                uint16_t* _tmp_18263 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_18263;
                                __aux64__ += -2040;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016201\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -2040) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' " << (__aux64__) << " is less than allowable (-2040); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 2041) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' " << (__aux64__) << " exceeds max allowable (2041); message dropped.";
                                    return false;
                                }
                                
                                // Field name: unstructured_drive_away_max_angle
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18264 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle.value = *_tmp_18264;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016202\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_dynamics[0].unstructured_drive_away_max_angle.value << " (" << __aux64__ << ")";
                                }
                        }
                        
                        // Field name: rss_results
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(4) span(5)
                        int16_t* _tmp_18265 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_18265;
                        
                        int _if__tmp_18265 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016203\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results. size: " << int(*_tmp_18265);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        
                        for(int j = 0; j < _if__tmp_18265; j++) {
                            mad_e2v_madurban_msgs::msg::RssCheckResult seqof_j;  // SEQUENCE
                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements.push_back(seqof_j);
                        
                                // RssCheckResult  SEQUENCE
                                    //  v2xLatency        DeltaTimeTenthOfSecond     
                                    //  properResponse    RssProperResponse          
                                    //  rssRoute          RssRoute                 OPTIONAL  
                                    //  vehicleRouteState RssVehicleRouteState     OPTIONAL  
                                if(*(buffer++)) { 
                                    mad_e2v_madurban_msgs::msg::RssRoute _tmp_18266;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route.push_back(_tmp_18266);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016204\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    mad_e2v_madurban_msgs::msg::RssVehicleRouteState _tmp_18267;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state.push_back(_tmp_18267);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016205\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state " << tools::green("present");
                                }
                                
                                // Field name: v2x_latency
                                // Real
                                // Float
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18268 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency.value = *_tmp_18268;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016206\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].v2x_latency.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: proper_response
                                    // RssProperResponse  SEQUENCE
                                        //  responseFlags                     RssProperResponseFlags                   
                                        //  longitudinalResponse              RssLongitudinalResponse                  
                                        //  lateralResponseRight              RssLateralResponse                       
                                        //  lateralResponseLeft               RssLateralResponse                       
                                        //  unstructuredConstellationResponse RssUnstructuredConstellationResponse     
                                        //  headingRanges                     CartesianAngleRanges                     
                                        //  dangerousObjects                  ObjectIdentifierList                     
                                        //  longitudinalRange                 LongitudinalAccelerationRange            
                                        //  lateralRightRange                 LateralAccelerationRange                 
                                        //  lateralLeftRange                  LateralAccelerationRange                 
                                    
                                    // Field name: response_flags
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    uint8_t* _ext_flag_8036 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.response_flags.
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016207\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.response_flags.: " << int(*_ext_flag_8036);
                                    }
                                    
                                    uint8_t* _tmp_18269 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_18269 + 8;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016208\033[0m| epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.response_flags.value: " << __aux64__;
                                    
                                    int _if__tmp_18269 = __aux64__;
                                    for(int k = 0; k < _if__tmp_18269; k++) {
                                        uint8_t __c__;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.response_flags.values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.response_flags.values[k] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.response_flags.value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.response_flags.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: longitudinal_response
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_18270 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18270;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_response.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_response.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_response.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016209\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_response.value);
                                    }
                                    
                                    // Field name: lateral_response_right
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) datatype(Int32)
                                    uint8_t* _tmp_18271 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18271;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_right.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_right.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_right.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016210\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_right.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_right.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_right.value);
                                    }
                                    
                                    // Field name: lateral_response_left
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) datatype(Int32)
                                    uint8_t* _tmp_18272 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18272;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_left.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_left.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_left.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016211\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_left.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_left.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_response_left.value);
                                    }
                                    
                                    // Field name: unstructured_constellation_response
                                    // Enumerated
                                    // INT32  min(0) max(3) span(4) datatype(Int32)
                                    uint8_t* _tmp_18273 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18273;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.unstructured_constellation_response.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.unstructured_constellation_response.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.unstructured_constellation_response.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016212\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.unstructured_constellation_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.unstructured_constellation_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.unstructured_constellation_response.value);
                                    }
                                    
                                    // Field name: heading_ranges
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5)
                                    int16_t* _tmp_18274 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_18274;
                                    
                                    int _if__tmp_18274 = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016213\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges. size: " << int(*_tmp_18274);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int l = 0; l < _if__tmp_18274; l++) {
                                        mad_e2v_madurban_msgs::msg::CartesianAngleRange seqof_l;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements.push_back(seqof_l);
                                    
                                            // CartesianAngleRange  SEQUENCE
                                                //  begin      CartesianAngleValue     
                                                //  end        CartesianAngleValue     
                                            
                                            // Field name: begin
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_18275 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin.value = *_tmp_18275;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin.value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016214\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].begin.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: end
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_18276 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end.value = *_tmp_18276;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end.value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016215\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.heading_ranges.elements[l].end.value << " (" << __aux64__ << ")";
                                            }
                                    }
                                    
                                    // Field name: dangerous_objects
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5)
                                    uint8_t* _ext_flag_8043 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016216\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.: " << int(*_ext_flag_8043);
                                    }
                                    
                                    int16_t* _tmp_18277 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_18277;
                                    
                                    int _if__tmp_18277 = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016217\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects. size: " << int(*_tmp_18277);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int m = 0; m < _if__tmp_18277; m++) {
                                        its_container_v4_etsi_its_cdd_msgs::msg::Identifier2B seqof_m;  // INTEGER
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.elements.push_back(seqof_m);
                                    
                                        // Integer
                                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                        uint16_t* _tmp_18278 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_18278;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.elements[m].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016218\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.elements[m].value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.elements[m].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.elements[m].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.elements[m].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.dangerous_objects.elements[m].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                            return false;
                                        }
                                        
                                        
                                    }
                                    
                                    // Field name: longitudinal_range
                                        // LongitudinalAccelerationRange  SEQUENCE
                                            //  minimum    LongitudinalAccelerationValue     
                                            //  maximum    LongitudinalAccelerationValue     
                                        
                                        // Field name: minimum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18279 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value = *_tmp_18279;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016219\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.minimum.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: maximum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18280 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value = *_tmp_18280;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016220\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.longitudinal_range.maximum.value << " (" << __aux64__ << ")";
                                        }
                                    
                                    // Field name: lateral_right_range
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        
                                        // Field name: minimum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18281 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value = *_tmp_18281;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016221\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.minimum.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: maximum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18282 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value = *_tmp_18282;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016222\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_right_range.maximum.value << " (" << __aux64__ << ")";
                                        }
                                    
                                    // Field name: lateral_left_range
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        
                                        // Field name: minimum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18283 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value = *_tmp_18283;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016223\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.minimum.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: maximum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18284 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value = *_tmp_18284;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016224\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].proper_response.lateral_left_range.maximum.value << " (" << __aux64__ << ")";
                                        }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route.size() != 0) {
                                    // Field name: rss_route
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(4) span(4)
                                    int16_t* _tmp_18285 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_18285;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_18285 = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016225\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0]. size: " << int(*_tmp_18285);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int n = 0; n < _if__tmp_18285; n++) {
                                        its_container_v4_etsi_its_cdd_msgs::msg::DeltaReferencePosition seqof_n;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements.push_back(seqof_n);
                                    
                                            // DeltaReferencePosition  SEQUENCE
                                                //  deltaLatitude  DeltaLatitude      
                                                //  deltaLongitude DeltaLongitude     
                                                //  deltaAltitude  DeltaAltitude      
                                            
                                            // Field name: delta_latitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_18286 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value = *_tmp_18286;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016226\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_latitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_longitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_18287 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value = *_tmp_18287;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016227\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_longitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_altitude
                                            // Real
                                            // Float
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18288 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value = *_tmp_18288;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value += -12700;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016228\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].rss_route[0].elements[n].delta_altitude.value << " (" << __aux64__ << ")";
                                            }
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state.size() != 0) {
                                    // Field name: vehicle_route_state
                                        // RssVehicleRouteState  SEQUENCE
                                            //  routeHeading      HeadingValue                      
                                            //  routeRadius       RouteRadius                       
                                            //  routeHeadingDelta CartesianAngleValue               
                                            //  routeSpeedLon     VelocityComponentValue            
                                            //  routeSpeedLat     VelocityComponentValue            
                                            //  routeAccelLon     LongitudinalAccelerationValue     
                                            //  routeAccelLat     LateralAccelerationValue          
                                            //  avgRouteAccelLon  LongitudinalAccelerationValue     
                                            //  avgRouteAccelLat  LateralAccelerationValue          
                                        
                                        // Field name: route_heading
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18289 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading.value = *_tmp_18289;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016229\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_radius
                                        // Integer
                                        // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                                        uint16_t* _tmp_18290 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_18290;
                                        __aux64__ += -1023;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_radius.value = __aux64__;
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016230\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_radius.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_radius.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_radius.value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_radius.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_radius.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                            return false;
                                        }
                                        
                                        // Field name: route_heading_delta
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18291 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta.value = *_tmp_18291;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016231\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_heading_delta.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_speed_lon
                                        // Real
                                        // Float
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18292 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value = *_tmp_18292;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value += -16383;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016232\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lon.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_speed_lat
                                        // Real
                                        // Float
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18293 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value = *_tmp_18293;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value += -16383;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016233\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_speed_lat.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_accel_lon
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18294 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value = *_tmp_18294;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016234\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lon.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_accel_lat
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18295 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value = *_tmp_18295;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016235\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].route_accel_lat.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: avg_route_accel_lon
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18296 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value = *_tmp_18296;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016236\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lon.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: avg_route_accel_lat
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18297 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value = *_tmp_18297;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016237\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[i].rss_results.elements[j].vehicle_route_state[0].avg_route_accel_lat.value << " (" << __aux64__ << ")";
                                        }
                                }
                        }
                }
            }
        
        if(ros->epu_to_vehicle.epu_low_frequency_container.size() != 0) {
            // Field name: epu_low_frequency_container
                // EPULowFrequencyContainer  SEQUENCE
                    //  epuSectionDimensions   EPUSectionDimensions       
                    //  epuSectionCapabilities EPUSectionCapabilities   OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_8061 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016238\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].: " << int(*_ext_flag_8061);
                }
                
                if(*(buffer++)) { 
                    mad_e2v_madurban_msgs::msg::EPUSectionCapabilities _tmp_18298;
                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.push_back(_tmp_18298);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016239\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities " << tools::green("present");
                }
                
                // Field name: epu_section_dimensions
                    // EPUSectionDimensions  SEQUENCE
                        //  includedShapes IncludedShapes     
                        //  excludedShapes ExcludedShapes     
                    
                    // Field name: included_shapes
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(4) span(4)
                    uint8_t* _ext_flag_8062 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016240\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.: " << int(*_ext_flag_8062);
                    }
                    
                    int16_t* _tmp_18299 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_18299;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_18299 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016241\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes. size: " << int(*_tmp_18299);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                        return false;
                    }
                    
                    
                    for(int o = 0; o < _if__tmp_18299; o++) {
                        its_container_v4_etsi_its_cdd_msgs::msg::Shape seqof_o;  // CHOICE
                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements.push_back(seqof_o);
                    
                        // Choice
                        uint8_t* _ext_flag_8063 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  rectangular   RectangularShape   
                           // #1  circular   CircularShape   
                           // #2  polygonal   PolygonalShape   
                           // #3  elliptical   EllipticalShape   
                           // #4  radial   RadialShape   
                           // #5  radialShapes   RadialShapes   
                        uint8_t _choice_413 = *(buffer++);
                        
                        if(*_ext_flag_8063)
                            _choice_413 += 5 + 1; // Ext addition
                        
                        if(_choice_413 == 0) {
                            its_container_v4_etsi_its_cdd_msgs::msg::RectangularShape _tmp_18300;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular.push_back(_tmp_18300);
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18301;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point.push_back(_tmp_18301);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016242\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18302;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation.push_back(_tmp_18302);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016243\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18303;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height.push_back(_tmp_18303);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016244\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18304;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18304);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016245\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18305 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value = *_tmp_18305;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016246\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18306 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value = *_tmp_18306;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016247\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18307 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18307;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016248\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18308 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length.value = *_tmp_18308;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016249\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_breadth
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18309 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth.value = *_tmp_18309;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016250\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].semi_breadth.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18310 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0].value = *_tmp_18310;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016251\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18311 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0].value = *_tmp_18311;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016252\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].rectangular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_413 == 1)  // CHOICE Shape  fieldName(circular)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::CircularShape _tmp_18312;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular.push_back(_tmp_18312);
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18313;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point.push_back(_tmp_18313);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016253\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18314;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height.push_back(_tmp_18314);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016254\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18315;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18315);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016255\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18316 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value = *_tmp_18316;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016256\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18317 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value = *_tmp_18317;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016257\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18318 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18318;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016258\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18319 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius.value = *_tmp_18319;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016259\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].radius.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18320 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0].value = *_tmp_18320;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016260\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].circular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_413 == 2)  // CHOICE Shape  fieldName(polygonal)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::PolygonalShape _tmp_18321;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal.push_back(_tmp_18321);
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18322;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point.push_back(_tmp_18322);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016261\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18323;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height.push_back(_tmp_18323);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016262\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18324;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18324);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016263\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18325 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value = *_tmp_18325;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016264\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18326 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value = *_tmp_18326;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016265\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18327 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18327;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016266\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: polygon
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_8079 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016267\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.: " << int(*_ext_flag_8079);
                                }
                                
                                int16_t* _tmp_18328 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_18328;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_18328 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016268\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon. size: " << int(*_tmp_18328);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int p = 0; p < _if__tmp_18328; p++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d seqof_p;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements.push_back(seqof_p);
                                
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18329;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate.push_back(_tmp_18329);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016269\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18330 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value = *_tmp_18330;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016270\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18331 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value = *_tmp_18331;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016271\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18332 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value = *_tmp_18332;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016272\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].polygon.elements[p].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18333 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0].value = *_tmp_18333;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016273\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].polygonal[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_413 == 3)  // CHOICE Shape  fieldName(elliptical)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::EllipticalShape _tmp_18334;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical.push_back(_tmp_18334);
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18335;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point.push_back(_tmp_18335);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016274\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18336;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation.push_back(_tmp_18336);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016275\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18337;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height.push_back(_tmp_18337);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016276\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18338;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18338);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016277\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18339 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value = *_tmp_18339;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016278\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18340 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value = *_tmp_18340;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016279\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18341 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18341;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016280\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_major_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18342 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length.value = *_tmp_18342;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016281\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_major_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_minor_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18343 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length.value = *_tmp_18343;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016282\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].semi_minor_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18344 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0].value = *_tmp_18344;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016283\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18345 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0].value = *_tmp_18345;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016284\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].elliptical[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_413 == 4)  // CHOICE Shape  fieldName(radial)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShape _tmp_18346;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial.push_back(_tmp_18346);
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18347;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point.push_back(_tmp_18347);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016285\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18348;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start.push_back(_tmp_18348);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016286\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18349;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end.push_back(_tmp_18349);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016287\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18350;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18350);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016288\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18351 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value = *_tmp_18351;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016289\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18352 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value = *_tmp_18352;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016290\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18353 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18353;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016291\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: range
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18354 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range.value = *_tmp_18354;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016292\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].range.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_start
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18355 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start.value = *_tmp_18355;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016293\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_end
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18356 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end.value = *_tmp_18356;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016294\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field name: vertical_opening_angle_start
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18357 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0].value = *_tmp_18357;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016295\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field name: vertical_opening_angle_end
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18358 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0].value = *_tmp_18358;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016296\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial[0].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_413 == 5)  // CHOICE Shape  fieldName(radial_shapes)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShapes _tmp_18359;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes.push_back(_tmp_18359);
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinateSmall _tmp_18360;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate.push_back(_tmp_18360);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016297\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate " << tools::green("present");
                                }
                                
                                // Field name: ref_point_id
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_18361 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18361;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].ref_point_id.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016298\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].ref_point_id.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: x_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18362 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value = *_tmp_18362;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016299\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].x_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: y_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18363 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value = *_tmp_18363;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016300\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].y_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field name: z_coordinate
                                    // Real
                                    // Float
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_18364 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value = *_tmp_18364;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value += -3094;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016301\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                // Field name: radial_shapes_list
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_8102 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016302\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.: " << int(*_ext_flag_8102);
                                }
                                
                                int16_t* _tmp_18365 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_18365;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_18365 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016303\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list. size: " << int(*_tmp_18365);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int q = 0; q < _if__tmp_18365; q++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::RadialShapeDetails seqof_q;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements.push_back(seqof_q);
                                
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18366;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start.push_back(_tmp_18366);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016304\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18367;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end.push_back(_tmp_18367);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016305\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end " << tools::green("present");
                                        }
                                        
                                        // Field name: range
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18368 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range.value = *_tmp_18368;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016306\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].range.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_start
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18369 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value = *_tmp_18369;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016307\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_end
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18370 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value = *_tmp_18370;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016308\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start.size() != 0) {
                                            // Field name: vertical_opening_angle_start
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_18371 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value = *_tmp_18371;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016309\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end.size() != 0) {
                                            // Field name: vertical_opening_angle_end
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_18372 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value = *_tmp_18372;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016310\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[o].radial_shapes[0].radial_shapes_list.elements[q].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                        }
                        else
                        {
                            uint16_t* _tmp_18373 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_18373);            // Ignoring opentype data
                        }
                    }
                    
                    // Field name: excluded_shapes
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(4) span(5)
                    uint8_t* _ext_flag_8108 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016311\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.: " << int(*_ext_flag_8108);
                    }
                    
                    int16_t* _tmp_18374 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_18374;
                    
                    int _if__tmp_18374 = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016312\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes. size: " << int(*_tmp_18374);
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                        return false;
                    }
                    
                    
                    for(int r = 0; r < _if__tmp_18374; r++) {
                        its_container_v4_etsi_its_cdd_msgs::msg::Shape seqof_r;  // CHOICE
                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements.push_back(seqof_r);
                    
                        // Choice
                        uint8_t* _ext_flag_8109 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  rectangular   RectangularShape   
                           // #1  circular   CircularShape   
                           // #2  polygonal   PolygonalShape   
                           // #3  elliptical   EllipticalShape   
                           // #4  radial   RadialShape   
                           // #5  radialShapes   RadialShapes   
                        uint8_t _choice_414 = *(buffer++);
                        
                        if(*_ext_flag_8109)
                            _choice_414 += 5 + 1; // Ext addition
                        
                        if(_choice_414 == 0) {
                            its_container_v4_etsi_its_cdd_msgs::msg::RectangularShape _tmp_18375;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular.push_back(_tmp_18375);
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18376;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point.push_back(_tmp_18376);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016313\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18377;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation.push_back(_tmp_18377);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016314\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18378;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height.push_back(_tmp_18378);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016315\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18379;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18379);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016316\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18380 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value = *_tmp_18380;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016317\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18381 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value = *_tmp_18381;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016318\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18382 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18382;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016319\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18383 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length.value = *_tmp_18383;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016320\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_breadth
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18384 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth.value = *_tmp_18384;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016321\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].semi_breadth.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18385 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0].value = *_tmp_18385;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016322\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18386 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0].value = *_tmp_18386;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016323\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].rectangular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_414 == 1)  // CHOICE Shape  fieldName(circular)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::CircularShape _tmp_18387;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular.push_back(_tmp_18387);
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18388;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point.push_back(_tmp_18388);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016324\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18389;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height.push_back(_tmp_18389);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016325\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18390;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18390);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016326\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18391 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value = *_tmp_18391;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016327\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18392 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value = *_tmp_18392;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016328\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18393 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18393;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016329\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18394 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius.value = *_tmp_18394;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016330\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].radius.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18395 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0].value = *_tmp_18395;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016331\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].circular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_414 == 2)  // CHOICE Shape  fieldName(polygonal)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::PolygonalShape _tmp_18396;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal.push_back(_tmp_18396);
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18397;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point.push_back(_tmp_18397);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016332\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18398;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height.push_back(_tmp_18398);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016333\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18399;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18399);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016334\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18400 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value = *_tmp_18400;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016335\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18401 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value = *_tmp_18401;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016336\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18402 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18402;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016337\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: polygon
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_8125 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016338\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.: " << int(*_ext_flag_8125);
                                }
                                
                                int16_t* _tmp_18403 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_18403;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_18403 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016339\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon. size: " << int(*_tmp_18403);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int s = 0; s < _if__tmp_18403; s++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d seqof_s;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements.push_back(seqof_s);
                                
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18404;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate.push_back(_tmp_18404);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016340\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18405 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value = *_tmp_18405;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016341\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18406 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value = *_tmp_18406;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016342\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18407 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value = *_tmp_18407;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016343\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].polygon.elements[s].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18408 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0].value = *_tmp_18408;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016344\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].polygonal[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_414 == 3)  // CHOICE Shape  fieldName(elliptical)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::EllipticalShape _tmp_18409;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical.push_back(_tmp_18409);
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18410;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point.push_back(_tmp_18410);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016345\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18411;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation.push_back(_tmp_18411);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016346\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_18412;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height.push_back(_tmp_18412);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016347\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18413;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18413);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016348\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18414 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value = *_tmp_18414;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016349\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18415 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value = *_tmp_18415;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016350\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18416 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18416;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016351\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_major_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18417 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length.value = *_tmp_18417;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016352\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_major_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_minor_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18418 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length.value = *_tmp_18418;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016353\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].semi_minor_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18419 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0].value = *_tmp_18419;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016354\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18420 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0].value = *_tmp_18420;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016355\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].elliptical[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_414 == 4)  // CHOICE Shape  fieldName(radial)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShape _tmp_18421;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial.push_back(_tmp_18421);
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_18422;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point.push_back(_tmp_18422);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016356\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18423;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start.push_back(_tmp_18423);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016357\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18424;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end.push_back(_tmp_18424);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016358\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_18425;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate.push_back(_tmp_18425);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016359\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18426 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value = *_tmp_18426;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016360\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_18427 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value = *_tmp_18427;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016361\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_18428 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_18428;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016362\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: range
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18429 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range.value = *_tmp_18429;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016363\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].range.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_start
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18430 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start.value = *_tmp_18430;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016364\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_end
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18431 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end.value = *_tmp_18431;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016365\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field name: vertical_opening_angle_start
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18432 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0].value = *_tmp_18432;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016366\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field name: vertical_opening_angle_end
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_18433 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0].value = *_tmp_18433;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016367\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial[0].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_414 == 5)  // CHOICE Shape  fieldName(radial_shapes)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShapes _tmp_18434;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes.push_back(_tmp_18434);
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinateSmall _tmp_18435;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate.push_back(_tmp_18435);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016368\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate " << tools::green("present");
                                }
                                
                                // Field name: ref_point_id
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_18436 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18436;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].ref_point_id.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016369\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].ref_point_id.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: x_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18437 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value = *_tmp_18437;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016370\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].x_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: y_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18438 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value = *_tmp_18438;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016371\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].y_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field name: z_coordinate
                                    // Real
                                    // Float
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_18439 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value = *_tmp_18439;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value += -3094;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016372\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                // Field name: radial_shapes_list
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_8148 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016373\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.: " << int(*_ext_flag_8148);
                                }
                                
                                int16_t* _tmp_18440 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_18440;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_18440 = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016374\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list. size: " << int(*_tmp_18440);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int t = 0; t < _if__tmp_18440; t++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::RadialShapeDetails seqof_t;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements.push_back(seqof_t);
                                
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18441;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start.push_back(_tmp_18441);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016375\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_18442;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end.push_back(_tmp_18442);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m016376\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end " << tools::green("present");
                                        }
                                        
                                        // Field name: range
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18443 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range.value = *_tmp_18443;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016377\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].range.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_start
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18444 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start.value = *_tmp_18444;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016378\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_end
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_18445 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end.value = *_tmp_18445;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016379\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start.size() != 0) {
                                            // Field name: vertical_opening_angle_start
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_18446 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0].value = *_tmp_18446;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016380\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end.size() != 0) {
                                            // Field name: vertical_opening_angle_end
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_18447 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0].value = *_tmp_18447;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016381\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[r].radial_shapes[0].radial_shapes_list.elements[t].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                        }
                        else
                        {
                            uint16_t* _tmp_18448 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_18448);            // Ignoring opentype data
                        }
                    }
                
                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0) {
                    // Field name: epu_section_capabilities
                        // EPUSectionCapabilities  SEQUENCE
                            //  companyName EPUSectionCapabilities_companyName     
                            //  sensorTypes SensorTypes                            
                            //  ...
                        uint8_t* _ext_flag_8154 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016382\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].: " << int(*_ext_flag_8154);
                        }
                        
                        
                        // Field name: company_name
                        // Text
                        
                        // TEXT  min(1) max(24) span(24)
                        uint8_t* _tmp_18449 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18449 + 1;
                        buffer += 1;
                        
                        int _if__tmp_18449 = __aux64__;
                        for(int u = 0; u < _if__tmp_18449; u++) {  // EPUSectionCapabilities_companyName
                            char* __tmp__ = (char*)buffer++;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value += *__tmp__;
                        }
                        
                        // Field name: sensor_types
                        // BitString
                        // BIT_STRING  min(16) max(16) span(1)
                        uint8_t* _ext_flag_8155 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016383\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.: " << int(*_ext_flag_8155);
                        }
                        
                        uint8_t* _tmp_18450 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18450 + 16;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016384\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value: " << __aux64__;
                        
                        int _if__tmp_18450 = __aux64__;
                        for(int v = 0; v < _if__tmp_18450; v++) {
                            uint8_t __c__;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values[v] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 16) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (__aux64__) << " is less than allowable (16); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                            return false;
                        }
                        if(*_ext_flag_8154) { // from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0]. 
                            uint8_t* _tmp_18451 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_226[*_tmp_18451];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016385\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].: " << static_cast<unsigned int>(*_tmp_18451);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_18451; i++)
                                _array_226[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_18451; i++) {
                                uint16_t* _tmp_18452 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_18452; i++)
                                    buffer++;
                            }
                            
                        }
                }
                if(*_ext_flag_8061) { // from ros->epu_to_vehicle.epu_low_frequency_container[0]. 
                    uint8_t* _tmp_18453 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_227[*_tmp_18453];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016386\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_low_frequency_container[0].: " << static_cast<unsigned int>(*_tmp_18453);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_18453; i++)
                        _array_227[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_18453; i++) {
                        uint16_t* _tmp_18454 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_18454; i++)
                            buffer++;
                    }
                    
                }
        }
	
	        return true;
        }
    }
}